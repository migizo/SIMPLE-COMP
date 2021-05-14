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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "GuiComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
GuiComponent::GuiComponent (SIMPLECOMPAudioProcessor& p)
    : processor(p),valueTreeState(p.parameters)
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    attackKnob.reset (new juce::Slider ("attackKnob"));
    addAndMakeVisible (attackKnob.get());
    attackKnob->setRange (0.01, 1000, 0.1);
    attackKnob->setSliderStyle (juce::Slider::Rotary);
    attackKnob->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 50, 16);
    attackKnob->addListener (this);

    attackKnob->setBounds (71, 366, 50, 70);

    releaseKnob.reset (new juce::Slider ("releaseKnob"));
    addAndMakeVisible (releaseKnob.get());
    releaseKnob->setRange (1, 3000, 0.1);
    releaseKnob->setSliderStyle (juce::Slider::Rotary);
    releaseKnob->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 50, 16);
    releaseKnob->addListener (this);

    releaseKnob->setBounds (217, 366, 50, 70);

    thresholdKnob.reset (new juce::Slider ("thresholdKnob"));
    addAndMakeVisible (thresholdKnob.get());
    thresholdKnob->setRange (-60, 6, 0.1);
    thresholdKnob->setSliderStyle (juce::Slider::Rotary);
    thresholdKnob->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 50, 16);
    thresholdKnob->addListener (this);

    thresholdKnob->setBounds (47, 488, 50, 70);

    ratioKnob.reset (new juce::Slider ("ratioKnob"));
    addAndMakeVisible (ratioKnob.get());
    ratioKnob->setRange (1, 32, 0.1);
    ratioKnob->setSliderStyle (juce::Slider::Rotary);
    ratioKnob->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 50, 16);
    ratioKnob->addListener (this);

    ratioKnob->setBounds (146, 488, 50, 70);

    volumeKnob.reset (new juce::Slider ("volumeKnob"));
    addAndMakeVisible (volumeKnob.get());
    volumeKnob->setRange (-36, 36, 0.1);
    volumeKnob->setSliderStyle (juce::Slider::Rotary);
    volumeKnob->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 50, 16);
    volumeKnob->addListener (this);

    volumeKnob->setBounds (246, 488, 50, 70);

    extendToggle.reset (new juce::ImageButton ("extendToggle"));
    addAndMakeVisible (extendToggle.get());
    extendToggle->setButtonText (TRANS("new button"));
    extendToggle->addListener (this);

    extendToggle->setImages (false, true, true,
                             juce::ImageCache::getFromMemory (extendToggle_png, extendToggle_pngSize), 1.000f, juce::Colour (0x00000000),
                             juce::ImageCache::getFromMemory (extendToggle_png, extendToggle_pngSize), 0.900f, juce::Colour (0x00000000),
                             juce::ImageCache::getFromMemory (extendToggle_png, extendToggle_pngSize), 0.800f, juce::Colour (0x00000000));
    extendToggle->setBounds (25, 270, 288, 68);

    preset01Button.reset (new juce::ImageButton ("preset01Button"));
    addAndMakeVisible (preset01Button.get());
    preset01Button->setButtonText (TRANS("new button"));
    preset01Button->setRadioGroupId (1);
    preset01Button->addListener (this);

    preset01Button->setImages (false, true, true,
                               juce::ImageCache::getFromMemory (rectButtonR1_png, rectButtonR1_pngSize), 1.000f, juce::Colour (0x00000000),
                               juce::ImageCache::getFromMemory (rectButtonR1_png, rectButtonR1_pngSize), 0.900f, juce::Colour (0x00000000),
                               juce::ImageCache::getFromMemory (rectButtonR1_png, rectButtonR1_pngSize), 0.800f, juce::Colour (0x00000000));
    preset01Button->setBounds (26, 158, 128, 32);

    preset02Button.reset (new juce::ImageButton ("preset02Button"));
    addAndMakeVisible (preset02Button.get());
    preset02Button->setButtonText (TRANS("new button"));
    preset02Button->setRadioGroupId (1);
    preset02Button->addListener (this);

    preset02Button->setImages (false, true, true,
                               juce::ImageCache::getFromMemory (rectButtonR2_png, rectButtonR2_pngSize), 1.000f, juce::Colour (0x00000000),
                               juce::ImageCache::getFromMemory (rectButtonR2_png, rectButtonR2_pngSize), 0.900f, juce::Colour (0x00000000),
                               juce::ImageCache::getFromMemory (rectButtonR2_png, rectButtonR2_pngSize), 0.800f, juce::Colour (0x00000000));
    preset02Button->setBounds (179, 158, 128, 32);

    preset03Button.reset (new juce::ImageButton ("preset03Button"));
    addAndMakeVisible (preset03Button.get());
    preset03Button->setButtonText (TRANS("new button"));
    preset03Button->setRadioGroupId (1);
    preset03Button->addListener (this);

    preset03Button->setImages (false, true, true,
                               juce::ImageCache::getFromMemory (rectButtonR3_png, rectButtonR3_pngSize), 1.000f, juce::Colour (0x00000000),
                               juce::ImageCache::getFromMemory (rectButtonR3_png, rectButtonR3_pngSize), 0.900f, juce::Colour (0x00000000),
                               juce::ImageCache::getFromMemory (rectButtonR3_png, rectButtonR3_pngSize), 0.800f, juce::Colour (0x00000000));
    preset03Button->setBounds (26, 208, 128, 32);

    preset04Button.reset (new juce::ImageButton ("preset04Button"));
    addAndMakeVisible (preset04Button.get());
    preset04Button->setButtonText (TRANS("new button"));
    preset04Button->setRadioGroupId (1);
    preset04Button->addListener (this);

    preset04Button->setImages (false, true, true,
                               juce::ImageCache::getFromMemory (rectButtonR4_png, rectButtonR4_pngSize), 1.000f, juce::Colour (0x00000000),
                               juce::ImageCache::getFromMemory (rectButtonR4_png, rectButtonR4_pngSize), 0.900f, juce::Colour (0x00000000),
                               juce::ImageCache::getFromMemory (rectButtonR4_png, rectButtonR4_pngSize), 0.800f, juce::Colour (0x00000000));
    preset04Button->setBounds (179, 208, 128, 32);

    cachedImage_bg_png_1 = juce::ImageCache::getFromMemory (bg_png, bg_pngSize);

    //[UserPreSize]
    attackKnob->setLookAndFeel(&knob);
    releaseKnob->setLookAndFeel(&knob);
    thresholdKnob->setLookAndFeel(&knob);
    ratioKnob->setLookAndFeel(&knob);
    volumeKnob->setLookAndFeel(&knob);
    attackKnob->setTextValueSuffix("ms");
    releaseKnob->setTextValueSuffix("ms");
    ratioKnob->setTextValueSuffix(":1");

    attackAttachment.reset(new KnobAttachment(valueTreeState, "ATTACK", *attackKnob.get()));
    releaseAttachment.reset(new KnobAttachment(valueTreeState, "RELEASE", *releaseKnob.get()));
    thresholdAttachment.reset(new KnobAttachment(valueTreeState, "THRESHOLD", *thresholdKnob.get()));
    ratioAttachment.reset(new KnobAttachment(valueTreeState, "RATIO", *ratioKnob.get()));
    volumeAttachment.reset(new KnobAttachment(valueTreeState, "VOLUME", *volumeKnob.get()));

    extendToggle->setClickingTogglesState(true);
    extendToggle->setLookAndFeel(&extendToggleLookAndFeel);

    preset01Button->setClickingTogglesState (true);
    preset02Button->setClickingTogglesState (true);
    preset03Button->setClickingTogglesState (true);
    preset04Button->setClickingTogglesState (true);

    //[/UserPreSize]

    setSize (340, 336);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

GuiComponent::~GuiComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    attackAttachment = nullptr;
    releaseAttachment = nullptr;
    thresholdAttachment = nullptr;
    ratioAttachment = nullptr;
    volumeAttachment = nullptr;
    //[/Destructor_pre]

    attackKnob = nullptr;
    releaseKnob = nullptr;
    thresholdKnob = nullptr;
    ratioKnob = nullptr;
    volumeKnob = nullptr;
    extendToggle = nullptr;
    preset01Button = nullptr;
    preset02Button = nullptr;
    preset03Button = nullptr;
    preset04Button = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void GuiComponent::paint (juce::Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (juce::Colour (0xff323e44));

    {
        int x = 0, y = 0, width = 340, height = 581;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (juce::Colours::black);
        g.drawImage (cachedImage_bg_png_1,
                     x, y, width, height,
                     0, 0, cachedImage_bg_png_1.getWidth(), cachedImage_bg_png_1.getHeight());
    }

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void GuiComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void GuiComponent::sliderValueChanged (juce::Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == attackKnob.get())
    {
        //[UserSliderCode_attackKnob] -- add your slider handling code here..
        //[/UserSliderCode_attackKnob]
    }
    else if (sliderThatWasMoved == releaseKnob.get())
    {
        //[UserSliderCode_releaseKnob] -- add your slider handling code here..
        //[/UserSliderCode_releaseKnob]
    }
    else if (sliderThatWasMoved == thresholdKnob.get())
    {
        //[UserSliderCode_thresholdKnob] -- add your slider handling code here..
        //[/UserSliderCode_thresholdKnob]
    }
    else if (sliderThatWasMoved == ratioKnob.get())
    {
        //[UserSliderCode_ratioKnob] -- add your slider handling code here..
        //[/UserSliderCode_ratioKnob]
    }
    else if (sliderThatWasMoved == volumeKnob.get())
    {
        //[UserSliderCode_volumeKnob] -- add your slider handling code here..
        //[/UserSliderCode_volumeKnob]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void GuiComponent::buttonClicked (juce::Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == extendToggle.get())
    {
        //[UserButtonCode_extendToggle] -- add your button handler code here..
        bool toggleState = extendToggle->getToggleState();
        if (toggleState) extendToggleAnimator.start(10, defaultHeight, extendHeight);
        else extendToggleAnimator.start(10, extendHeight, defaultHeight);
        //[/UserButtonCode_extendToggle]
    }
    else if (buttonThatWasClicked == preset01Button.get())
    {
        //[UserButtonCode_preset01Button] -- add your button handler code here..
        attackKnob->setValue(50.0f);
        releaseKnob->setValue(50.0f);
        thresholdKnob->setValue(-12.0f);
        ratioKnob->setValue(1.0f);
        volumeKnob->setValue(0.0f);
        //[/UserButtonCode_preset01Button]
    }
    else if (buttonThatWasClicked == preset02Button.get())
    {
        //[UserButtonCode_preset02Button] -- add your button handler code here..
        attackKnob->setValue(0.1f);
        releaseKnob->setValue(1.0f);
        thresholdKnob->setValue(-20.0f);
        ratioKnob->setValue(2.0f);
        volumeKnob->setValue(6.0f);
        //[/UserButtonCode_preset02Button]
    }
    else if (buttonThatWasClicked == preset03Button.get())
    {
        //[UserButtonCode_preset03Button] -- add your button handler code here..
        attackKnob->setValue(100.0f);
        releaseKnob->setValue(100.0f);
        thresholdKnob->setValue(-30.0f);
        ratioKnob->setValue(4.0f);
        volumeKnob->setValue(12.0f);
        //[/UserButtonCode_preset03Button]
    }
    else if (buttonThatWasClicked == preset04Button.get())
    {
        //[UserButtonCode_preset04Button] -- add your button handler code here..
        attackKnob->setValue(0.1f);
        releaseKnob->setValue(10.0f);
        thresholdKnob->setValue(0.0f);
        ratioKnob->setValue(1.0f);
        volumeKnob->setValue(0.0f);
        //[/UserButtonCode_preset04Button]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void GuiComponent::updateSize() {
    extendToggleAnimator.update();
    if (extendToggleAnimator.getIsProgress()) {
        setSize(340, extendToggleAnimator.getValue());
    }
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="GuiComponent" componentName=""
                 parentClasses="public juce::Component" constructorParams="SIMPLECOMPAudioProcessor&amp; p"
                 variableInitialisers="processor(p),valueTreeState(p.parameters)"
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="1" initialWidth="340" initialHeight="336">
  <BACKGROUND backgroundColour="ff323e44">
    <IMAGE pos="0 0 340 581" resource="bg_png" opacity="1.0" mode="0"/>
  </BACKGROUND>
  <SLIDER name="attackKnob" id="20e1e969189c723c" memberName="attackKnob"
          virtualName="" explicitFocusOrder="0" pos="71 366 50 70" min="0.01"
          max="1000.0" int="0.1" style="Rotary" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="50" textBoxHeight="16" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="releaseKnob" id="31c4e3a537525d3e" memberName="releaseKnob"
          virtualName="" explicitFocusOrder="0" pos="217 366 50 70" min="1.0"
          max="3000.0" int="0.1" style="Rotary" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="50" textBoxHeight="16" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="thresholdKnob" id="f6733f4a85d7bc2f" memberName="thresholdKnob"
          virtualName="" explicitFocusOrder="0" pos="47 488 50 70" min="-60.0"
          max="6.0" int="0.1" style="Rotary" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="50" textBoxHeight="16" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="ratioKnob" id="47c0d53ed0016214" memberName="ratioKnob"
          virtualName="" explicitFocusOrder="0" pos="146 488 50 70" min="1.0"
          max="32.0" int="0.1" style="Rotary" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="50" textBoxHeight="16" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="volumeKnob" id="5f31fde75d4015c8" memberName="volumeKnob"
          virtualName="" explicitFocusOrder="0" pos="246 488 50 70" min="-36.0"
          max="36.0" int="0.1" style="Rotary" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="50" textBoxHeight="16" skewFactor="1.0"
          needsCallback="1"/>
  <IMAGEBUTTON name="extendToggle" id="9940ce911ea2ce55" memberName="extendToggle"
               virtualName="" explicitFocusOrder="0" pos="25 270 288 68" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="extendToggle_png" opacityNormal="1.0" colourNormal="0"
               resourceOver="extendToggle_png" opacityOver="0.8999999761581421"
               colourOver="0" resourceDown="extendToggle_png" opacityDown="0.800000011920929"
               colourDown="0"/>
  <IMAGEBUTTON name="preset01Button" id="82af268bf15b87e4" memberName="preset01Button"
               virtualName="" explicitFocusOrder="0" pos="26 158 128 32" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="1" keepProportions="1"
               resourceNormal="rectButtonR1_png" opacityNormal="1.0" colourNormal="0"
               resourceOver="rectButtonR1_png" opacityOver="0.8999999761581421"
               colourOver="0" resourceDown="rectButtonR1_png" opacityDown="0.800000011920929"
               colourDown="0"/>
  <IMAGEBUTTON name="preset02Button" id="a46f435884553bb4" memberName="preset02Button"
               virtualName="" explicitFocusOrder="0" pos="179 158 128 32" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="1" keepProportions="1"
               resourceNormal="rectButtonR2_png" opacityNormal="1.0" colourNormal="0"
               resourceOver="rectButtonR2_png" opacityOver="0.8999999761581421"
               colourOver="0" resourceDown="rectButtonR2_png" opacityDown="0.800000011920929"
               colourDown="0"/>
  <IMAGEBUTTON name="preset03Button" id="21a250018629bef9" memberName="preset03Button"
               virtualName="" explicitFocusOrder="0" pos="26 208 128 32" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="1" keepProportions="1"
               resourceNormal="rectButtonR3_png" opacityNormal="1.0" colourNormal="0"
               resourceOver="rectButtonR3_png" opacityOver="0.8999999761581421"
               colourOver="0" resourceDown="rectButtonR3_png" opacityDown="0.800000011920929"
               colourDown="0"/>
  <IMAGEBUTTON name="preset04Button" id="40a34637d841866c" memberName="preset04Button"
               virtualName="" explicitFocusOrder="0" pos="179 208 128 32" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="1" keepProportions="1"
               resourceNormal="rectButtonR4_png" opacityNormal="1.0" colourNormal="0"
               resourceOver="rectButtonR4_png" opacityOver="0.8999999761581421"
               colourOver="0" resourceDown="rectButtonR4_png" opacityDown="0.800000011920929"
               colourDown="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: bg_png, 15887, "../Resources/bg.png"
static const unsigned char resource_GuiComponent_bg_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,1,84,0,0,2,70,8,6,0,0,0,4,100,125,184,0,0,0,1,115,82,71,66,0,174,206,28,233,0,0,0,56,101,
88,73,102,77,77,0,42,0,0,0,8,0,1,135,105,0,4,0,0,0,1,0,0,0,26,0,0,0,0,0,2,160,2,0,4,0,0,0,1,0,0,1,84,160,3,0,4,0,0,0,1,0,0,2,70,0,0,0,0,44,26,60,114,0,0,61,133,73,68,65,84,120,1,237,157,7,156,28,197,149,
255,223,174,86,171,156,115,206,89,66,9,161,8,66,2,132,16,38,91,152,116,152,195,112,248,192,134,51,24,14,48,119,220,29,216,38,255,109,156,8,6,27,19,108,132,17,57,71,73,32,80,66,25,9,132,114,206,113,21,
86,233,95,175,87,61,234,233,233,217,157,93,213,180,118,187,191,143,207,106,166,187,171,95,117,125,95,245,175,43,245,144,51,234,150,113,135,5,131,0,4,32,0,129,99,38,144,123,204,30,112,0,1,8,64,0,2,14,1,
4,149,138,0,1,8,64,192,18,1,4,213,18,72,220,64,0,2,16,64,80,169,3,16,128,0,4,44,17,64,80,45,129,196,13,4,32,0,1,4,149,58,0,1,8,64,192,18,1,4,213,18,72,220,64,0,2,16,64,80,169,3,16,128,0,4,44,17,64,80,
45,129,196,13,4,32,0,1,4,149,58,0,1,8,64,192,18,1,4,213,18,72,220,64,0,2,16,64,80,169,3,16,128,0,4,44,17,64,80,45,129,196,13,4,32,0,1,4,149,58,0,1,8,64,192,18,1,4,213,18,72,220,64,0,2,16,64,80,169,3,16,
128,0,4,44,17,64,80,45,129,196,13,4,32,0,1,4,149,58,0,1,8,64,192,18,1,4,213,18,72,220,64,0,2,16,64,80,169,3,16,128,0,4,44,17,64,80,45,129,196,13,4,32,0,1,4,149,58,0,1,8,64,192,18,1,4,213,18,72,220,64,
0,2,16,64,80,169,3,16,128,0,4,44,17,64,80,45,129,196,13,4,32,0,129,188,176,16,252,241,230,51,164,67,243,186,105,179,155,60,111,181,188,50,105,145,204,89,188,49,109,154,33,61,155,203,221,87,13,77,123,220,
127,96,241,154,109,114,253,35,31,248,119,179,13,1,8,64,32,43,4,66,19,212,226,196,84,75,54,164,103,11,231,79,133,245,161,127,76,147,130,189,251,83,10,220,161,121,189,148,125,197,237,40,41,207,226,206,229,
24,4,32,0,129,210,18,8,77,80,221,11,91,191,165,64,62,152,190,220,221,148,198,245,170,75,239,14,141,164,73,253,26,206,62,21,214,187,255,53,95,110,251,211,167,137,52,238,151,241,19,191,117,191,102,244,185,
120,205,214,140,210,145,8,2,16,128,128,13,2,161,11,234,186,173,187,229,217,247,231,167,92,187,118,231,111,249,193,73,82,179,90,101,71,96,79,48,34,235,239,254,107,171,53,232,220,20,103,236,128,0,4,32,112,
28,8,148,155,73,169,201,243,214,200,99,175,205,74,32,232,221,161,113,226,59,95,32,0,1,8,84,4,2,229,70,80,21,214,250,173,5,21,129,25,215,8,1,8,64,32,144,64,185,18,212,192,43,100,39,4,32,0,129,10,66,160,
92,9,234,21,163,122,36,176,173,51,147,87,24,4,32,0,129,138,68,32,244,73,169,32,56,53,170,86,150,159,95,50,192,153,140,210,227,187,246,236,23,93,62,133,65,0,2,16,168,72,4,66,23,212,166,102,153,212,191,
120,90,162,186,108,74,151,74,233,236,190,107,15,191,56,53,112,29,170,10,239,168,1,109,77,218,124,55,105,177,159,179,23,111,72,89,41,80,236,9,28,132,0,4,32,112,12,4,66,23,84,93,111,122,197,168,238,129,
151,172,45,83,21,83,157,241,15,178,11,79,233,156,246,220,160,244,87,72,119,57,243,231,47,5,29,98,31,4,32,0,1,235,4,66,23,212,116,37,120,127,218,50,103,217,84,208,27,82,238,57,187,246,20,186,95,51,250,
84,129,198,32,0,1,8,132,69,32,116,65,213,247,235,221,245,166,131,123,180,144,11,79,233,148,40,107,113,98,170,137,244,93,255,217,230,93,127,239,240,64,226,228,128,47,139,87,111,11,216,203,46,8,64,0,2,217,
33,16,186,160,106,171,209,125,3,74,5,175,104,76,180,104,108,244,57,243,6,213,122,243,38,85,113,182,196,8,50,6,1,8,64,160,60,18,56,174,203,166,180,69,250,170,105,117,186,230,93,54,229,238,227,19,2,16,128,
64,69,33,112,92,5,85,33,233,15,158,184,99,157,218,90,109,98,102,253,49,8,64,0,2,21,145,192,113,23,84,127,43,245,150,75,78,170,136,28,185,102,8,64,0,2,114,220,5,85,99,224,109,165,234,79,249,233,47,77,97,
16,128,0,4,42,26,129,114,33,168,254,86,42,99,169,21,173,26,113,189,16,128,128,18,8,125,150,63,29,118,109,165,158,127,114,167,98,127,15,181,189,249,95,168,252,248,188,62,233,92,164,236,215,85,4,143,191,
126,244,39,1,83,18,176,3,2,16,128,128,69,2,229,70,80,181,149,170,203,166,92,193,188,192,136,171,187,188,202,45,239,80,243,138,170,14,9,100,106,154,22,65,205,148,22,233,32,0,129,99,37,16,90,151,95,23,244,
171,189,58,41,253,255,198,68,23,238,187,233,150,172,217,158,82,182,207,205,15,166,232,255,66,37,83,227,7,86,50,37,69,58,8,64,192,6,129,156,81,183,140,59,108,195,17,62,32,0,1,8,196,157,64,104,45,212,184,
131,166,252,16,128,64,244,9,32,168,209,143,49,37,132,0,4,66,34,128,160,134,4,154,108,32,0,129,232,19,64,80,163,31,99,74,8,1,8,132,68,0,65,13,9,52,217,64,0,2,209,39,128,160,70,63,198,148,16,2,16,8,137,
0,130,26,18,104,178,129,0,4,162,79,0,65,141,126,140,41,33,4,32,16,18,1,4,53,36,208,100,3,1,8,68,159,0,130,26,253,24,83,66,8,64,32,36,2,8,106,72,160,201,6,2,16,136,62,1,4,53,250,49,166,132,16,128,64,72,
4,16,212,144,64,147,13,4,32,16,125,2,8,106,244,99,76,9,33,0,129,144,8,32,168,33,129,38,27,8,64,32,250,4,16,212,232,199,152,18,66,0,2,33,17,64,80,67,2,77,54,16,128,64,244,9,32,168,209,143,49,37,132,0,4,
66,34,128,160,134,4,154,108,32,0,129,232,19,64,80,163,31,99,74,8,1,8,132,68,0,65,13,9,52,217,64,0,2,209,39,128,160,70,63,198,148,16,2,16,8,137,0,130,26,18,104,178,129,0,4,162,79,0,65,141,126,140,41,33,
4,32,16,18,1,4,53,36,208,100,3,1,8,68,159,0,130,26,253,24,83,66,8,64,32,36,2,8,106,72,160,201,6,2,16,136,62,1,4,53,250,49,166,132,16,128,64,72,4,16,212,144,64,147,13,4,32,16,125,2,8,106,244,99,76,9,33,
0,129,144,8,32,168,33,129,38,27,8,64,32,250,4,16,212,232,199,152,18,66,0,2,33,17,64,80,67,2,77,54,16,128,64,244,9,32,168,209,143,49,37,132,0,4,66,34,128,160,134,4,154,108,32,0,129,232,19,64,80,163,31,
99,74,8,1,8,132,68,0,65,13,9,52,217,64,0,2,209,39,128,160,70,63,198,148,16,2,16,8,137,0,130,26,18,104,178,129,0,4,162,79,0,65,141,126,140,41,33,4,32,16,18,1,4,53,36,208,100,3,1,8,68,159,0,130,26,253,24,
83,66,8,64,32,36,2,8,106,72,160,201,6,2,16,136,62,1,4,53,250,49,166,132,16,128,64,72,4,16,212,144,64,147,13,4,32,16,125,2,121,209,47,162,221,18,230,230,228,72,239,142,141,164,117,147,218,210,178,81,45,
169,91,179,170,236,218,83,40,59,119,23,202,162,85,91,101,206,146,141,178,125,215,190,98,51,237,220,170,158,12,238,209,66,246,31,56,40,31,125,181,66,214,111,41,8,76,127,82,183,102,210,171,125,35,169,94,
53,79,118,239,61,32,115,22,111,144,217,223,109,148,66,115,158,223,114,115,115,164,71,219,134,210,167,83,99,115,77,85,164,112,255,65,231,122,62,153,185,66,14,31,246,167,46,218,174,85,45,95,90,53,174,37,
213,140,127,191,21,236,217,47,91,119,238,149,45,230,111,255,129,67,254,195,41,219,3,186,54,149,19,58,52,150,109,187,246,202,123,83,151,26,38,251,83,210,148,180,163,184,235,241,158,123,224,224,97,249,102,
197,22,217,91,120,192,187,187,204,223,219,54,173,35,237,154,213,145,54,77,107,75,211,250,53,100,211,246,61,178,122,227,78,89,176,124,139,44,91,183,61,99,191,53,171,85,150,78,45,235,25,63,117,68,125,30,
54,224,245,252,229,235,118,200,183,166,110,236,222,91,50,147,58,38,118,103,244,111,35,77,27,212,116,242,93,110,206,255,234,219,245,178,122,211,174,192,235,104,80,187,154,244,239,210,196,201,87,235,192,
166,109,123,100,194,236,149,178,38,77,122,83,125,157,122,219,168,110,117,209,239,94,83,174,26,63,141,251,142,130,66,239,33,190,103,72,32,103,212,45,227,210,220,110,25,122,136,81,178,158,237,26,202,13,
23,246,147,246,230,230,43,206,38,205,89,37,127,120,101,166,83,49,253,233,244,134,123,244,166,211,68,133,89,109,247,190,3,114,249,255,189,225,124,122,211,158,51,164,131,252,196,228,229,55,189,185,238,120,
98,162,127,183,220,112,65,95,57,119,104,199,148,253,175,125,246,157,252,241,213,153,41,251,199,12,106,47,215,159,223,87,42,231,21,223,73,81,49,158,185,104,189,188,253,229,18,153,60,111,181,28,60,148,90,
93,78,55,2,112,235,165,39,37,242,80,17,185,238,161,247,19,219,153,124,201,244,122,92,95,42,242,207,190,63,95,94,252,120,161,187,171,212,159,250,48,185,225,130,126,210,215,60,132,210,217,180,133,235,228,
217,247,230,203,55,43,183,164,75,34,42,100,231,25,246,87,158,217,195,60,252,42,7,166,219,105,30,186,207,188,51,79,222,250,98,137,28,74,243,132,171,100,252,60,123,215,217,162,34,233,181,67,134,249,109,
143,77,144,185,230,97,237,181,38,70,252,31,187,101,148,84,175,146,252,64,220,103,30,166,87,223,247,142,243,96,240,166,175,85,61,95,126,253,111,167,56,226,235,221,31,244,93,69,245,253,105,203,156,184,175,
75,243,192,15,58,47,238,251,138,191,155,226,78,199,83,254,222,29,27,203,67,215,143,40,81,76,245,148,147,79,104,233,84,244,32,177,26,209,183,117,66,76,53,173,222,12,131,123,182,208,175,73,118,198,137,109,
147,182,221,141,126,157,155,72,251,230,117,221,77,231,179,134,185,137,207,26,216,62,105,159,187,225,228,103,110,84,175,105,250,31,159,215,167,68,49,213,115,84,247,53,207,187,174,28,44,119,92,49,40,165,
85,163,105,78,51,130,234,53,109,157,249,175,209,123,220,255,189,52,215,227,158,171,108,47,26,222,217,221,44,245,231,15,71,247,116,98,84,156,152,170,83,109,121,63,252,147,17,78,43,48,40,19,21,229,199,110,
30,229,240,76,39,166,122,158,182,190,245,1,249,135,159,157,46,205,27,22,181,62,253,254,148,179,95,76,53,141,10,246,133,167,164,150,245,108,243,80,244,139,169,166,175,82,185,146,156,210,187,165,126,77,
178,177,167,118,201,72,76,245,164,122,181,170,202,15,70,118,149,39,110,61,83,186,182,174,159,228,135,141,244,4,16,212,244,108,18,71,242,243,42,201,205,23,159,24,40,38,137,68,190,47,218,237,30,218,43,85,
40,79,236,210,212,151,82,196,191,79,187,142,93,138,169,196,131,186,55,75,242,161,55,98,144,120,107,162,218,53,242,165,179,105,21,123,173,165,17,1,189,233,74,107,250,160,248,209,217,39,36,157,166,173,170,
62,230,97,227,183,254,230,154,50,181,178,94,207,178,181,153,119,199,189,215,50,178,95,107,185,236,244,110,146,87,41,179,234,95,217,164,187,251,170,161,210,184,94,117,175,27,135,185,62,104,116,168,32,83,
211,7,205,157,230,193,164,220,252,214,63,160,110,184,105,148,167,255,122,7,117,111,238,30,78,249,12,242,85,154,135,156,235,80,235,201,255,93,61,44,165,236,238,113,62,147,9,36,247,21,146,143,177,117,132,
64,215,54,245,157,177,53,47,16,237,134,253,250,249,47,229,235,101,155,165,133,105,113,140,54,45,68,189,81,189,166,227,152,126,203,11,232,98,251,111,148,202,70,192,139,179,190,157,154,200,11,31,46,72,36,
209,237,226,44,223,39,158,218,90,10,50,29,47,213,113,191,28,243,159,182,80,252,99,108,122,142,182,138,254,252,230,156,196,233,218,122,210,63,191,165,19,120,127,58,221,78,119,61,139,215,108,19,29,203,245,
219,129,131,135,156,238,175,142,63,151,214,84,20,131,134,82,212,143,230,167,99,144,29,91,214,77,105,41,170,176,12,238,209,92,116,8,197,53,125,184,104,107,220,111,58,182,171,99,188,57,6,96,151,86,245,165,
74,126,114,60,117,216,71,91,200,79,191,61,55,233,84,125,112,167,51,245,209,189,109,3,51,142,94,212,237,175,111,226,83,156,144,7,249,210,46,191,223,246,21,30,148,93,123,139,198,75,171,229,231,5,14,89,232,
184,174,62,76,95,158,240,173,255,116,182,125,4,16,84,31,144,160,77,157,176,240,155,138,207,228,121,107,68,111,110,157,196,152,109,42,186,78,26,93,119,110,31,81,209,156,242,245,90,249,114,254,90,255,105,
86,182,187,153,27,75,111,112,29,43,83,235,219,57,181,133,88,150,140,174,127,228,131,196,184,175,182,176,175,58,171,151,25,74,104,151,228,74,187,181,250,0,73,55,73,146,148,248,24,55,116,28,122,254,210,
77,199,232,37,249,116,29,55,214,33,6,175,233,144,230,255,27,55,77,222,51,99,134,106,218,122,212,150,231,16,223,80,140,247,60,21,197,243,135,117,114,210,123,255,81,81,190,211,140,113,111,59,50,49,169,93,
120,29,183,244,139,223,216,17,93,228,163,25,203,101,249,250,29,222,211,139,253,174,15,78,87,80,117,242,209,134,125,104,174,225,209,151,103,56,174,116,92,95,69,251,158,107,78,78,25,74,208,242,98,37,19,
200,172,207,83,178,159,72,167,8,154,229,110,88,167,154,252,246,198,211,68,39,143,154,28,233,10,190,51,101,169,140,253,239,215,228,226,187,95,151,123,158,153,156,118,242,225,88,97,105,23,84,103,255,213,
52,239,230,71,102,132,143,213,175,247,124,21,132,231,205,164,79,144,149,165,235,24,228,39,236,125,213,204,120,245,137,102,76,212,111,83,22,172,73,136,169,30,211,137,183,95,62,251,165,204,243,136,185,62,
188,222,53,241,117,109,88,175,150,129,45,248,7,255,62,53,33,166,154,118,243,142,61,242,240,139,211,220,211,18,159,42,94,195,76,171,175,52,166,67,59,174,121,191,187,251,142,245,83,39,203,180,204,19,103,
173,76,113,85,81,99,158,82,144,44,239,160,133,154,1,224,111,211,204,240,118,108,81,55,209,125,92,179,121,151,76,91,176,78,116,153,210,130,229,155,51,240,90,186,36,186,12,73,91,72,110,55,188,175,185,185,
166,127,179,206,180,78,143,222,100,234,81,103,147,211,117,161,75,151,163,136,182,132,131,108,179,105,145,135,97,183,94,114,82,202,210,168,2,179,244,104,218,194,181,242,214,228,37,78,89,75,115,29,58,185,
162,15,35,191,189,55,117,153,127,151,211,243,248,223,191,126,46,186,130,161,192,44,89,211,149,27,222,101,79,189,218,55,76,57,231,187,213,219,100,105,192,184,174,174,16,88,97,90,162,186,212,206,107,238,
67,209,187,207,255,221,27,79,29,11,215,30,130,94,135,119,152,199,155,198,127,126,89,182,131,226,30,86,204,203,114,189,229,233,28,4,53,131,104,232,141,50,113,246,170,192,153,83,247,116,109,37,158,55,172,
163,243,183,196,116,251,180,85,162,231,217,50,93,31,184,97,219,238,196,42,131,126,71,186,124,253,60,227,167,123,204,18,172,133,102,237,164,206,76,151,197,46,61,173,91,66,192,154,212,171,33,131,122,36,
79,126,169,79,29,59,214,110,109,24,214,172,65,141,192,108,116,249,90,94,110,174,60,247,193,215,129,199,211,237,172,239,91,142,228,166,91,107,30,134,65,166,107,49,199,79,92,20,116,72,130,124,165,243,163,
14,214,110,46,72,17,212,250,181,171,6,250,246,238,156,181,104,131,51,126,169,251,116,172,186,143,89,3,189,114,195,78,209,30,146,107,222,52,238,190,76,63,117,242,243,234,49,189,156,228,149,204,195,70,39,
191,218,248,132,95,15,126,187,114,107,166,46,99,157,14,65,205,48,252,15,253,99,170,35,38,167,246,109,85,226,25,218,61,122,244,166,211,229,214,63,125,106,117,12,112,166,89,131,234,174,129,109,215,172,174,
179,128,223,59,195,174,235,20,131,214,137,150,120,193,71,18,232,3,161,36,211,214,183,59,118,91,82,218,108,30,79,183,244,168,184,60,131,150,24,105,250,178,44,98,215,151,45,252,86,220,203,12,250,242,135,
223,138,91,102,229,166,157,253,221,6,25,106,198,114,221,137,63,109,153,54,172,147,188,218,64,215,38,235,164,81,89,76,123,89,250,87,146,205,54,243,3,88,201,4,82,251,63,37,159,19,203,20,42,34,58,171,255,
179,223,127,236,76,38,120,187,127,65,64,116,98,227,54,207,98,247,160,52,165,221,167,55,142,107,218,245,191,104,120,23,209,25,88,215,188,199,221,125,54,63,117,60,240,215,207,125,105,211,101,153,124,233,
240,202,107,159,31,157,109,207,212,73,58,225,204,164,165,232,207,35,200,151,206,188,167,51,93,53,225,183,29,5,197,191,81,167,233,181,59,175,111,89,185,166,130,234,239,238,235,27,122,217,180,231,77,79,
32,219,117,43,155,215,31,166,239,212,199,108,152,185,87,192,188,116,153,148,254,169,96,118,55,175,122,234,235,161,186,156,70,23,120,251,77,95,99,212,161,0,21,0,27,166,45,208,253,102,85,129,59,14,120,254,
201,201,45,202,175,204,27,77,250,2,130,109,211,110,190,190,49,244,212,91,115,100,99,72,227,167,90,134,223,188,52,61,101,120,65,91,129,233,94,171,44,169,220,27,183,239,14,76,162,61,138,32,81,210,222,192,
53,223,235,109,214,127,230,200,7,211,151,155,191,101,137,243,55,154,225,23,127,204,117,53,136,62,232,252,47,66,105,235,178,109,192,74,17,93,162,149,137,169,152,185,139,235,53,207,38,245,143,182,80,181,
187,175,241,201,134,105,172,95,255,108,145,140,251,228,155,108,184,143,164,79,4,53,195,176,106,119,88,95,237,220,107,214,237,169,176,104,37,87,129,211,63,221,214,87,39,111,250,126,255,20,111,205,26,214,
176,38,168,218,74,86,49,239,221,161,104,134,223,187,214,80,151,113,233,59,227,199,98,159,207,93,157,232,206,235,228,143,243,46,191,105,149,170,152,234,210,176,176,109,133,25,43,180,57,118,167,190,244,
85,95,127,215,95,87,106,124,96,150,76,121,95,9,213,33,133,7,174,63,53,49,193,167,15,42,93,91,171,175,224,170,205,50,93,113,255,76,187,174,113,213,135,171,46,167,243,154,190,181,20,212,122,213,87,122,51,
49,173,107,250,34,130,107,222,184,31,107,203,81,31,78,11,205,154,89,181,131,135,14,57,43,20,182,236,216,235,76,162,169,111,47,19,55,127,62,211,19,64,80,211,179,73,28,209,119,166,255,253,188,190,137,25,
246,123,126,52,204,121,63,94,223,203,118,77,91,44,65,182,108,237,177,137,156,223,167,142,163,186,130,234,61,166,251,143,213,126,55,254,171,196,58,212,99,245,213,179,93,35,25,123,106,234,143,170,232,228,
218,23,243,215,100,244,227,41,218,18,15,124,65,192,52,200,180,165,94,90,211,53,195,19,204,146,32,255,218,90,93,99,169,235,78,159,124,115,182,51,121,164,219,183,95,62,48,33,166,110,62,93,219,52,72,8,234,
68,243,3,36,87,140,234,46,94,113,211,116,183,94,58,80,30,49,19,146,83,23,152,53,200,166,181,170,2,123,243,216,1,174,139,196,167,46,168,255,204,172,28,200,196,116,220,90,95,22,168,106,22,222,251,77,69,
185,122,149,228,117,181,254,52,197,109,207,52,45,92,119,29,106,113,233,56,150,25,129,212,8,101,118,94,172,82,117,49,191,14,229,46,87,210,130,235,155,77,55,94,212,223,180,74,59,56,45,84,125,85,84,187,254,
126,91,191,117,183,179,14,209,191,255,88,182,181,213,112,213,89,61,83,92,28,107,75,37,197,97,134,59,252,221,91,247,52,253,5,36,253,11,50,21,182,107,31,124,47,209,117,79,215,10,186,255,199,195,131,78,119,
246,173,50,191,6,165,63,222,81,218,31,71,121,226,141,217,78,203,210,93,59,236,102,160,175,9,235,159,254,146,151,95,36,221,52,179,60,45,74,157,181,127,250,173,185,206,59,252,238,113,253,212,214,175,138,
179,78,14,26,61,77,76,38,121,211,232,247,199,94,159,149,241,240,73,209,155,97,155,82,86,111,232,143,150,232,117,116,240,253,182,131,63,47,182,195,35,192,164,84,6,172,181,123,23,52,131,171,179,163,23,156,
220,73,244,135,76,234,212,56,58,57,228,186,124,121,66,234,216,83,208,68,196,142,221,201,147,19,65,2,227,10,151,142,245,5,93,139,142,159,170,185,233,220,107,40,218,151,60,198,22,52,161,166,227,112,101,
249,57,60,189,217,117,226,164,52,166,15,164,81,3,218,38,78,209,161,133,210,154,254,116,162,62,88,252,194,88,146,31,45,251,131,127,159,146,182,43,155,78,76,117,200,67,91,214,94,123,101,210,162,180,147,
53,58,198,238,206,204,123,207,209,239,250,22,157,59,116,224,61,86,92,220,131,30,152,238,190,228,232,22,121,212,87,136,253,22,20,247,221,251,82,95,237,245,159,199,118,230,4,16,212,12,88,233,140,238,127,
63,253,153,104,55,45,83,27,63,241,219,164,247,190,221,243,116,156,210,111,254,125,250,123,170,218,2,243,154,251,214,142,222,116,254,177,55,253,185,60,29,247,82,155,191,180,232,93,111,247,92,189,230,69,
171,146,215,141,234,152,217,118,223,12,179,142,5,235,58,214,178,152,123,99,151,230,92,93,232,238,218,42,51,86,154,110,200,196,77,147,238,179,44,19,50,115,151,108,146,95,153,55,161,50,29,23,94,98,22,235,
223,244,232,71,129,124,238,123,126,138,124,108,126,83,32,64,191,82,46,89,211,232,196,150,190,77,21,100,254,215,108,53,253,215,71,222,214,154,241,237,186,148,83,102,152,23,59,212,148,165,254,30,175,215,
220,250,226,221,55,69,135,33,124,54,229,235,228,135,132,239,48,155,165,36,80,169,195,144,177,255,83,202,115,98,153,92,111,248,119,166,44,113,126,108,89,127,16,35,221,175,53,233,187,214,58,22,249,250,231,
139,3,57,173,223,178,219,121,229,80,135,9,212,84,220,244,119,50,253,237,9,157,32,232,99,150,200,104,107,78,95,3,125,210,116,85,117,217,146,218,170,141,187,100,140,249,49,22,253,241,13,181,223,143,159,
233,220,84,250,93,187,129,250,74,99,77,243,3,40,218,237,124,213,204,210,58,227,121,122,240,136,105,94,122,172,155,25,19,212,22,153,10,203,51,239,206,79,17,113,55,125,73,159,42,198,141,205,15,22,215,51,
63,182,29,52,206,231,61,95,91,163,250,254,248,120,243,67,27,110,139,76,63,85,228,244,77,34,253,1,143,192,113,83,175,19,243,93,69,238,165,79,22,202,140,50,142,29,171,8,189,245,229,98,103,134,92,103,231,
131,226,169,15,170,103,223,251,218,25,47,247,11,150,123,57,58,81,168,15,68,189,14,189,126,125,119,223,141,139,155,70,89,171,88,222,251,236,23,242,198,228,197,129,63,16,174,105,245,197,0,253,253,0,253,
29,5,21,211,143,190,210,149,5,203,29,55,250,144,213,181,199,238,219,86,90,254,199,95,155,237,212,27,229,167,63,168,211,195,188,240,160,173,98,157,157,127,236,181,89,41,61,25,125,49,68,199,182,245,165,
0,125,16,77,53,111,246,141,51,12,49,123,4,248,129,233,50,178,212,117,133,42,34,58,179,171,2,160,227,165,122,67,184,45,197,226,220,234,205,219,209,76,124,232,175,81,45,54,111,83,185,194,226,63,71,197,169,
173,249,105,56,157,157,246,167,81,225,209,101,61,42,174,174,208,122,207,215,137,149,245,91,11,138,93,180,174,215,173,75,134,244,213,90,189,129,227,108,42,98,42,86,26,83,229,169,179,223,26,211,210,154,
62,0,91,52,170,41,173,27,215,54,76,15,139,174,84,80,95,58,52,146,169,233,3,91,5,220,31,87,125,255,95,127,100,69,127,61,76,235,141,223,167,62,164,117,117,66,73,43,35,116,233,149,174,226,200,164,174,102,
122,205,164,43,34,128,160,82,19,32,0,1,8,88,34,192,24,170,37,144,184,129,0,4,32,128,160,82,7,32,0,1,8,88,34,128,160,90,2,137,27,8,64,0,2,8,42,117,0,2,16,128,128,37,2,8,170,37,144,184,129,0,4,32,128,160,
82,7,32,0,1,8,88,34,128,160,90,2,137,27,8,64,0,2,8,42,117,0,2,16,128,128,37,2,8,170,37,144,184,129,0,4,32,128,160,82,7,32,0,1,8,88,34,128,160,90,2,137,27,8,64,0,2,8,42,117,0,2,16,128,128,37,2,8,170,37,
144,184,129,0,4,32,128,160,82,7,32,0,1,8,88,34,128,160,90,2,137,27,8,64,0,2,8,42,117,0,2,16,128,128,37,2,8,170,37,144,184,129,0,4,32,128,160,82,7,32,0,1,8,88,34,128,160,90,2,137,27,8,64,0,2,8,42,117,0,
2,16,128,128,37,2,8,170,37,144,184,129,0,4,32,128,160,82,7,32,0,1,8,88,34,128,160,90,2,137,27,8,64,0,2,8,42,117,0,2,16,128,128,37,2,8,170,37,144,184,129,0,4,32,128,160,82,7,32,0,1,8,88,34,128,160,90,2,
137,27,8,64,0,2,8,42,117,0,2,16,128,128,37,2,8,170,37,144,184,129,0,4,32,128,160,82,7,32,0,1,8,88,34,128,160,90,2,137,27,8,64,0,2,8,42,117,0,2,16,128,128,37,2,8,170,37,144,184,129,0,4,32,128,160,82,7,
32,0,1,8,88,34,128,160,90,2,137,27,8,64,0,2,8,42,117,0,2,16,128,128,37,2,8,170,37,144,184,129,0,4,32,128,160,82,7,32,0,1,8,88,34,128,160,90,2,137,27,8,64,0,2,8,42,117,0,2,16,128,128,37,2,8,170,37,144,
184,129,0,4,32,128,160,82,7,32,0,1,8,88,34,128,160,90,2,137,27,8,64,0,2,8,42,117,0,2,16,128,128,37,2,8,170,37,144,184,129,0,4,32,128,160,82,7,32,0,1,8,88,34,128,160,90,2,137,27,8,64,0,2,8,42,117,0,2,16,
128,128,37,2,8,170,37,144,184,129,0,4,32,128,160,82,7,32,0,1,8,88,34,128,160,90,2,137,27,8,64,0,2,8,42,117,0,2,16,128,128,37,2,8,170,37,144,184,129,0,4,32,128,160,82,7,32,0,1,8,88,34,128,160,90,2,137,
27,8,64,0,2,8,42,117,0,2,16,128,128,37,2,8,170,37,144,184,129,0,4,32,128,160,82,7,32,0,1,8,88,34,128,160,90,2,137,27,8,64,0,2,8,42,117,0,2,16,128,128,37,2,8,170,37,144,184,129,0,4,32,128,160,82,7,32,0,
1,8,88,34,128,160,90,2,137,27,8,64,0,2,8,42,117,0,2,16,128,128,37,2,8,170,37,144,184,129,0,4,32,128,160,82,7,32,0,1,8,88,34,128,160,90,2,137,27,8,64,0,2,8,42,117,0,2,16,128,128,37,2,8,170,37,144,184,129,
0,4,32,128,160,82,7,32,0,1,8,88,34,128,160,90,2,137,27,8,64,0,2,8,42,117,0,2,16,128,128,37,2,8,170,37,144,184,129,0,4,32,128,160,82,7,32,0,1,8,88,34,128,160,90,2,137,27,8,64,0,2,8,42,117,0,2,16,128,128,
37,2,8,170,37,144,184,129,0,4,32,128,160,82,7,32,0,1,8,88,34,128,160,90,2,137,27,8,64,0,2,8,42,117,0,2,16,128,128,37,2,8,170,37,144,184,129,0,4,32,128,160,82,7,32,0,1,8,88,34,128,160,90,2,137,27,8,64,
0,2,8,42,117,0,2,16,128,128,37,2,8,170,37,144,184,129,0,4,32,128,160,82,7,32,0,1,8,88,34,128,160,90,2,137,27,8,64,0,2,8,42,117,0,2,16,128,128,37,2,8,170,37,144,184,129,0,4,32,128,160,82,7,32,0,1,8,88,
34,128,160,90,2,137,27,8,64,0,2,8,42,117,0,2,16,128,128,37,2,8,170,37,144,184,129,0,4,32,128,160,82,7,32,0,1,8,88,34,128,160,90,2,137,27,8,64,0,2,8,42,117,0,2,16,128,128,37,2,8,170,37,144,184,129,0,4,
32,128,160,82,7,32,0,1,8,88,34,128,160,90,2,137,27,8,64,0,2,8,42,117,0,2,16,128,128,37,2,8,170,37,144,184,129,0,4,32,128,160,82,7,32,0,1,8,88,34,128,160,90,2,137,27,8,64,0,2,8,42,117,0,2,16,128,128,37,
2,8,170,37,144,184,129,0,4,32,128,160,82,7,32,0,1,8,88,34,128,160,90,2,137,27,8,64,0,2,8,42,117,0,2,16,128,128,37,2,8,170,37,144,184,129,0,4,32,128,160,82,7,32,0,1,8,88,34,128,160,90,2,137,27,8,64,0,2,
8,42,117,0,2,16,128,128,37,2,8,170,37,144,184,129,0,4,32,128,160,82,7,32,0,1,8,88,34,128,160,90,2,137,27,8,64,0,2,8,42,117,0,2,16,128,128,37,2,8,170,37,144,184,129,0,4,32,128,160,82,7,32,0,1,8,88,34,128,
160,90,2,137,27,8,64,0,2,8,42,117,0,2,16,128,128,37,2,8,170,37,144,184,129,0,4,32,128,160,82,7,32,0,1,8,88,34,128,160,90,2,137,27,8,64,0,2,8,42,117,0,2,16,128,128,37,2,8,170,37,144,184,129,0,4,32,128,
160,82,7,32,0,1,8,88,34,128,160,90,2,137,27,8,64,0,2,8,42,117,0,2,16,128,128,37,2,8,170,37,144,184,129,0,4,32,128,160,82,7,32,0,1,8,88,34,128,160,90,2,137,27,8,64,0,2,8,42,117,0,2,16,128,128,37,2,8,170,
37,144,184,129,0,4,32,128,160,82,7,32,0,1,8,88,34,128,160,90,2,137,27,8,64,0,2,8,42,117,0,2,16,128,128,37,2,8,170,37,144,184,129,0,4,32,128,160,82,7,32,0,1,8,88,34,128,160,90,2,137,27,8,64,0,2,8,42,117,
0,2,16,128,128,37,2,8,170,37,144,184,129,0,4,32,128,160,82,7,32,0,1,8,88,34,128,160,90,2,137,27,8,64,0,2,8,42,117,0,2,16,128,128,37,2,8,170,37,144,184,129,0,4,32,128,160,82,7,32,0,1,8,88,34,128,160,90,
2,137,27,8,64,0,2,8,42,117,0,2,16,128,128,37,2,8,170,37,144,184,129,0,4,32,128,160,82,7,32,0,1,8,88,34,128,160,90,2,137,27,8,64,0,2,8,42,117,0,2,16,128,128,37,2,8,170,37,144,184,129,0,4,32,128,160,82,
7,32,0,1,8,88,34,128,160,90,2,137,27,8,64,0,2,121,217,70,48,106,64,91,57,227,196,182,217,206,6,255,16,128,0,4,2,9,124,48,125,153,188,63,109,89,224,49,219,59,105,161,218,38,138,63,8,64,32,182,4,114,70,
221,50,238,112,108,75,79,193,33,0,1,8,88,36,64,11,213,34,76,92,65,0,2,241,38,128,160,198,59,254,148,30,2,16,176,72,0,65,181,8,19,87,16,128,64,188,9,32,168,241,142,63,165,135,0,4,44,18,64,80,45,194,196,
21,4,32,16,111,2,8,106,188,227,79,233,33,0,1,139,4,16,84,139,48,113,5,1,8,196,155,0,130,26,239,248,83,122,8,64,192,34,1,4,213,34,76,92,65,0,2,241,38,128,160,198,59,254,148,30,2,16,176,72,0,65,181,8,19,
87,16,128,64,188,9,32,168,241,142,63,165,135,0,4,44,18,64,80,45,194,196,21,4,32,16,111,2,8,106,188,227,79,233,33,0,1,139,4,16,84,139,48,113,5,1,8,196,155,0,130,26,239,248,83,122,8,64,192,34,1,4,213,34,
76,92,65,0,2,241,38,128,160,198,59,254,148,30,2,16,176,72,0,65,181,8,19,87,16,128,64,188,9,32,168,241,142,63,165,135,0,4,44,18,64,80,45,194,196,21,4,32,16,111,2,8,106,188,227,79,233,33,0,1,139,4,16,84,
139,48,113,5,1,8,196,155,0,130,26,239,248,83,122,8,64,192,34,1,4,213,34,76,92,65,0,2,241,38,128,160,198,59,254,148,30,2,16,176,72,0,65,181,8,19,87,16,128,64,188,9,32,168,241,142,63,165,135,0,4,44,18,64,
80,45,194,196,21,4,32,16,111,2,8,106,188,227,79,233,33,0,1,139,4,16,84,139,48,113,5,1,8,196,155,0,130,26,239,248,83,122,8,64,192,34,1,4,213,34,76,92,65,0,2,241,38,128,160,198,59,254,148,30,2,16,176,72,
0,65,181,8,19,87,16,128,64,188,9,32,168,241,142,63,165,135,0,4,44,18,64,80,45,194,196,21,4,32,16,111,2,8,106,188,227,79,233,33,0,1,139,4,16,84,139,48,113,5,1,8,196,155,0,130,26,239,248,83,122,8,64,192,
34,1,4,213,34,76,92,65,0,2,241,38,128,160,198,59,254,148,30,2,16,176,72,0,65,181,8,19,87,16,128,64,188,9,32,168,241,142,63,165,135,0,4,44,18,64,80,45,194,196,21,4,32,16,111,2,8,106,188,227,79,233,33,0,
1,139,4,16,84,139,48,113,5,1,8,196,155,0,130,26,239,248,83,122,8,64,192,34,1,4,213,34,76,92,65,0,2,241,38,128,160,198,59,254,148,30,2,16,176,72,0,65,181,8,19,87,16,128,64,188,9,32,168,241,142,63,165,135,
0,4,44,18,64,80,45,194,196,21,4,32,16,111,2,8,106,188,227,79,233,33,0,1,139,4,16,84,139,48,113,5,1,8,196,155,0,130,26,239,248,83,122,8,64,192,34,1,4,213,34,76,92,65,0,2,241,38,128,160,198,59,254,148,30,
2,16,176,72,0,65,181,8,19,87,16,128,64,188,9,32,168,241,142,63,165,135,0,4,44,18,64,80,45,194,196,21,4,32,16,111,2,8,106,188,227,79,233,33,0,1,139,4,16,84,139,48,113,5,1,8,196,155,0,130,26,239,248,83,
122,8,64,192,34,1,4,213,34,76,92,65,0,2,241,38,128,160,86,176,248,215,173,89,69,58,52,175,43,181,170,231,87,176,43,231,114,203,59,129,154,213,42,75,243,6,53,203,251,101,150,235,235,203,43,215,87,119,156,
47,238,204,1,109,229,230,31,12,144,167,223,158,43,47,126,188,48,113,53,63,24,217,85,174,30,211,43,177,237,255,242,247,143,22,200,69,195,59,75,126,94,37,255,161,196,246,152,219,254,41,7,15,29,118,182,115,
114,68,158,185,243,108,169,94,53,79,46,251,223,55,165,240,192,193,68,58,247,203,169,125,91,201,191,157,211,91,234,213,170,42,123,247,29,48,105,43,203,87,223,174,151,223,143,255,74,86,111,218,229,36,59,
123,112,123,249,225,232,158,114,241,221,175,187,167,57,159,215,154,243,70,246,107,45,255,243,244,231,242,205,202,45,73,199,216,176,71,224,142,203,7,137,198,201,107,107,55,23,200,180,133,107,229,141,201,
139,101,197,250,29,206,161,160,116,238,57,63,255,227,39,50,119,201,38,209,52,149,42,229,200,189,127,251,194,61,148,244,153,137,15,247,4,21,201,167,110,31,237,212,151,95,60,57,201,221,157,248,28,61,176,
157,156,51,164,163,180,110,82,75,14,153,58,185,115,207,126,153,182,96,173,60,254,250,108,217,91,120,192,73,87,154,252,18,142,99,248,5,65,45,38,232,163,7,181,151,41,95,175,149,209,39,181,75,18,212,87,63,
91,36,239,79,91,230,156,217,180,126,13,249,205,79,71,202,237,143,79,144,101,235,138,110,152,61,70,240,94,251,236,187,132,231,27,46,232,43,213,170,228,201,67,255,152,150,216,231,138,169,238,232,219,169,
137,28,62,124,88,182,236,216,43,195,78,104,33,31,127,181,34,145,78,191,124,111,112,7,249,87,35,224,191,27,63,67,62,159,187,90,246,31,56,36,205,26,212,144,107,191,215,91,30,249,201,72,249,209,253,239,200,
46,115,19,168,229,152,255,92,203,205,205,145,91,204,3,161,99,139,186,114,211,163,31,201,134,173,187,221,67,124,102,129,128,62,24,167,24,33,250,127,227,166,39,188,55,174,87,93,46,63,163,187,220,119,221,
41,114,249,61,111,154,56,155,24,5,164,115,79,216,185,187,208,249,170,105,138,179,76,124,184,231,159,105,234,239,140,111,214,75,159,78,141,69,175,199,91,15,186,181,105,32,55,93,212,95,238,120,98,162,204,
89,178,209,169,135,109,155,214,145,95,93,123,138,115,250,111,255,57,195,249,44,77,126,110,190,113,252,68,80,211,68,189,77,147,218,162,21,235,202,123,223,146,191,220,113,150,156,208,161,145,204,89,188,
209,73,189,175,240,160,232,159,90,213,252,162,86,232,246,130,66,217,186,115,175,179,79,255,113,159,236,250,189,112,255,65,169,148,155,155,116,92,247,187,118,214,192,246,242,222,212,165,78,58,253,238,21,
212,170,249,121,114,213,89,61,229,169,183,230,200,167,51,87,186,167,136,182,124,238,127,97,138,124,111,72,7,167,213,234,10,170,155,160,74,229,74,114,215,149,131,205,205,155,35,255,241,187,143,69,69,30,
203,62,1,141,181,183,30,232,247,119,167,44,145,255,188,108,160,19,11,125,112,170,249,211,149,229,202,50,241,161,15,213,81,166,167,245,203,103,191,144,67,38,239,51,7,180,147,103,223,159,159,200,174,97,
157,106,206,247,149,27,118,58,173,83,221,88,186,118,187,252,226,201,137,70,124,107,36,210,233,151,76,242,75,58,33,134,27,8,106,154,160,107,55,104,226,172,149,166,251,83,40,159,204,92,33,42,116,174,160,
166,57,165,76,187,235,212,168,34,131,122,52,147,39,222,152,45,7,14,30,146,171,207,62,65,154,55,172,41,107,142,116,227,219,54,173,237,140,151,78,48,215,226,183,125,230,230,125,121,194,183,254,221,82,171,
90,190,220,115,205,48,231,6,184,253,241,137,206,141,148,146,136,29,161,16,208,158,201,200,126,109,100,182,121,24,107,119,218,53,125,80,54,49,189,27,175,29,50,241,223,184,125,143,119,87,177,223,51,241,
113,82,215,102,206,195,125,222,210,77,82,207,244,170,174,59,183,183,60,247,193,124,167,165,172,206,103,125,183,65,182,238,218,43,143,222,116,154,188,107,30,234,51,22,174,147,133,43,182,200,18,35,170,250,
231,181,76,242,243,166,143,227,119,4,53,32,234,121,149,114,229,244,254,109,229,238,167,63,115,142,106,247,254,145,159,140,144,63,188,82,57,209,181,14,56,173,76,187,78,235,223,70,230,153,49,179,141,219,
138,186,227,211,191,89,231,12,49,232,184,173,154,138,171,10,103,193,222,162,46,125,73,153,228,87,206,149,135,205,181,86,50,45,19,237,222,181,104,84,83,180,245,129,133,67,64,187,213,191,187,233,116,39,
51,237,37,180,106,92,75,102,46,218,96,198,66,39,39,93,192,128,174,77,229,111,119,142,73,218,167,189,142,171,126,253,118,210,190,226,54,50,241,113,214,160,118,242,222,180,165,142,155,47,231,175,145,155,
190,223,95,250,119,110,42,90,207,212,116,136,225,166,223,126,36,99,204,176,146,206,25,92,97,134,39,116,72,224,205,47,22,203,91,230,207,219,243,201,36,63,199,105,140,255,65,80,3,130,63,164,103,115,81,97,
234,96,198,30,245,79,237,192,193,195,78,75,227,245,207,143,142,141,6,156,90,234,93,103,153,150,176,142,189,158,99,186,238,106,123,246,30,112,186,104,127,125,119,94,209,4,129,169,240,122,99,234,4,87,208,
100,149,118,233,180,27,121,164,39,105,134,32,242,140,191,237,242,192,11,83,229,225,27,70,200,109,151,14,148,155,126,247,81,82,235,168,212,23,201,9,25,19,216,104,196,232,195,25,203,18,233,251,117,110,34,
61,218,53,148,174,102,172,82,39,17,93,211,177,249,71,198,29,29,83,215,253,218,37,47,141,149,228,163,126,237,170,162,45,84,237,194,187,245,107,221,150,2,209,222,151,43,168,154,159,182,138,159,49,245,77,
255,186,180,170,47,3,187,55,147,177,35,186,200,208,94,45,228,63,30,253,56,113,93,37,229,87,154,107,143,106,90,4,53,32,178,218,189,215,49,209,209,230,211,181,157,5,251,76,183,191,157,216,20,212,238,230,
38,107,102,90,160,133,102,146,73,91,162,174,213,52,93,246,65,166,82,79,158,183,70,244,6,80,107,215,188,142,124,99,186,98,94,171,156,151,43,47,254,207,185,242,215,119,230,37,174,75,91,178,247,61,63,197,
17,208,135,254,49,85,254,120,243,25,114,137,89,149,240,194,135,11,188,167,242,61,75,4,116,197,133,119,66,82,191,255,215,15,135,200,249,39,119,74,18,84,125,56,110,219,181,239,152,174,162,36,31,58,118,170,
45,204,1,70,84,93,203,51,43,7,6,247,104,46,117,204,242,187,237,38,255,225,189,91,201,238,125,102,86,223,116,245,213,116,21,136,254,205,92,180,94,30,186,126,132,180,49,67,78,42,200,106,37,229,231,36,138,
249,63,8,170,175,2,52,49,221,100,237,182,93,115,255,187,137,229,72,154,68,151,158,232,228,84,167,150,245,100,209,170,173,190,179,202,182,169,171,8,62,155,179,202,17,64,175,7,157,192,80,49,87,65,213,238,
250,119,171,183,201,121,67,59,202,3,43,166,122,147,201,144,158,45,164,134,89,62,53,215,204,206,186,118,208,180,164,221,177,58,61,247,111,239,206,119,38,181,180,117,177,120,205,54,55,25,159,33,18,152,109,
198,41,191,127,106,151,16,115,44,202,106,244,73,237,229,47,239,204,149,183,191,92,146,148,247,115,119,157,45,103,152,161,166,127,154,241,247,142,166,62,119,111,219,32,33,168,110,194,117,102,248,65,77,
135,191,176,204,9,64,203,199,74,151,152,44,54,2,230,174,237,116,15,175,217,188,203,17,82,109,189,218,176,234,102,178,98,120,239,150,242,137,111,137,148,250,254,212,76,130,13,232,210,84,220,25,216,191,
154,155,98,68,223,214,206,218,215,218,53,138,22,244,183,111,102,86,32,156,217,195,153,249,119,91,16,65,215,165,147,86,90,158,219,46,59,73,42,115,115,4,33,202,250,190,109,102,210,167,206,145,184,185,153,
57,19,60,230,225,173,15,112,239,159,119,237,114,80,26,29,23,119,45,232,184,250,82,31,189,59,54,150,70,117,171,201,164,217,171,220,228,137,207,9,102,159,219,251,210,9,87,237,230,95,119,110,31,209,149,45,
106,234,227,42,179,76,111,189,25,190,208,186,227,90,113,249,185,105,226,254,73,11,213,83,3,114,205,18,163,81,70,80,95,153,152,58,115,174,201,116,166,253,178,211,187,201,227,111,204,74,44,155,242,156,94,
170,175,167,26,129,212,245,164,222,177,44,215,193,12,51,214,86,96,186,97,218,101,211,174,186,118,199,126,241,231,73,206,132,130,190,84,160,221,122,157,61,126,231,203,165,242,228,155,179,221,211,2,63,117,
92,238,65,211,245,255,211,205,163,228,74,179,232,95,151,95,97,225,18,88,101,122,10,42,70,189,205,210,59,157,237,87,115,38,120,126,113,118,202,133,220,101,226,236,118,191,131,210,232,4,229,185,119,140,
47,209,135,78,118,234,218,83,93,165,226,183,9,179,86,200,247,205,139,39,58,182,59,223,204,254,223,243,204,100,185,238,188,62,114,225,41,157,76,247,223,188,52,98,234,150,246,122,116,109,181,119,92,55,232,
122,212,183,247,154,253,121,197,109,59,103,212,45,227,74,55,18,30,55,66,229,172,188,58,246,85,223,188,45,181,122,227,174,192,73,170,114,118,185,92,78,5,33,160,11,247,27,214,169,46,250,106,243,38,51,73,
229,93,75,91,65,138,80,46,46,147,22,106,185,8,67,230,23,161,19,9,250,135,65,192,38,1,93,96,160,75,247,220,229,123,54,125,199,201,23,99,168,113,138,54,101,133,0,4,178,74,0,65,205,42,94,156,67,0,2,113,34,
128,160,198,41,218,148,21,2,16,200,42,1,4,53,171,120,113,14,1,8,196,137,0,130,26,167,104,83,86,8,64,32,171,4,16,212,172,226,197,57,4,32,16,39,2,8,106,156,162,77,89,33,0,129,172,18,64,80,179,138,23,231,
16,128,64,156,8,32,168,113,138,54,101,133,0,4,178,74,0,65,205,42,94,156,67,0,2,113,34,128,160,198,41,218,148,21,2,16,200,42,1,4,53,171,120,113,14,1,8,196,137,0,130,26,167,104,83,86,8,64,32,171,4,16,212,
172,226,197,57,4,32,16,39,2,8,106,156,162,77,89,33,0,129,172,18,64,80,179,138,23,231,16,128,64,156,8,240,3,211,197,68,187,210,225,66,57,156,83,169,152,20,229,255,80,206,225,131,114,48,167,232,255,67,85,
254,175,54,154,87,72,61,138,102,92,131,74,133,160,6,81,57,178,239,144,84,146,195,230,175,34,155,249,63,91,96,199,153,0,245,232,56,7,32,196,236,233,242,135,8,155,172,32,0,129,104,19,64,80,163,29,95,74,
7,1,8,132,72,0,65,13,17,54,89,65,0,2,209,38,128,160,70,59,190,148,14,2,16,8,145,0,130,26,34,108,178,130,0,4,162,77,0,65,141,118,124,41,29,4,32,16,34,1,4,53,68,216,100,5,1,8,68,155,0,130,26,237,248,82,
58,8,64,32,68,2,8,106,136,176,201,10,2,16,136,54,1,4,53,218,241,165,116,16,128,64,136,4,16,212,16,97,147,21,4,32,16,109,2,8,106,180,227,75,233,32,0,129,16,9,32,168,33,194,38,43,8,64,32,218,4,16,212,104,
199,151,210,65,0,2,33,18,64,80,67,132,77,86,16,128,64,180,9,32,168,209,142,47,165,131,0,4,66,36,128,160,134,8,155,172,32,0,129,104,19,64,80,163,29,95,74,7,1,8,132,72,0,65,13,17,54,89,65,0,2,209,38,128,
160,70,59,190,148,14,2,16,8,145,0,130,26,34,108,178,130,0,4,162,77,0,65,141,118,124,41,29,4,32,16,34,1,4,53,68,216,100,5,1,8,68,155,0,130,26,237,248,82,58,8,64,32,68,2,8,106,136,176,201,10,2,16,136,54,
1,4,53,218,241,165,116,16,128,64,136,4,16,212,16,97,147,21,4,32,16,109,2,8,106,180,227,75,233,32,0,129,16,9,32,168,33,194,38,43,8,64,32,218,4,16,212,104,199,151,210,65,0,2,33,18,64,80,67,132,77,86,16,
128,64,180,9,32,168,209,142,47,165,131,0,4,66,36,128,160,134,8,155,172,32,0,129,104,19,64,80,163,29,95,74,7,1,8,132,72,0,65,13,17,54,89,65,0,2,209,38,128,160,70,59,190,148,14,2,16,8,145,0,130,26,34,108,
178,130,0,4,162,77,0,65,141,118,124,41,29,4,32,16,34,1,4,53,68,216,100,5,1,8,68,155,0,130,26,237,248,82,58,8,64,32,68,2,8,106,136,176,201,10,2,16,136,54,1,4,53,218,241,165,116,16,128,64,136,4,16,212,16,
97,147,21,4,32,16,109,2,8,106,180,227,75,233,32,0,129,16,9,32,168,33,194,38,43,8,64,32,218,4,16,212,104,199,151,210,65,0,2,33,18,64,80,67,132,77,86,16,128,64,180,9,32,168,209,142,47,165,131,0,4,66,36,
128,160,134,8,155,172,32,0,129,104,19,64,80,163,29,95,74,7,1,8,132,72,0,65,13,17,54,89,65,0,2,209,38,128,160,70,59,190,148,14,2,16,8,145,0,130,26,34,108,178,130,0,4,162,77,0,65,141,118,124,41,29,4,32,
16,34,1,4,53,68,216,100,5,1,8,68,155,0,130,26,237,248,82,58,8,64,32,68,2,8,106,136,176,201,10,2,16,136,54,1,4,53,218,241,165,116,16,128,64,136,4,16,212,16,97,147,21,4,32,16,109,2,8,106,180,227,75,233,
32,0,129,16,9,32,168,33,194,38,43,8,64,32,218,4,16,212,104,199,151,210,65,0,2,33,18,64,80,67,132,77,86,16,128,64,180,9,32,168,209,142,47,165,131,0,4,66,36,128,160,134,8,155,172,32,0,129,104,19,64,80,163,
29,95,74,7,1,8,132,72,0,65,13,17,54,89,65,0,2,209,38,144,23,237,226,29,91,233,114,229,160,28,62,54,23,199,253,236,28,83,134,131,82,233,184,95,71,156,47,128,122,20,159,232,35,168,197,196,250,96,78,126,
49,71,43,200,161,28,196,244,120,71,138,122,116,188,35,16,94,254,116,249,195,99,77,78,16,128,64,196,9,32,168,17,15,48,197,131,0,4,194,35,128,160,134,199,154,156,32,0,129,136,19,64,80,35,30,96,138,7,1,8,
132,71,0,65,13,143,53,57,65,0,2,17,39,128,160,70,60,192,20,15,2,16,8,143,0,130,26,30,107,114,130,0,4,34,78,0,65,141,120,128,41,30,4,32,16,30,1,4,53,60,214,228,4,1,8,68,156,0,130,26,241,0,83,60,8,64,32,
60,2,8,106,120,172,201,9,2,16,136,56,1,4,53,226,1,166,120,16,128,64,120,4,16,212,240,88,147,19,4,32,16,113,2,8,106,196,3,76,241,32,0,129,240,8,32,168,225,177,38,39,8,64,32,226,4,16,212,136,7,152,226,65,
0,2,225,17,64,80,195,99,77,78,16,128,64,196,9,32,168,17,15,48,197,131,0,4,194,35,128,160,134,199,154,156,32,0,129,136,19,64,80,35,30,96,138,7,1,8,132,71,0,65,13,143,53,57,65,0,2,17,39,128,160,70,60,192,
20,15,2,16,8,143,0,130,154,134,117,215,214,245,165,77,147,218,105,142,150,126,119,213,252,74,50,184,103,115,233,210,170,94,233,79,230,140,99,38,208,171,125,67,25,208,181,169,228,229,230,28,179,175,40,
56,208,186,125,242,9,45,165,102,213,202,81,40,78,185,41,67,94,216,87,242,203,107,79,150,19,187,52,77,155,237,252,101,155,228,230,223,127,34,239,62,56,86,38,206,94,41,191,122,238,203,164,180,87,143,233,
41,63,24,217,77,206,190,253,101,57,112,224,144,220,126,249,64,25,209,183,117,82,154,195,102,107,195,214,221,242,238,148,37,242,194,135,11,156,99,65,233,220,147,102,125,183,65,254,243,177,9,146,159,151,
43,15,255,100,164,116,104,94,87,42,29,185,241,10,77,30,179,191,91,47,119,253,249,51,55,121,198,215,166,39,116,104,94,71,126,121,237,41,82,175,86,213,196,249,250,101,250,55,235,228,238,167,62,147,3,135,
244,106,197,41,199,169,166,28,163,127,254,146,179,237,255,71,197,224,222,107,78,78,218,125,224,224,33,167,156,191,121,105,186,204,94,188,49,233,216,241,222,8,186,94,189,166,29,5,133,50,115,209,250,148,
184,234,177,191,222,49,70,154,53,168,33,143,140,155,38,239,77,93,166,187,28,123,233,127,207,149,218,53,170,184,155,41,159,79,189,53,71,102,24,158,127,188,121,148,252,246,165,25,242,182,137,187,90,245,
170,121,114,223,117,195,205,67,172,126,210,57,107,55,23,152,120,127,42,235,77,29,137,130,189,121,223,69,178,102,243,46,249,183,7,223,75,42,78,181,252,60,121,245,87,23,200,199,95,45,151,251,95,152,234,
28,251,143,177,39,202,232,147,218,73,142,231,185,178,123,223,1,185,239,249,47,101,202,215,107,19,231,167,187,255,220,4,227,76,76,118,237,46,148,171,239,127,215,221,229,124,230,154,38,218,59,15,140,149,
113,159,44,148,167,222,154,43,61,219,53,148,135,111,24,33,7,77,61,31,115,219,63,147,210,234,134,138,250,93,87,14,22,189,207,206,49,247,180,90,38,247,170,147,176,28,254,19,186,160,222,255,194,20,169,95,
187,154,131,162,155,105,5,106,128,255,252,230,28,153,102,110,8,181,109,59,247,58,159,250,79,142,55,234,137,189,169,95,84,146,126,252,240,251,137,3,77,234,85,151,75,79,235,38,63,28,221,83,22,175,217,150,
168,40,254,116,238,9,110,158,119,255,235,80,71,76,239,122,114,162,124,181,104,131,115,67,170,159,139,71,116,149,27,46,232,43,127,120,101,166,123,74,70,215,214,176,78,53,249,195,207,70,201,246,130,125,
242,243,63,126,34,115,151,108,18,109,169,94,112,114,103,185,114,116,15,121,236,231,103,202,53,15,36,87,200,68,6,105,190,60,246,218,44,153,105,30,0,85,140,248,183,109,86,199,241,245,192,191,159,42,255,
245,212,36,153,186,160,136,97,154,83,143,203,110,247,122,53,243,26,85,242,100,68,191,214,114,206,144,142,230,6,59,148,184,201,245,88,163,186,213,29,49,221,182,107,159,195,219,43,168,63,249,205,135,82,
237,72,75,234,42,19,211,193,61,154,203,117,158,120,175,51,98,210,162,97,77,117,147,100,42,208,53,204,121,42,178,239,79,91,234,60,188,180,151,112,219,165,3,229,169,255,60,75,46,188,235,21,231,70,78,58,
169,2,110,204,91,186,81,250,116,108,226,180,190,221,7,180,22,99,236,136,46,78,105,254,246,238,124,231,243,222,107,134,153,86,122,51,121,99,242,119,242,140,217,183,211,8,162,214,161,187,254,101,176,252,
223,213,195,156,70,133,54,46,92,203,244,254,115,211,23,247,153,107,26,40,23,158,220,73,198,79,90,148,148,76,239,175,162,38,69,210,110,103,159,247,158,118,143,186,247,170,187,93,222,62,67,239,242,107,11,
101,217,218,237,206,223,154,77,187,28,30,218,82,112,247,233,13,85,22,115,207,215,79,125,210,254,242,217,162,150,109,221,154,201,45,27,111,58,247,187,155,167,10,224,33,243,36,157,115,164,181,183,123,239,
1,231,41,251,244,219,115,101,209,202,173,165,190,172,255,250,225,16,57,116,248,176,92,126,239,155,142,152,170,131,189,133,7,229,239,31,45,144,199,94,157,41,173,26,215,114,158,208,165,113,188,110,107,129,
195,234,27,115,61,42,58,90,233,54,110,219,35,183,94,50,176,52,110,66,75,235,94,175,178,158,191,108,179,252,126,252,76,41,220,127,48,165,197,121,237,247,78,144,93,123,10,229,137,215,103,75,203,70,181,196,
27,55,111,253,80,17,80,115,99,167,159,202,212,111,151,159,209,77,234,152,86,237,93,127,158,228,180,88,93,161,249,98,222,26,185,214,60,196,42,155,7,210,109,151,149,79,102,254,178,148,180,253,252,7,95,59,
45,206,115,134,118,76,74,122,90,255,54,178,213,52,80,214,110,41,144,86,134,169,138,233,187,83,151,58,49,240,114,212,135,186,178,191,237,178,147,146,206,183,185,177,124,221,118,57,119,88,167,36,151,218,
35,108,111,122,131,203,215,237,72,218,239,110,120,99,236,126,119,239,85,55,77,121,251,12,93,80,75,3,160,78,141,124,167,203,160,221,6,247,79,91,50,37,153,6,234,167,23,246,117,146,125,242,213,138,68,114,
237,229,184,126,188,159,238,184,218,155,147,23,59,55,218,203,247,94,32,42,134,238,208,196,139,31,47,148,247,167,47,75,248,209,47,153,92,91,219,166,117,100,193,242,205,206,208,68,210,201,102,227,181,207,
23,59,221,160,225,125,90,249,15,149,122,123,250,55,107,141,64,229,151,250,188,227,113,194,121,67,59,72,126,229,74,50,97,230,202,164,236,7,153,86,231,167,102,223,71,166,123,186,223,116,255,174,49,2,123,
44,54,176,123,115,217,189,119,191,25,94,56,218,226,114,253,109,218,190,71,244,97,222,189,109,67,119,87,133,254,212,158,207,30,211,109,31,61,176,93,162,28,218,221,111,90,191,134,124,50,179,168,254,15,239,
91,84,207,254,100,30,228,65,54,105,206,42,105,112,164,231,24,116,252,88,247,189,254,249,119,78,15,196,59,244,245,47,103,246,144,125,251,15,200,170,141,59,83,220,151,116,175,166,156,80,78,118,132,222,229,
47,77,185,123,119,108,44,15,155,191,146,76,225,191,246,171,11,157,100,58,74,80,197,220,176,218,210,252,197,147,147,82,186,116,58,158,227,183,27,127,251,161,104,139,239,13,35,168,218,42,189,244,244,110,
50,172,87,11,231,111,111,225,1,51,6,181,66,254,96,42,162,142,217,186,150,201,181,85,49,221,123,237,142,166,51,245,221,60,160,171,154,46,125,186,253,27,183,21,141,5,214,170,158,239,116,227,210,165,59,30,
251,127,113,197,96,231,193,161,121,43,15,141,149,182,168,188,15,168,17,230,102,215,152,253,197,244,4,212,190,250,118,157,211,114,127,232,31,211,156,237,178,252,163,189,13,183,21,22,116,254,166,29,123,
164,107,235,6,65,135,42,228,62,29,147,31,214,171,165,232,24,166,25,77,145,139,71,118,117,202,241,252,251,95,59,159,250,112,215,222,82,80,107,94,19,172,56,210,74,212,225,178,108,140,45,107,43,84,123,167,
87,159,213,83,30,30,55,221,185,166,81,3,218,57,189,201,74,149,130,219,117,197,221,171,142,131,114,248,79,185,22,84,173,36,218,5,244,218,5,167,116,150,179,60,79,98,247,216,180,133,71,7,212,91,53,174,45,
109,155,214,150,11,78,233,228,76,254,184,105,116,172,230,58,223,192,189,30,91,185,241,104,151,67,91,72,250,167,19,26,231,155,46,202,200,126,109,100,204,160,246,210,169,101,61,209,177,60,215,50,185,182,
131,102,210,168,142,111,200,193,61,95,63,243,243,42,153,74,86,182,33,14,175,159,214,166,188,106,197,9,136,55,125,152,223,23,173,218,42,155,141,120,169,41,139,94,237,26,201,217,131,59,200,11,70,84,221,
110,248,37,167,117,119,134,1,110,252,126,127,39,93,117,51,238,89,213,180,176,134,246,108,33,159,207,91,237,236,43,237,63,5,123,246,23,203,190,102,181,124,217,103,30,104,81,177,103,222,155,231,60,132,206,
49,108,181,247,51,210,140,85,235,68,213,46,211,74,87,219,108,90,229,185,197,204,73,212,55,15,32,181,141,219,139,30,206,206,134,229,127,116,146,89,175,75,5,85,199,110,117,88,231,47,239,204,53,189,145,222,
41,57,101,114,175,166,156,84,14,118,148,107,65,213,214,226,242,245,71,197,78,121,237,40,56,58,105,229,242,83,248,247,254,237,11,119,211,249,212,153,67,157,65,212,238,188,123,227,234,1,191,63,239,73,58,
104,175,173,84,29,131,213,188,117,133,128,254,221,255,227,225,162,45,82,175,101,114,109,42,112,237,154,213,245,158,150,248,174,67,23,58,142,183,100,205,246,196,190,178,126,105,99,90,31,58,75,90,30,109,
220,167,11,69,199,45,93,83,145,252,239,171,134,200,240,62,173,157,7,151,182,170,245,225,167,221,124,237,246,187,166,49,189,252,140,238,101,22,84,237,70,234,131,53,207,48,246,246,44,92,255,205,205,106,
130,117,102,108,49,42,182,114,253,78,231,225,60,122,80,7,51,1,183,220,233,238,235,234,7,215,190,54,67,79,231,155,73,33,157,148,243,198,195,61,174,67,96,26,3,109,221,102,98,65,227,224,122,94,231,150,245,
157,211,181,53,234,55,21,253,239,13,233,96,38,208,26,203,69,195,59,203,150,29,102,124,215,172,184,72,103,197,221,171,233,206,57,222,251,131,219,218,199,251,170,44,228,175,173,76,181,46,102,37,65,166,214,
171,125,35,103,134,217,159,126,181,185,57,181,171,170,221,169,210,216,155,95,44,22,237,122,234,26,72,191,253,236,226,254,98,122,96,242,220,7,69,51,176,254,227,153,110,119,107,219,192,136,118,29,153,238,
105,161,103,122,238,241,72,167,45,78,21,203,94,29,26,57,217,95,61,166,151,211,21,61,247,206,151,229,220,59,198,39,254,62,52,99,214,237,91,212,21,29,11,44,139,61,109,90,62,218,32,187,225,252,162,177,116,
175,143,49,3,219,59,45,224,231,63,40,90,82,231,61,86,145,191,127,54,119,181,243,112,186,244,244,174,78,221,26,63,225,219,68,113,38,204,90,105,186,251,7,228,218,128,214,160,214,209,174,109,26,200,148,5,
71,123,121,137,19,211,124,209,97,1,125,24,234,50,55,175,93,104,122,144,106,243,204,242,71,191,169,200,170,128,234,216,105,223,78,77,156,7,170,63,77,69,223,46,165,68,84,156,226,186,3,221,45,26,214,74,92,
180,138,98,15,35,64,254,63,29,55,82,251,98,254,26,103,210,234,14,179,182,181,189,17,41,21,80,109,229,158,113,98,91,167,53,147,233,211,219,113,102,254,121,206,140,95,233,146,169,7,126,124,170,233,230,182,
119,90,203,90,121,181,245,220,191,115,83,121,251,203,162,49,91,55,125,186,235,211,165,86,174,105,247,94,175,191,95,167,198,114,253,249,125,228,161,127,63,213,105,89,60,114,100,92,202,77,87,158,63,117,
253,108,131,218,85,157,75,212,73,185,239,86,111,75,105,25,233,216,159,242,184,202,140,185,149,197,180,197,166,195,50,58,92,243,211,11,251,57,147,118,202,81,151,233,220,56,182,191,172,220,176,211,89,231,
92,22,223,229,245,156,191,189,55,223,233,214,95,52,188,139,179,92,208,219,51,211,107,254,235,59,243,156,229,101,191,249,233,72,105,213,164,232,190,208,185,130,167,111,63,203,105,197,63,252,226,212,164,
162,233,68,167,255,94,113,95,118,249,251,145,245,221,15,154,250,55,202,220,31,58,17,252,163,179,123,201,80,227,79,133,115,129,89,209,17,100,111,153,70,134,182,134,181,119,230,142,239,6,165,75,119,47,184,
247,106,208,57,229,97,95,217,30,255,229,225,202,75,184,6,109,85,106,75,232,140,147,218,38,77,128,60,98,22,238,251,109,225,138,45,114,211,163,31,153,197,205,83,164,102,181,202,162,11,236,245,207,53,125,
170,254,212,76,92,149,197,174,184,231,77,249,205,141,167,201,141,23,245,119,254,212,135,46,114,214,137,25,189,1,252,22,116,125,15,155,201,153,173,187,138,134,58,180,69,231,154,182,56,116,140,242,78,179,
110,86,135,32,42,138,237,52,55,92,15,115,83,233,42,10,93,39,250,202,196,163,45,41,183,12,186,212,71,151,200,232,210,159,63,153,181,183,101,49,157,148,188,229,226,19,101,140,121,152,105,87,83,77,235,196,
44,243,98,193,237,143,79,116,182,163,244,143,46,145,210,9,74,29,78,242,182,78,221,50,190,98,214,128,234,216,242,79,205,88,245,159,111,29,237,238,118,94,14,185,209,212,127,127,29,210,174,121,31,223,253,
162,13,132,139,239,126,221,121,88,189,248,241,2,25,123,106,87,185,229,146,1,206,159,58,212,227,119,62,49,41,225,219,255,229,229,137,223,200,213,70,120,87,153,7,218,158,18,198,176,131,238,5,247,94,245,
251,45,47,219,57,163,110,25,167,117,12,243,16,208,150,76,119,211,5,170,101,214,49,206,95,186,73,116,153,205,177,154,182,118,85,64,84,40,180,245,132,133,75,160,179,153,84,212,201,46,239,194,245,112,175,
160,124,229,166,162,171,76,166,152,161,162,160,49,230,76,175,86,235,181,142,155,234,106,21,109,149,106,253,142,179,33,168,113,142,62,101,135,0,4,172,18,48,207,23,12,2,16,128,0,4,108,16,64,80,109,80,196,
7,4,32,0,1,67,0,65,165,26,64,0,2,16,176,68,0,65,181,4,18,55,16,128,0,4,16,84,234,0,4,32,0,1,75,4,16,84,75,32,113,3,1,8,64,0,65,165,14,64,0,2,16,176,68,0,65,181,4,18,55,16,128,0,4,16,84,234,0,4,32,0,1,
75,4,16,84,75,32,113,3,1,8,64,0,65,165,14,64,0,2,16,176,68,0,65,181,4,18,55,16,128,0,4,16,84,234,0,4,32,0,1,75,4,16,84,75,32,113,3,1,8,64,0,65,165,14,64,0,2,16,176,68,0,65,181,4,18,55,16,128,0,4,42,244,
255,2,37,255,80,129,28,202,173,92,161,163,152,123,104,191,20,230,38,255,143,206,42,98,129,136,69,249,138,26,241,56,62,241,168,208,130,122,64,42,203,33,201,63,62,228,44,229,26,149,46,2,177,176,84,33,44,
185,33,30,150,64,150,210,77,84,238,231,82,22,155,228,16,128,0,4,236,19,64,80,237,51,197,35,4,32,16,83,2,8,106,76,3,79,177,33,0,1,251,4,16,84,251,76,241,8,1,8,196,148,0,130,26,211,192,83,108,8,64,192,62,
1,4,213,62,83,60,66,0,2,49,37,128,160,198,52,240,20,27,2,16,176,79,0,65,181,207,20,143,16,128,64,76,9,32,168,49,13,60,197,134,0,4,236,19,64,80,237,51,197,35,4,32,16,83,2,8,106,76,3,79,177,33,0,1,251,4,
16,84,251,76,241,8,1,8,196,148,0,130,26,211,192,83,108,8,64,192,62,1,4,213,62,83,60,66,0,2,49,37,128,160,198,52,240,20,27,2,16,176,79,0,65,181,207,20,143,16,128,64,76,9,32,168,49,13,60,197,134,0,4,236,
19,64,80,237,51,197,35,4,32,16,83,2,8,106,76,3,79,177,33,0,1,251,4,16,84,251,76,241,8,1,8,196,148,0,130,26,211,192,83,108,8,64,192,62,1,4,213,62,83,60,66,0,2,49,37,128,160,198,52,240,20,27,2,16,176,79,
0,65,181,207,20,143,16,128,64,76,9,32,168,49,13,60,197,134,0,4,236,19,64,80,237,51,197,35,4,32,16,83,2,8,106,76,3,79,177,33,0,1,251,4,16,84,251,76,241,8,1,8,196,148,0,130,26,211,192,83,108,8,64,192,62,
1,4,213,62,83,60,66,0,2,49,37,128,160,198,52,240,20,27,2,16,176,79,0,65,181,207,20,143,16,128,64,76,9,32,168,49,13,60,197,134,0,4,236,19,64,80,237,51,197,35,4,32,16,83,2,8,106,76,3,79,177,33,0,1,251,4,
16,84,251,76,241,8,1,8,196,148,0,130,26,211,192,83,108,8,64,192,62,1,4,213,62,83,60,66,0,2,49,37,128,160,198,52,240,20,27,2,16,176,79,0,65,181,207,20,143,16,128,64,76,9,32,168,49,13,60,197,134,0,4,236,
19,64,80,237,51,197,35,4,32,16,83,2,8,106,76,3,79,177,33,0,1,251,4,16,84,251,76,241,8,1,8,196,148,0,130,26,211,192,83,108,8,64,192,62,1,4,213,62,83,60,66,0,2,49,37,128,160,198,52,240,20,27,2,16,176,79,
0,65,181,207,20,143,16,128,64,76,9,32,168,49,13,60,197,134,0,4,236,19,64,80,237,51,197,35,4,32,16,83,2,8,106,76,3,79,177,33,0,1,251,4,16,84,251,76,241,8,1,8,196,148,0,130,26,211,192,83,108,8,64,192,62,
1,4,213,62,83,60,66,0,2,49,37,128,160,198,52,240,20,27,2,16,176,79,0,65,181,207,20,143,16,128,64,76,9,32,168,49,13,60,197,134,0,4,236,19,64,80,237,51,197,35,4,32,16,83,2,8,106,76,3,79,177,33,0,1,251,4,
16,84,251,76,241,8,1,8,196,148,0,130,26,211,192,83,108,8,64,192,62,1,4,213,62,83,60,66,0,2,49,37,128,160,198,52,240,20,27,2,16,176,79,0,65,181,207,20,143,16,128,64,76,9,32,168,49,13,60,197,134,0,4,236,
19,64,80,237,51,197,35,4,32,16,83,2,8,106,76,3,79,177,33,0,1,251,4,242,236,187,12,207,99,158,236,151,67,225,101,151,149,156,114,77,25,10,37,63,43,190,195,116,74,44,194,164,93,114,94,196,163,100,70,217,
72,81,161,5,181,48,183,70,54,152,132,235,51,183,226,139,169,2,35,22,225,86,155,146,114,35,30,37,17,202,206,113,186,252,217,225,138,87,8,64,32,134,4,16,212,24,6,157,34,67,0,2,217,33,128,160,102,135,43,
94,33,0,129,24,18,64,80,99,24,116,138,12,1,8,100,135,0,130,154,29,174,120,133,0,4,98,72,0,65,141,97,208,41,50,4,32,144,29,2,8,106,118,184,226,21,2,16,136,33,1,4,53,134,65,167,200,16,128,64,118,8,32,168,
217,225,138,87,8,64,32,134,4,16,212,24,6,157,34,67,0,2,217,33,128,160,102,135,43,94,33,0,129,24,18,64,80,99,24,116,138,12,1,8,100,135,0,130,154,29,174,120,133,0,4,98,72,0,65,141,97,208,41,50,4,32,144,
29,2,8,106,118,184,226,21,2,16,136,33,1,4,53,134,65,167,200,16,128,64,118,8,32,168,217,225,138,87,8,64,32,134,4,16,212,24,6,157,34,67,0,2,217,33,128,160,102,135,43,94,33,0,129,24,18,64,80,99,24,116,138,
12,1,8,100,135,0,130,154,29,174,120,133,0,4,98,72,0,65,141,97,208,41,50,4,32,144,29,2,8,106,118,184,226,21,2,16,136,33,129,255,15,225,152,255,204,242,114,49,194,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* GuiComponent::bg_png = (const char*) resource_GuiComponent_bg_png;
const int GuiComponent::bg_pngSize = 15887;

// JUCER_RESOURCE: rectButtonR1_png, 1713, "../Resources/RectButtonR-1.png"
static const unsigned char resource_GuiComponent_rectButtonR1_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,128,0,0,0,32,8,6,0,0,0,218,34,112,37,0,0,0,1,115,82,71,66,0,174,206,28,233,0,
0,0,56,101,88,73,102,77,77,0,42,0,0,0,8,0,1,135,105,0,4,0,0,0,1,0,0,0,26,0,0,0,0,0,2,160,2,0,4,0,0,0,1,0,0,0,128,160,3,0,4,0,0,0,1,0,0,0,32,0,0,0,0,27,97,185,219,0,0,6,39,73,68,65,84,120,1,237,90,13,76,
149,85,24,126,46,215,123,47,63,242,43,42,8,88,94,8,72,65,156,26,40,83,81,113,254,68,182,181,22,171,85,210,202,212,218,178,63,91,102,246,179,169,212,164,220,96,179,217,207,114,77,91,52,90,173,218,160,40,
210,116,24,33,56,54,16,17,13,1,133,113,145,127,228,31,164,247,61,151,239,242,125,87,97,48,25,247,194,253,222,237,220,243,243,189,231,124,231,125,223,231,188,231,61,231,187,26,12,209,224,224,224,22,42,
30,164,100,164,228,53,212,172,102,211,75,3,45,36,78,5,165,253,26,141,38,139,69,211,144,225,181,148,31,160,180,151,235,148,84,154,254,26,24,36,17,15,81,250,144,1,176,150,10,167,40,169,228,88,26,184,77,
226,110,100,0,252,70,133,77,142,37,187,42,237,144,6,126,103,0,212,81,101,174,170,18,135,212,128,137,1,192,251,129,74,14,170,1,39,7,149,91,21,123,72,3,42,0,28,28,10,42,0,84,0,56,184,6,28,92,124,135,243,
0,237,93,189,168,109,184,229,224,102,31,22,127,198,112,113,242,74,201,39,243,240,119,209,117,203,11,53,116,255,232,235,225,130,85,139,3,241,124,66,36,244,51,180,184,94,223,142,237,135,249,138,98,152,116,
51,156,16,105,156,141,216,136,0,60,178,50,24,220,239,110,124,82,143,168,144,57,56,188,43,78,84,179,254,189,134,95,115,175,162,186,190,13,78,78,26,184,187,232,241,80,184,31,118,62,186,4,46,6,179,26,172,
231,37,141,195,249,39,47,175,197,119,57,151,80,120,217,36,111,86,148,63,218,177,6,75,67,231,162,228,90,3,126,60,83,142,171,53,45,240,243,113,67,92,84,16,18,86,26,21,188,92,169,33,32,190,121,244,20,210,
63,216,122,199,179,201,106,176,9,0,64,7,207,232,7,253,241,122,226,114,33,103,87,79,63,42,106,91,112,228,251,243,96,35,191,144,176,216,34,255,225,151,214,34,104,142,187,168,247,245,13,224,98,101,35,82,
210,243,225,68,214,151,43,85,206,39,117,214,105,205,14,174,180,170,17,105,63,20,34,153,12,180,56,120,182,0,78,101,93,27,222,253,226,140,96,125,237,9,243,60,172,231,37,141,195,185,187,171,30,239,60,179,
2,125,253,124,129,70,87,167,23,170,113,34,251,34,190,222,203,159,80,204,196,60,117,77,29,216,255,213,89,108,137,49,226,217,141,139,4,8,82,51,10,96,208,107,177,97,217,125,130,49,167,176,74,128,228,92,73,
13,218,58,123,165,238,54,201,109,3,0,18,85,79,134,246,113,119,54,11,77,246,13,240,157,137,220,226,26,148,85,55,41,20,225,233,166,31,230,163,39,115,105,69,101,156,42,195,45,114,229,114,178,230,147,63,107,
104,233,18,85,6,146,150,86,63,147,209,223,19,135,94,92,13,83,115,167,168,75,63,138,121,73,141,67,185,142,188,134,68,110,206,58,2,146,70,49,55,126,118,174,164,22,158,110,6,236,216,26,37,128,182,128,222,
83,70,0,100,163,75,0,240,245,114,197,178,48,63,248,207,154,137,227,89,197,210,144,54,201,109,6,0,107,105,123,251,7,112,161,220,132,21,11,253,173,31,41,234,197,21,55,133,219,95,66,238,93,78,55,201,200,
206,122,165,56,108,8,118,239,204,235,229,110,192,238,212,28,108,142,89,128,229,164,252,240,249,62,48,206,243,18,73,62,78,119,239,128,88,197,242,54,6,205,108,50,218,88,168,218,212,74,134,117,19,198,151,
248,231,17,184,243,74,107,165,42,162,200,11,49,149,95,111,182,180,217,170,160,212,216,36,206,226,10,237,143,169,228,150,153,90,59,122,132,241,7,6,6,241,216,154,80,197,44,146,79,228,65,175,227,15,150,160,
213,218,129,142,174,62,188,255,92,44,194,200,128,114,98,183,107,77,111,61,21,45,86,157,7,121,145,180,221,241,200,204,171,64,118,254,53,124,251,71,169,48,40,199,17,9,177,70,17,15,72,125,11,46,215,33,41,
57,83,170,138,156,247,241,111,246,61,172,104,27,169,194,0,154,69,241,140,156,184,222,221,219,47,111,178,155,178,205,0,192,55,208,125,180,234,153,92,13,58,60,78,134,95,79,123,36,111,5,114,90,177,104,158,
69,161,12,148,44,50,98,230,63,21,136,14,247,23,193,156,196,155,34,139,21,164,54,55,23,157,84,20,6,79,218,28,129,109,155,34,104,229,53,137,21,153,113,186,12,185,37,55,144,250,74,188,101,172,24,89,108,34,
117,230,160,113,172,196,222,66,218,102,164,62,220,95,235,100,159,7,46,155,1,32,52,208,27,123,158,140,150,116,52,98,190,126,233,124,220,239,231,105,121,190,154,78,10,187,62,205,22,193,85,104,144,183,165,
157,87,185,183,20,83,88,90,205,5,62,113,240,86,192,129,39,159,28,216,123,112,226,136,125,207,103,167,81,105,106,19,49,1,115,115,16,58,210,56,86,195,222,181,234,74,177,65,189,85,92,209,214,217,3,142,25,
236,145,236,19,150,163,104,138,131,42,142,182,43,235,90,71,225,82,62,186,114,163,25,233,127,149,41,27,169,198,174,157,169,127,40,178,23,149,123,252,121,128,128,253,31,157,104,110,203,190,177,241,251,67,
2,237,243,79,86,83,14,0,108,31,175,153,6,180,220,234,81,152,170,177,181,27,38,58,130,201,83,83,91,183,224,89,71,94,164,156,78,23,199,126,46,66,21,29,255,152,152,239,120,86,9,230,120,187,34,36,96,216,56,
61,116,212,148,143,33,149,185,125,44,196,1,102,103,119,31,157,84,46,163,127,224,182,56,238,229,20,84,33,110,201,252,177,116,159,116,30,155,109,1,247,34,41,31,231,242,47,213,34,113,93,152,101,152,125,95,
154,207,244,150,6,42,132,5,249,32,237,213,120,4,83,180,255,94,82,44,142,253,82,132,159,206,94,17,219,1,223,61,68,26,125,241,241,206,56,203,254,207,125,207,151,213,97,155,85,16,200,237,7,183,175,22,23,
71,92,30,141,124,60,156,241,246,211,49,248,156,192,118,50,187,20,206,6,45,18,215,135,99,85,100,192,104,221,108,246,204,161,254,15,192,110,153,239,4,216,123,248,122,185,220,113,134,159,104,43,52,183,119,
195,147,188,21,95,90,217,43,57,20,0,236,213,8,182,156,215,148,140,1,108,169,176,233,246,110,21,0,211,205,162,227,148,71,5,192,56,21,54,221,216,85,0,76,55,139,142,83,30,6,192,200,31,184,199,57,152,202,
62,229,52,96,98,0,20,77,185,105,171,19,158,40,13,20,241,49,48,158,70,203,166,164,110,7,19,165,214,169,49,14,255,179,37,158,238,40,52,57,84,72,153,26,115,86,103,57,129,26,56,64,182,63,109,185,162,34,79,
176,144,6,127,131,210,6,74,230,255,46,77,224,219,212,161,236,66,3,85,52,139,63,41,29,33,227,151,242,140,254,7,217,29,229,70,213,164,236,220,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* GuiComponent::rectButtonR1_png = (const char*) resource_GuiComponent_rectButtonR1_png;
const int GuiComponent::rectButtonR1_pngSize = 1713;

// JUCER_RESOURCE: rectButtonR2_png, 1847, "../Resources/RectButtonR-2.png"
static const unsigned char resource_GuiComponent_rectButtonR2_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,128,0,0,0,32,8,6,0,0,0,218,34,112,37,0,0,0,1,115,82,71,66,0,174,206,28,233,0,
0,0,56,101,88,73,102,77,77,0,42,0,0,0,8,0,1,135,105,0,4,0,0,0,1,0,0,0,26,0,0,0,0,0,2,160,2,0,4,0,0,0,1,0,0,0,128,160,3,0,4,0,0,0,1,0,0,0,32,0,0,0,0,27,97,185,219,0,0,6,173,73,68,65,84,120,1,237,90,9,108,
148,85,16,254,182,75,119,123,80,122,67,15,202,177,96,91,129,2,34,180,180,1,90,40,225,170,26,141,17,53,10,24,228,18,35,34,66,64,64,67,2,84,3,138,41,38,82,143,160,6,140,40,198,59,84,171,149,2,22,75,41,164,
9,165,44,5,122,1,165,11,189,161,244,110,157,121,187,255,246,223,133,34,149,186,75,187,255,36,111,223,241,207,59,102,230,251,231,205,123,251,171,96,162,246,246,246,217,84,220,66,73,71,201,203,212,172,100,
189,75,3,213,36,78,1,165,141,42,149,42,133,69,83,145,225,213,148,111,166,180,142,235,148,20,234,253,26,104,39,17,183,82,218,196,0,136,163,194,65,74,10,57,150,6,218,72,220,25,12,128,95,169,48,211,177,100,
87,164,53,105,224,55,6,64,25,85,6,40,42,113,72,13,24,24,0,188,31,40,228,160,26,112,114,80,185,21,177,77,26,80,0,224,224,80,80,0,160,0,192,193,53,224,224,226,59,156,7,184,94,223,132,210,242,27,14,110,246,
14,241,251,116,20,109,87,74,220,155,137,67,57,23,205,19,170,232,254,209,175,159,43,38,141,30,136,133,9,17,208,244,81,227,226,213,235,88,180,141,175,40,58,200,185,143,19,34,116,254,136,25,21,140,71,162,
135,129,251,221,142,79,234,49,102,120,127,108,91,22,43,170,41,199,10,241,115,198,121,148,92,173,133,147,147,10,30,174,26,76,8,15,192,210,199,198,194,85,107,84,131,245,186,164,113,56,127,119,121,28,190,
74,59,131,19,103,13,242,102,139,242,219,75,166,96,92,232,0,228,22,150,227,187,195,249,56,127,185,26,1,62,238,136,29,19,130,132,104,157,153,151,215,252,121,202,41,241,60,216,191,47,38,142,8,194,204,200,
161,208,58,243,165,172,109,201,46,0,0,29,60,35,31,12,196,107,115,199,11,105,235,27,91,80,80,90,141,29,95,31,7,27,249,197,132,209,102,45,108,123,41,14,33,253,61,68,189,185,185,21,167,139,42,176,125,95,
22,156,200,250,114,165,202,249,164,206,206,106,163,131,203,43,174,192,206,111,79,32,145,12,52,122,152,191,0,78,81,89,45,54,124,124,88,176,174,124,202,184,14,235,117,73,227,112,238,225,166,193,27,207,79,
68,115,11,95,160,209,213,233,201,18,236,73,61,141,221,235,248,47,20,35,49,79,89,101,29,54,126,122,4,179,163,116,152,55,99,164,48,114,210,254,108,104,53,106,76,127,120,48,110,212,55,99,205,174,116,68,143,
12,194,134,121,209,168,189,217,136,93,63,228,224,252,165,42,172,122,122,130,52,148,205,114,251,0,128,196,211,144,161,125,60,92,76,154,3,130,253,250,34,227,212,101,232,75,42,45,132,247,116,215,116,240,
209,147,1,244,70,237,63,168,39,69,54,221,145,79,254,176,188,186,94,84,25,72,106,122,251,153,116,129,158,216,186,120,50,12,85,55,69,93,250,177,88,151,212,104,202,157,201,107,72,228,238,226,76,64,82,89,
172,141,159,29,205,45,133,167,187,22,75,30,29,35,128,54,148,230,209,19,0,211,78,20,11,0,228,22,94,3,3,126,249,227,15,9,176,115,159,89,81,67,241,203,209,11,92,180,57,217,13,0,214,146,54,181,180,226,100,
190,129,220,97,160,245,35,139,250,169,130,107,194,237,143,37,247,46,167,107,100,100,23,141,165,56,108,8,118,239,204,235,229,161,197,138,164,52,161,236,241,97,1,8,31,228,3,93,144,151,72,242,113,26,154,
90,197,91,44,111,99,208,248,123,185,201,155,58,45,151,24,106,16,232,235,46,140,47,49,5,17,184,51,243,74,69,149,183,136,189,27,19,204,198,231,198,99,121,87,204,94,78,234,99,171,220,82,99,182,154,149,230,
57,71,251,99,18,185,101,166,154,186,70,97,252,214,214,118,60,49,37,84,180,73,63,137,123,50,161,49,237,141,134,170,58,212,145,11,125,235,133,24,132,145,1,229,196,110,215,154,214,60,27,41,222,186,126,228,
69,118,174,136,199,129,204,2,164,102,21,226,203,223,243,132,65,57,142,72,136,209,137,120,64,234,155,125,182,12,11,18,15,72,85,145,243,62,254,197,250,57,22,109,157,85,24,64,190,20,207,200,137,235,13,77,
45,162,137,227,27,78,18,113,172,160,47,169,160,88,37,78,106,178,105,110,55,0,240,13,116,51,189,245,76,110,90,103,60,73,134,159,70,123,36,111,5,114,154,72,123,165,164,80,6,74,10,25,241,192,223,5,136,12,
15,20,193,156,196,187,93,22,43,72,109,238,174,206,82,81,24,124,193,172,81,152,63,115,20,242,47,86,138,55,114,127,186,30,25,185,151,144,244,74,188,121,172,40,89,108,34,117,230,160,241,110,137,189,133,180,
205,72,125,184,191,218,201,242,192,197,30,239,253,111,178,145,117,230,10,18,23,79,193,136,33,190,18,187,77,115,187,1,32,116,160,55,86,63,19,249,175,194,78,27,55,8,67,2,60,205,124,147,233,164,176,236,189,
84,17,92,133,134,120,155,219,249,45,247,150,98,10,115,171,177,192,39,14,222,10,56,240,228,147,3,123,15,78,236,142,87,127,152,142,34,67,173,136,9,152,155,131,208,206,198,177,26,246,182,85,55,138,13,174,
90,197,21,28,232,113,204,32,17,3,121,211,238,12,142,57,241,193,202,233,8,242,181,4,189,196,103,139,220,18,150,182,152,241,30,231,224,160,138,163,237,162,178,154,187,30,233,28,69,216,251,254,212,223,194,
207,174,157,169,197,20,217,223,194,240,31,26,30,32,96,95,160,19,77,155,236,63,54,158,127,248,64,227,71,86,109,109,237,88,155,124,8,254,222,110,216,241,242,84,187,26,159,197,235,113,0,224,69,123,245,213,
162,250,70,35,23,205,84,81,211,0,3,29,193,228,169,178,182,65,60,159,74,94,36,159,78,23,201,63,230,160,152,142,127,76,204,247,89,74,46,250,147,33,134,7,119,124,1,215,72,71,77,249,24,82,153,219,239,134,
56,192,188,217,208,76,39,149,179,104,105,109,19,119,2,105,217,197,136,29,59,72,116,255,139,78,58,124,242,88,56,39,2,60,38,159,8,56,53,82,236,96,15,178,219,22,112,47,194,242,113,46,235,76,41,230,78,13,
51,15,179,254,19,227,153,222,220,64,133,176,16,31,236,124,53,30,195,40,218,127,115,65,12,146,127,202,193,247,71,206,137,237,128,149,30,161,243,195,59,75,99,205,251,63,247,61,174,47,195,124,171,32,144,
219,183,44,154,44,46,142,184,124,39,242,233,231,130,181,207,69,225,35,2,219,222,212,60,184,104,213,152,59,45,28,147,34,130,69,183,211,69,229,2,32,214,129,38,123,182,228,215,103,220,105,232,255,229,153,
67,125,15,192,110,153,239,4,216,123,248,121,185,222,114,134,239,110,13,87,93,111,128,39,121,43,190,180,186,95,201,161,0,112,191,26,193,158,235,234,145,49,128,61,21,214,219,230,86,0,208,219,44,218,69,121,
20,0,116,81,97,189,141,93,1,64,111,179,104,23,229,97,0,116,254,7,119,23,7,83,216,123,156,6,12,12,128,156,30,183,108,101,193,221,165,129,28,62,6,198,211,104,169,148,148,237,160,187,212,218,51,198,225,47,
91,226,233,142,66,149,70,133,237,61,99,205,202,42,187,81,3,155,201,246,233,230,43,42,242,4,35,104,240,85,148,166,83,26,220,141,19,41,67,221,63,26,40,166,165,252,65,105,7,25,63,143,151,245,15,150,160,44,
107,121,254,229,194,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* GuiComponent::rectButtonR2_png = (const char*) resource_GuiComponent_rectButtonR2_png;
const int GuiComponent::rectButtonR2_pngSize = 1847;

// JUCER_RESOURCE: rectButtonR3_png, 1882, "../Resources/RectButtonR-3.png"
static const unsigned char resource_GuiComponent_rectButtonR3_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,128,0,0,0,32,8,6,0,0,0,218,34,112,37,0,0,0,1,115,82,71,66,0,174,206,28,233,0,
0,0,56,101,88,73,102,77,77,0,42,0,0,0,8,0,1,135,105,0,4,0,0,0,1,0,0,0,26,0,0,0,0,0,2,160,2,0,4,0,0,0,1,0,0,0,128,160,3,0,4,0,0,0,1,0,0,0,32,0,0,0,0,27,97,185,219,0,0,6,208,73,68,65,84,120,1,237,90,9,108,
148,69,20,254,182,219,110,47,122,82,122,80,10,178,173,109,5,10,132,163,133,202,93,194,85,197,24,35,106,84,32,128,128,36,162,40,70,68,52,152,66,69,170,36,197,196,128,26,196,128,130,129,96,196,164,213,98,
5,33,213,82,142,84,40,165,7,246,2,74,151,163,244,190,15,223,155,221,127,251,239,150,10,65,252,183,101,255,151,204,254,51,243,191,57,222,123,223,188,121,51,255,106,96,162,206,206,206,185,148,221,68,73,
79,201,219,84,173,62,30,46,13,84,145,56,69,148,54,104,52,154,84,22,77,67,134,215,210,51,129,210,58,46,83,82,233,225,215,64,39,137,184,153,210,70,6,192,52,202,28,165,164,146,125,105,160,131,196,157,197,
0,248,153,50,179,237,75,118,85,90,147,6,126,97,0,84,80,33,64,85,137,93,106,192,192,0,224,253,64,37,59,213,128,131,157,202,173,138,109,210,128,10,0,59,135,130,10,0,21,0,118,174,1,59,23,223,238,60,64,109,
99,11,202,111,214,217,185,217,187,196,119,236,202,42,151,75,220,155,137,223,179,47,155,7,212,208,253,163,159,167,43,38,141,28,132,37,241,81,208,57,106,113,249,122,45,150,109,229,43,138,46,114,114,116,
64,148,126,0,98,71,4,227,137,137,161,224,118,119,226,147,90,140,10,243,199,214,149,83,69,49,245,100,49,126,202,184,132,178,235,53,112,112,208,192,195,85,135,241,145,129,88,49,127,52,92,157,141,106,176,
158,151,212,15,63,63,89,53,13,251,210,47,226,76,190,65,94,109,145,255,104,249,20,140,9,15,64,78,241,77,28,58,94,128,75,87,171,16,232,235,142,169,163,66,16,63,81,111,230,45,186,86,141,221,41,231,81,92,
81,141,33,1,158,162,205,252,199,195,224,168,85,126,61,218,4,0,160,131,103,244,99,65,88,179,96,156,80,74,99,115,27,138,202,171,176,237,251,83,96,35,47,141,31,105,86,214,214,87,167,33,196,223,67,148,91,
91,219,113,161,228,22,146,246,103,193,129,172,47,87,170,156,79,106,236,100,82,104,110,233,45,108,63,120,6,137,100,160,145,161,3,4,112,74,42,106,240,222,23,199,5,235,27,207,26,231,97,61,47,169,31,126,122,
184,233,240,238,75,19,208,218,198,23,104,116,117,122,182,12,123,210,46,96,215,58,254,132,98,36,230,169,168,172,199,134,175,78,96,110,140,30,47,207,26,46,64,144,124,224,52,156,117,90,204,28,59,68,48,110,
161,5,192,242,47,158,23,133,234,186,102,36,237,203,66,109,67,11,22,205,25,33,117,165,216,211,54,0,32,241,116,100,104,95,15,23,163,160,100,223,96,191,126,200,56,127,21,121,101,149,22,194,123,185,235,186,
248,232,77,0,173,168,3,71,243,80,71,174,92,78,214,124,242,119,55,171,26,69,145,129,164,165,213,207,164,15,242,194,230,87,38,195,112,187,65,148,165,31,139,121,73,149,166,167,19,121,13,137,220,93,156,8,
72,26,139,185,241,187,63,114,202,225,229,238,140,229,79,142,18,64,27,74,227,228,17,0,211,207,148,10,0,176,199,98,25,150,144,241,217,19,49,133,6,123,227,118,109,147,200,43,253,99,51,0,88,11,218,210,214,
142,179,5,6,76,24,22,100,253,202,162,124,190,232,134,112,251,163,201,189,203,233,6,25,217,69,103,41,14,27,130,221,59,243,122,123,56,99,117,114,58,230,196,12,197,184,136,64,68,14,246,133,126,160,183,72,
242,126,154,90,218,197,42,150,215,49,104,6,120,187,201,171,122,204,151,25,170,17,212,223,93,24,95,98,26,72,224,206,204,45,23,69,6,97,194,210,73,34,127,157,192,119,242,226,53,176,76,91,86,24,183,42,169,
141,82,79,75,141,41,53,42,141,83,72,251,99,50,185,101,166,234,250,102,97,252,246,246,78,60,61,37,92,212,73,63,137,123,50,161,115,226,15,150,160,213,90,143,250,198,86,124,176,56,22,17,100,64,57,177,219,
181,166,183,95,136,22,171,206,147,188,200,246,213,113,72,201,44,66,90,86,49,190,61,146,43,12,202,113,68,124,172,94,196,3,82,219,211,249,21,88,148,152,34,21,197,147,247,241,111,214,207,179,168,235,169,
192,0,234,79,241,140,156,184,220,212,210,38,175,18,249,85,219,142,128,131,82,142,105,66,9,140,182,32,155,1,128,111,160,91,105,213,51,185,57,59,225,25,50,252,12,218,35,121,43,144,211,132,225,3,205,10,101,
160,164,146,17,83,254,44,66,116,100,144,217,133,50,127,146,44,86,144,218,187,187,58,73,89,97,112,222,99,23,206,30,129,130,203,149,98,69,30,56,150,135,140,156,43,72,126,45,206,220,87,140,44,54,145,26,75,
174,90,42,255,219,147,189,133,180,205,72,124,220,94,235,208,61,192,59,152,240,20,242,105,203,251,236,208,89,124,184,59,3,155,150,77,150,154,40,246,180,25,0,194,7,249,96,237,243,209,119,21,116,198,152,
193,120,36,208,203,204,55,153,78,10,43,63,77,19,193,85,120,136,143,185,158,87,185,143,20,83,152,107,141,25,62,113,240,86,192,129,23,159,28,216,123,112,226,136,125,237,231,199,80,98,168,17,49,1,115,115,
16,218,83,63,86,221,222,177,232,70,177,1,187,118,57,213,52,52,131,99,6,38,62,130,182,182,119,136,232,159,203,60,143,5,211,35,241,241,119,39,209,76,222,131,131,69,37,169,59,44,149,28,253,62,198,226,160,
138,163,237,18,58,66,221,43,21,94,185,141,253,191,229,117,99,103,215,206,212,102,138,236,187,49,220,71,197,163,4,236,191,233,68,211,33,251,198,198,227,135,13,50,186,248,19,231,174,96,227,174,12,139,158,
29,181,26,180,119,116,88,180,177,96,248,31,11,125,14,0,172,11,239,126,206,168,162,227,147,156,110,85,55,193,64,71,48,121,170,172,49,70,214,211,201,139,20,144,171,221,241,99,54,74,233,248,199,196,124,95,
167,230,192,223,199,13,97,20,133,75,212,76,71,77,121,31,82,158,235,239,133,56,192,108,104,106,165,147,74,62,218,104,165,243,157,64,250,233,82,76,29,61,88,52,31,75,239,175,85,214,209,61,65,161,88,241,101,
228,125,246,167,231,209,241,212,223,124,31,113,47,227,60,40,30,155,109,1,255,69,0,142,164,179,46,150,147,235,140,48,119,179,254,75,227,153,222,92,65,153,136,16,95,108,127,61,78,4,88,239,47,138,197,142,
195,217,248,225,68,161,80,52,223,61,68,233,253,68,244,45,223,227,79,229,85,96,161,85,16,200,125,242,254,204,23,71,119,35,95,79,23,188,243,98,12,118,18,216,246,166,229,194,197,89,139,5,51,34,49,41,42,88,
52,101,176,173,161,123,135,157,135,255,194,174,148,115,226,94,129,183,162,183,158,27,127,183,174,255,151,247,118,245,127,0,118,203,124,39,192,222,195,207,219,181,219,25,254,65,107,152,207,246,94,228,173,
248,210,202,154,164,185,244,163,237,204,205,116,19,105,205,163,68,217,174,0,160,132,66,251,218,24,125,50,6,232,107,74,238,205,243,85,1,208,155,173,163,192,220,84,0,40,160,228,222,60,132,10,128,222,108,
29,5,230,198,0,232,249,3,183,2,19,80,135,176,169,6,12,12,128,108,155,78,65,29,220,150,26,200,230,99,96,28,205,32,141,146,186,29,216,210,20,202,143,205,255,108,137,163,59,10,77,58,101,146,148,31,95,29,
209,198,26,72,32,219,31,51,95,81,145,39,24,70,19,122,147,210,76,74,198,255,46,217,120,134,234,240,15,92,3,165,212,227,175,148,182,145,241,115,185,247,127,0,221,157,56,11,8,162,191,103,0,0,0,0,73,69,78,
68,174,66,96,130,0,0};

const char* GuiComponent::rectButtonR3_png = (const char*) resource_GuiComponent_rectButtonR3_png;
const int GuiComponent::rectButtonR3_pngSize = 1882;

// JUCER_RESOURCE: rectButtonR4_png, 1809, "../Resources/RectButtonR-4.png"
static const unsigned char resource_GuiComponent_rectButtonR4_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,128,0,0,0,32,8,6,0,0,0,218,34,112,37,0,0,0,1,115,82,71,66,0,174,206,28,233,0,
0,0,56,101,88,73,102,77,77,0,42,0,0,0,8,0,1,135,105,0,4,0,0,0,1,0,0,0,26,0,0,0,0,0,2,160,2,0,4,0,0,0,1,0,0,0,128,160,3,0,4,0,0,0,1,0,0,0,32,0,0,0,0,27,97,185,219,0,0,6,135,73,68,65,84,120,1,237,90,11,
80,148,85,20,254,22,220,93,22,4,22,68,30,34,153,171,2,42,248,202,64,25,21,5,243,17,213,212,56,89,77,166,77,153,154,77,150,141,77,102,214,52,163,82,163,230,12,204,212,152,54,205,152,54,89,100,15,115,52,
41,210,116,52,82,113,112,84,92,149,16,80,25,22,5,1,69,222,210,57,119,247,95,246,95,22,53,103,219,93,220,255,204,220,189,239,123,207,61,231,187,231,158,123,247,87,193,66,29,29,29,51,41,185,154,130,129,
130,222,82,172,68,247,151,4,106,105,57,37,20,86,170,84,170,61,188,52,21,41,222,151,226,85,20,150,115,158,130,66,247,191,4,58,104,137,107,40,124,200,0,152,76,137,125,20,20,242,46,9,220,162,229,78,99,0,
252,74,137,233,222,181,118,101,181,22,9,236,101,0,84,82,38,66,17,137,87,74,192,196,0,224,243,64,33,47,149,128,143,151,174,91,89,182,69,2,10,0,188,28,10,10,0,20,0,120,185,4,188,124,249,94,103,1,174,55,
182,160,226,234,13,47,87,123,231,242,123,117,38,93,151,202,220,150,143,63,11,47,90,39,84,209,251,99,88,144,14,19,70,244,199,75,25,137,208,244,242,197,197,170,235,152,191,150,159,40,186,210,200,193,225,
88,187,40,213,97,27,117,47,31,36,26,250,34,37,33,26,143,141,31,4,30,155,105,207,223,23,240,203,161,98,148,87,213,195,199,71,133,64,157,6,15,199,71,98,225,19,163,160,211,154,197,96,207,151,185,167,249,
119,253,226,201,248,38,239,12,10,206,154,108,139,101,233,143,22,76,194,152,216,8,156,186,112,21,63,28,56,135,226,203,181,136,12,13,64,234,200,24,100,140,55,200,218,74,25,230,107,215,225,98,124,186,244,
17,169,200,165,177,91,0,0,186,120,38,13,141,194,210,217,99,197,98,27,155,219,80,82,81,139,13,223,30,5,43,240,229,140,17,86,33,172,125,117,50,98,194,3,173,121,78,168,125,229,134,203,182,77,107,107,59,78,
151,86,99,221,246,35,240,33,237,179,224,139,202,170,145,253,125,1,50,73,65,35,6,245,21,160,40,173,172,199,123,155,14,136,113,223,124,218,204,135,61,95,182,147,6,250,107,240,238,156,113,104,109,227,7,52,
122,58,61,94,142,173,185,167,241,229,114,254,11,197,76,220,166,178,166,1,43,191,56,136,153,201,6,188,48,109,184,0,65,86,206,49,104,53,190,152,250,208,0,169,169,136,203,77,245,248,238,15,35,110,185,241,
38,238,30,0,208,242,53,164,232,208,64,63,139,228,128,232,176,222,56,116,242,50,140,229,53,50,33,5,7,104,58,219,201,106,58,51,246,109,34,104,215,229,236,51,226,6,153,123,166,171,181,141,34,102,32,249,210,
238,103,50,68,5,99,205,43,19,97,186,118,83,228,165,31,25,95,82,161,37,86,147,213,144,40,192,79,77,64,82,117,225,237,240,169,10,4,7,104,177,224,241,145,2,104,3,105,30,35,1,48,175,160,76,6,0,6,82,246,142,
227,152,51,109,24,190,218,123,90,26,214,229,177,219,0,96,191,210,150,182,118,28,63,103,194,184,97,81,178,170,43,164,60,63,141,156,77,22,176,100,182,101,141,45,153,147,37,87,196,241,48,138,142,10,38,142,
245,129,90,44,201,202,195,140,228,129,24,27,23,137,248,7,66,97,232,167,23,193,210,77,68,77,45,237,98,23,219,150,49,104,250,234,253,109,139,186,77,151,155,234,16,213,39,192,122,244,112,195,126,4,238,252,
162,10,89,159,205,187,78,96,122,210,64,132,5,235,100,229,174,206,200,37,235,194,217,207,211,249,152,69,102,153,169,174,161,89,40,191,189,189,3,79,77,138,149,113,193,230,212,158,222,126,46,73,182,155,50,
183,230,67,163,230,63,53,65,59,186,1,13,141,173,248,224,197,20,196,145,146,153,130,200,138,100,47,73,199,238,252,18,228,30,185,128,175,127,43,18,10,101,31,33,35,197,32,252,1,209,144,126,142,157,173,196,
188,204,221,82,86,196,124,142,111,89,241,168,172,172,187,12,3,168,15,249,51,182,196,249,166,150,54,107,17,131,193,84,115,19,139,159,28,141,19,197,85,214,114,119,36,220,6,0,126,129,110,165,93,207,228,175,
85,99,22,41,62,141,206,72,62,10,108,105,157,3,31,32,64,167,182,109,130,113,195,251,89,133,206,96,218,67,138,222,253,87,9,146,226,163,132,195,199,141,121,7,207,155,145,128,185,211,19,112,238,98,141,216,
145,57,251,141,56,116,234,18,178,94,79,183,182,75,182,241,77,164,73,216,105,188,91,98,107,33,29,51,82,31,238,239,235,99,246,91,170,235,27,177,105,231,9,172,127,109,138,84,237,214,216,109,0,136,237,31,
130,101,207,38,221,113,241,188,123,67,36,95,161,155,214,105,99,30,192,131,145,193,214,218,137,116,155,88,244,73,174,112,192,98,99,66,196,141,131,143,12,118,60,249,86,192,150,129,3,123,236,203,62,219,143,
82,114,198,216,39,96,98,39,244,78,243,89,39,114,144,240,39,223,160,202,206,175,168,191,217,12,246,25,152,182,231,25,133,181,218,70,14,36,83,117,93,19,234,9,180,217,59,10,240,76,218,80,68,132,220,221,81,
35,58,59,225,71,238,78,59,97,64,79,24,130,29,47,246,200,75,43,235,4,59,231,47,93,195,118,242,182,237,137,77,59,83,155,197,179,183,175,191,151,252,16,2,246,63,116,163,177,245,236,121,254,193,253,205,31,
89,37,24,194,48,122,72,56,180,116,100,113,96,192,49,42,57,253,31,12,205,189,176,230,176,143,219,44,128,67,110,28,20,242,14,209,217,57,129,106,122,39,8,13,178,220,32,28,244,225,34,125,111,45,106,111,52,
139,218,41,100,33,126,58,120,30,27,127,46,20,215,179,1,145,65,116,6,55,96,11,121,223,225,180,227,6,71,119,126,1,215,76,215,72,174,179,39,61,89,33,86,210,157,136,29,76,158,39,103,223,89,204,74,141,21,183,
154,188,99,101,88,78,87,72,38,126,19,224,32,17,251,0,12,16,126,143,112,7,121,60,0,86,108,54,223,213,109,133,19,23,19,138,236,55,210,109,139,186,164,249,202,119,228,76,5,102,79,137,195,32,242,246,223,159,
151,130,141,59,11,241,35,1,129,143,3,126,123,72,164,221,248,241,194,84,235,249,207,131,28,53,86,98,174,157,19,200,229,171,231,79,20,15,71,156,190,29,49,48,223,121,62,25,159,19,8,182,229,22,193,79,235,
139,217,105,241,152,144,24,125,187,110,110,171,243,170,239,1,216,44,243,155,0,91,134,48,189,174,203,29,222,217,90,184,118,189,9,193,100,137,248,65,202,83,201,171,0,224,169,74,112,39,95,247,165,19,232,
78,129,246,180,185,21,0,244,52,141,57,153,95,5,0,78,22,104,79,27,78,1,64,79,211,152,147,249,101,0,116,255,7,183,147,39,83,134,243,56,9,152,24,0,133,30,199,150,194,144,171,36,80,200,215,64,126,81,201,165,
160,28,7,174,18,187,103,204,195,95,182,164,211,27,133,42,143,18,235,60,131,39,133,11,23,74,96,21,233,126,191,245,137,138,44,193,48,154,252,45,10,83,41,200,191,93,114,33,87,202,84,255,171,4,202,104,244,
223,41,108,32,229,23,241,76,255,2,184,132,235,199,232,75,210,27,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* GuiComponent::rectButtonR4_png = (const char*) resource_GuiComponent_rectButtonR4_png;
const int GuiComponent::rectButtonR4_pngSize = 1809;

// JUCER_RESOURCE: extendToggle_png, 239, "../Resources/extendToggle.png"
static const unsigned char resource_GuiComponent_extendToggle_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,12,0,0,0,12,8,6,0,0,0,86,117,92,231,0,0,0,1,115,82,71,66,0,174,206,28,233,0,
0,0,56,101,88,73,102,77,77,0,42,0,0,0,8,0,1,135,105,0,4,0,0,0,1,0,0,0,26,0,0,0,0,0,2,160,2,0,4,0,0,0,1,0,0,0,12,160,3,0,4,0,0,0,1,0,0,0,12,0,0,0,0,48,196,216,103,0,0,0,101,73,68,65,84,40,21,99,96,160,
4,252,255,255,95,28,136,147,128,152,137,40,115,128,10,21,128,24,4,46,0,177,57,65,77,64,69,48,13,32,77,255,128,120,17,16,139,225,212,8,148,68,214,0,228,130,193,71,32,89,12,196,236,24,26,129,130,216,52,
128,117,1,137,187,64,236,65,156,231,48,140,134,10,224,176,129,104,39,145,228,105,162,131,149,180,136,195,229,55,100,113,0,143,22,183,161,32,159,104,32,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* GuiComponent::extendToggle_png = (const char*) resource_GuiComponent_extendToggle_png;
const int GuiComponent::extendToggle_pngSize = 239;

// JUCER_RESOURCE: knob_png, 613, "../Resources/knob.png"
static const unsigned char resource_GuiComponent_knob_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,36,0,0,0,36,8,6,0,0,0,225,0,152,152,0,0,0,1,115,82,71,66,0,174,206,28,233,0,0,0,56,101,
88,73,102,77,77,0,42,0,0,0,8,0,1,135,105,0,4,0,0,0,1,0,0,0,26,0,0,0,0,0,2,160,2,0,4,0,0,0,1,0,0,0,36,160,3,0,4,0,0,0,1,0,0,0,36,0,0,0,0,9,198,193,198,0,0,1,219,73,68,65,84,88,9,205,152,253,109,131,48,
16,197,3,234,255,161,27,100,131,178,65,189,65,188,65,217,32,221,160,35,148,13,210,13,74,39,128,78,208,100,131,108,80,54,160,239,33,27,25,226,34,243,105,78,122,226,140,125,247,126,178,33,77,26,236,6,70,
85,85,17,74,142,144,132,152,83,49,196,184,64,165,82,134,235,87,16,4,28,207,31,0,145,80,14,13,141,28,5,114,54,34,52,19,16,155,78,141,28,13,196,36,48,52,56,67,46,113,195,34,202,37,222,7,67,161,107,4,229,
46,221,177,134,207,74,29,204,29,107,114,172,139,116,93,239,149,11,161,31,200,53,132,110,136,2,30,175,107,208,227,14,42,212,205,140,235,39,242,216,24,47,149,210,131,94,173,104,1,129,248,140,89,209,90,177,
236,128,59,154,154,22,13,16,38,8,146,152,147,43,229,39,229,93,219,53,64,24,189,173,4,96,179,105,188,107,32,16,74,172,18,182,149,43,221,227,209,145,97,167,119,232,117,37,227,62,155,132,147,33,200,34,92,
159,57,240,28,71,178,112,135,234,173,242,12,163,237,229,38,129,120,100,91,137,250,200,246,91,161,1,199,158,71,22,111,8,40,214,175,253,102,152,8,116,157,72,243,98,212,159,140,124,76,122,125,64,85,57,166,
210,168,73,240,249,33,212,248,96,220,31,147,150,115,0,209,248,48,198,221,82,83,242,200,50,203,132,175,91,89,160,254,116,252,250,34,232,248,62,134,234,119,211,119,103,194,199,176,254,13,167,95,251,212,
7,65,199,243,163,53,198,209,21,144,175,40,90,48,28,128,132,95,146,124,133,184,3,82,80,169,7,162,254,199,5,64,107,30,93,97,221,25,243,38,128,248,67,241,178,194,78,209,35,50,189,255,205,21,212,146,59,197,
222,110,48,38,37,138,150,120,166,250,159,25,19,192,150,3,138,111,223,28,187,197,30,194,230,49,234,30,154,73,40,131,134,6,107,164,171,105,224,186,80,175,67,115,158,61,13,40,230,212,19,196,224,119,171,82,
41,195,53,27,250,47,189,63,156,95,130,217,104,24,181,215,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* GuiComponent::knob_png = (const char*) resource_GuiComponent_knob_png;
const int GuiComponent::knob_pngSize = 613;


//[EndFile] You can add extra defines here...
//[/EndFile]

