/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"
#include "GuiComponent.h"
//==============================================================================
/**
*/
class SIMPLECOMPAudioProcessorEditor  : public juce::AudioProcessorEditor,
                                        private juce::Timer
{
public:
    SIMPLECOMPAudioProcessorEditor (SIMPLECOMPAudioProcessor&);
    ~SIMPLECOMPAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    void timerCallback() override;
    SIMPLECOMPAudioProcessor& audioProcessor;
    GuiComponent guiComponent;


    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SIMPLECOMPAudioProcessorEditor)
};
