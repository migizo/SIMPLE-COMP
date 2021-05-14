/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
SIMPLECOMPAudioProcessor::SIMPLECOMPAudioProcessor()
#ifndef JucePlugin_PreferredChannelConfigurations
     : AudioProcessor (BusesProperties()
                     #if ! JucePlugin_IsMidiEffect
                      #if ! JucePlugin_IsSynth
                       .withInput  ("Input",  juce::AudioChannelSet::stereo(), true)
                      #endif
                       .withOutput ("Output", juce::AudioChannelSet::stereo(), true)
                     #endif
                       ),
#else
    :
#endif
    parameters(*this, nullptr, juce::Identifier(JucePlugin_Name), 
    {
        std::make_unique<juce::AudioParameterFloat>(TRANS("ATTACK"), TRANS("ATTACK"), juce::NormalisableRange<float>(0.1f, 1000.f, 0.1f), 50.0f),
        std::make_unique<juce::AudioParameterFloat>(TRANS("RELEASE"), TRANS("RELEASE"), juce::NormalisableRange<float>(1.f, 3000.f, 1.f), 50.0f),
        std::make_unique<juce::AudioParameterFloat>(TRANS("THRESHOLD"), TRANS("THRESHOLD"), juce::NormalisableRange<float>(-60.f, 6.f, 0.1f), -12.f),
        std::make_unique<juce::AudioParameterFloat>(TRANS("RATIO"), TRANS("RATIO"), juce::NormalisableRange<float>(1.f, 32.f, 0.1f), 1.f),
        std::make_unique<juce::AudioParameterFloat>(TRANS("VOLUME"), TRANS("VOLUME"), juce::NormalisableRange<float>(-36.f, 36.f, 0.1f), -12.f)
    }), comp(), volume()
{
    attackParameter = parameters.getRawParameterValue("ATTACK");
    releaseParameter = parameters.getRawParameterValue("RELEASE");
    thresholdParameter = parameters.getRawParameterValue("THRESHOLD");
    ratioParameter = parameters.getRawParameterValue("RATIO");
    volumeParameter = parameters.getRawParameterValue("VOLUME");
}

SIMPLECOMPAudioProcessor::~SIMPLECOMPAudioProcessor()
{
}

//==============================================================================
const juce::String SIMPLECOMPAudioProcessor::getName() const
{
    return JucePlugin_Name;
}

bool SIMPLECOMPAudioProcessor::acceptsMidi() const
{
   #if JucePlugin_WantsMidiInput
    return true;
   #else
    return false;
   #endif
}

bool SIMPLECOMPAudioProcessor::producesMidi() const
{
   #if JucePlugin_ProducesMidiOutput
    return true;
   #else
    return false;
   #endif
}

bool SIMPLECOMPAudioProcessor::isMidiEffect() const
{
   #if JucePlugin_IsMidiEffect
    return true;
   #else
    return false;
   #endif
}

double SIMPLECOMPAudioProcessor::getTailLengthSeconds() const
{
    return 0.0;
}

int SIMPLECOMPAudioProcessor::getNumPrograms()
{
    return 1;   // NB: some hosts don't cope very well if you tell them there are 0 programs,
                // so this should be at least 1, even if you're not really implementing programs.
}

int SIMPLECOMPAudioProcessor::getCurrentProgram()
{
    return 0;
}

void SIMPLECOMPAudioProcessor::setCurrentProgram (int index)
{
}

const juce::String SIMPLECOMPAudioProcessor::getProgramName (int index)
{
    return {};
}

void SIMPLECOMPAudioProcessor::changeProgramName (int index, const juce::String& newName)
{
}

//==============================================================================
void SIMPLECOMPAudioProcessor::prepareToPlay (double sampleRate, int samplesPerBlock)
{
    spec.sampleRate = sampleRate;
    spec.numChannels = 2;
    spec.maximumBlockSize = samplesPerBlock;
    
    comp.prepare(spec);
    volume.prepare(spec);
}

void SIMPLECOMPAudioProcessor::releaseResources()
{
    // When playback stops, you can use this as an opportunity to free up any
    // spare memory, etc.
}

#ifndef JucePlugin_PreferredChannelConfigurations
bool SIMPLECOMPAudioProcessor::isBusesLayoutSupported (const BusesLayout& layouts) const
{
  #if JucePlugin_IsMidiEffect
    juce::ignoreUnused (layouts);
    return true;
  #else
    // This is the place where you check if the layout is supported.
    // In this template code we only support mono or stereo.
    // Some plugin hosts, such as certain GarageBand versions, will only
    // load plugins that support stereo bus layouts.
    if (layouts.getMainOutputChannelSet() != juce::AudioChannelSet::mono()
     && layouts.getMainOutputChannelSet() != juce::AudioChannelSet::stereo())
        return false;

    // This checks if the input layout matches the output layout
   #if ! JucePlugin_IsSynth
    if (layouts.getMainOutputChannelSet() != layouts.getMainInputChannelSet())
        return false;
   #endif

    return true;
  #endif
}
#endif

void SIMPLECOMPAudioProcessor::processBlock (juce::AudioBuffer<float>& buffer, juce::MidiBuffer& midiMessages)
{
    juce::ScopedNoDenormals noDenormals;
    auto totalNumInputChannels  = getTotalNumInputChannels();
    auto totalNumOutputChannels = getTotalNumOutputChannels();

    for (auto i = totalNumInputChannels; i < totalNumOutputChannels; ++i) {
        buffer.clear (i, 0, buffer.getNumSamples());
    }

    // parameter setting
    volume.setGainDecibels(*volumeParameter);
    
    // comp setting
    comp.setThreshold(*thresholdParameter);
    comp.setRatio(*ratioParameter);
    comp.setAttack(*attackParameter);
    comp.setRelease(*releaseParameter);
    
    // buffer -> processContextReplacing for send to dsp.
    juce::dsp::AudioBlock<float> audioBlock(buffer);
    auto cb = audioBlock.getSubsetChannelBlock(1, 1);
    juce::dsp::ProcessContextReplacing<float> context(cb);
    
    comp.process(context);
    volume.process(context);
}

//==============================================================================
bool SIMPLECOMPAudioProcessor::hasEditor() const
{
    return true; // (change this to false if you choose to not supply an editor)
}

juce::AudioProcessorEditor* SIMPLECOMPAudioProcessor::createEditor()
{
    return new SIMPLECOMPAudioProcessorEditor (*this);
}

//==============================================================================
void SIMPLECOMPAudioProcessor::getStateInformation (juce::MemoryBlock& destData)
{
    // load from xml
    auto state = parameters.copyState();
    std::unique_ptr<juce::XmlElement> xml (state.createXml());
    copyXmlToBinary (*xml, destData);
}

void SIMPLECOMPAudioProcessor::setStateInformation (const void* data, int sizeInBytes)
{
    // save to xml
    std::unique_ptr<juce::XmlElement> xmlState (getXmlFromBinary (data, sizeInBytes));
 
    if (xmlState.get() != nullptr) 
    {
        if (xmlState->hasTagName (parameters.state.getType())) 
        {
            parameters.replaceState (juce::ValueTree::fromXml (*xmlState));
        }
    }
}

//==============================================================================
// This creates new instances of the plugin..
juce::AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new SIMPLECOMPAudioProcessor();
}
