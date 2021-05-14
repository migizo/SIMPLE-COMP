/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 6.0.7

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2020 - Raw Material Software Limited.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include <JuceHeader.h>
#include "PluginProcessor.h"
#include "Knob.h"
#include "ExtendToggle.h"
#include "AnimatorByCount.h"

typedef juce::AudioProcessorValueTreeState::SliderAttachment KnobAttachment;
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class GuiComponent  : public juce::Component,
                      public juce::Slider::Listener,
                      public juce::Button::Listener
{
public:
    //==============================================================================
    GuiComponent (SIMPLECOMPAudioProcessor& p);
    ~GuiComponent() override;

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.

    // called by pluginEditor
    void updateSize();
    //[/UserMethods]

    void paint (juce::Graphics& g) override;
    void resized() override;
    void sliderValueChanged (juce::Slider* sliderThatWasMoved) override;
    void buttonClicked (juce::Button* buttonThatWasClicked) override;

    // Binary resources:
    static const char* bg_png;
    static const int bg_pngSize;
    static const char* rectButtonR1_png;
    static const int rectButtonR1_pngSize;
    static const char* rectButtonR2_png;
    static const int rectButtonR2_pngSize;
    static const char* rectButtonR3_png;
    static const int rectButtonR3_pngSize;
    static const char* rectButtonR4_png;
    static const int rectButtonR4_pngSize;
    static const char* extendToggle_png;
    static const int extendToggle_pngSize;
    static const char* knob_png;
    static const int knob_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    SIMPLECOMPAudioProcessor& processor;
    juce::AudioProcessorValueTreeState& valueTreeState;
    Knob knob;
    std::unique_ptr<KnobAttachment> attackAttachment;
    std::unique_ptr<KnobAttachment> releaseAttachment;
    std::unique_ptr<KnobAttachment> thresholdAttachment;
    std::unique_ptr<KnobAttachment> ratioAttachment;
    std::unique_ptr<KnobAttachment> volumeAttachment;

    // extendToggle
    ExtendToggle extendToggleLookAndFeel;
    double defaultHeight = 336.0;
    double extendHeight = 582.0;
    AnimatorByCount extendToggleAnimator;

    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<juce::Slider> attackKnob;
    std::unique_ptr<juce::Slider> releaseKnob;
    std::unique_ptr<juce::Slider> thresholdKnob;
    std::unique_ptr<juce::Slider> ratioKnob;
    std::unique_ptr<juce::Slider> volumeKnob;
    std::unique_ptr<juce::ImageButton> extendToggle;
    std::unique_ptr<juce::ImageButton> preset01Button;
    std::unique_ptr<juce::ImageButton> preset02Button;
    std::unique_ptr<juce::ImageButton> preset03Button;
    std::unique_ptr<juce::ImageButton> preset04Button;
    juce::Image cachedImage_bg_png_1;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (GuiComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

