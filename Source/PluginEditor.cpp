/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
SIMPLECOMPAudioProcessorEditor::SIMPLECOMPAudioProcessorEditor (SIMPLECOMPAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p), guiComponent(p)
{
     addAndMakeVisible (guiComponent);
    
    setSize (340, 582);
    startTimerHz(60);
}

SIMPLECOMPAudioProcessorEditor::~SIMPLECOMPAudioProcessorEditor()
{
    stopTimer();
}

//==============================================================================
void SIMPLECOMPAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));
}

void SIMPLECOMPAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}

//==============================================================================
void SIMPLECOMPAudioProcessorEditor::timerCallback()
{
    guiComponent.updateSize();
    setSize(guiComponent.getWidth(), guiComponent.getHeight());
}
