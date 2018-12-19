/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.3.2

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "PluginEditor.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
TemplateEditor::TemplateEditor ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    slider.reset (new Slider ("new slider"));
    addAndMakeVisible (slider.get());
    slider->setRange (0, 10, 0);
    slider->setSliderStyle (Slider::LinearHorizontal);
    slider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    slider->addListener (this);

    slider->setBounds (16, 16, 150, 24);

    slider2.reset (new Slider ("new slider"));
    addAndMakeVisible (slider2.get());
    slider2->setRange (0, 10, 0);
    slider2->setSliderStyle (Slider::LinearHorizontal);
    slider2->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    slider2->addListener (this);

    slider2->setBounds (16, 48, 150, 24);

    slider3.reset (new Slider ("new slider"));
    addAndMakeVisible (slider3.get());
    slider3->setRange (0, 10, 0);
    slider3->setSliderStyle (Slider::LinearHorizontal);
    slider3->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    slider3->addListener (this);

    slider3->setBounds (16, 112, 150, 24);

    slider4.reset (new Slider ("new slider"));
    addAndMakeVisible (slider4.get());
    slider4->setRange (0, 10, 0);
    slider4->setSliderStyle (Slider::LinearHorizontal);
    slider4->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    slider4->addListener (this);

    slider4->setBounds (16, 80, 150, 24);

    imageButton.reset (new ImageButton ("new button"));
    addAndMakeVisible (imageButton.get());
    imageButton->addListener (this);

    imageButton->setImages (false, true, true,
                            Image(), 1.000f, Colour (0x00000000),
                            Image(), 1.000f, Colour (0x00000000),
                            Image(), 1.000f, Colour (0x00000000));
    imageButton->setBounds (184, 56, 150, 24);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (350, 200);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

TemplateEditor::~TemplateEditor()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    slider = nullptr;
    slider2 = nullptr;
    slider3 = nullptr;
    slider4 = nullptr;
    imageButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void TemplateEditor::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

    {
        int x = 0, y = 0, width = 352, height = 200;
        Colour fillColour1 = Colour (0xffaadae2), fillColour2 = Colour (0xff877acd);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setGradientFill (ColourGradient (fillColour1,
                                       50.0f - 0.0f + x,
                                       50.0f - 0.0f + y,
                                       fillColour2,
                                       100.0f - 0.0f + x,
                                       100.0f - 0.0f + y,
                                       false));
        g.fillRect (x, y, width, height);
    }

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void TemplateEditor::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void TemplateEditor::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == slider.get())
    {
        //[UserSliderCode_slider] -- add your slider handling code here..
        //[/UserSliderCode_slider]
    }
    else if (sliderThatWasMoved == slider2.get())
    {
        //[UserSliderCode_slider2] -- add your slider handling code here..
        //[/UserSliderCode_slider2]
    }
    else if (sliderThatWasMoved == slider3.get())
    {
        //[UserSliderCode_slider3] -- add your slider handling code here..
        //[/UserSliderCode_slider3]
    }
    else if (sliderThatWasMoved == slider4.get())
    {
        //[UserSliderCode_slider4] -- add your slider handling code here..
        //[/UserSliderCode_slider4]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void TemplateEditor::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == imageButton.get())
    {
        //[UserButtonCode_imageButton] -- add your button handler code here..
        //[/UserButtonCode_imageButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="TemplateEditor" componentName=""
                 parentClasses="public TemplateComponent" constructorParams=""
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330" fixedSize="1" initialWidth="350" initialHeight="200">
  <BACKGROUND backgroundColour="ff323e44">
    <RECT pos="0 0 352 200" fill="linear: 50 50, 100 100, 0=ffaadae2, 1=ff877acd"
          hasStroke="0"/>
  </BACKGROUND>
  <SLIDER name="new slider" id="9d97467aacd27e2a" memberName="slider" virtualName=""
          explicitFocusOrder="0" pos="16 16 150 24" min="0.00000000000000000000"
          max="10.00000000000000000000" int="0.00000000000000000000" style="LinearHorizontal"
          textBoxPos="TextBoxLeft" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <SLIDER name="new slider" id="862f007a35e727df" memberName="slider2"
          virtualName="" explicitFocusOrder="0" pos="16 48 150 24" min="0.00000000000000000000"
          max="10.00000000000000000000" int="0.00000000000000000000" style="LinearHorizontal"
          textBoxPos="TextBoxLeft" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <SLIDER name="new slider" id="ef45c1a0bd6fe729" memberName="slider3"
          virtualName="" explicitFocusOrder="0" pos="16 112 150 24" min="0.00000000000000000000"
          max="10.00000000000000000000" int="0.00000000000000000000" style="LinearHorizontal"
          textBoxPos="TextBoxLeft" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <SLIDER name="new slider" id="4a496df36d6a69fa" memberName="slider4"
          virtualName="" explicitFocusOrder="0" pos="16 80 150 24" min="0.00000000000000000000"
          max="10.00000000000000000000" int="0.00000000000000000000" style="LinearHorizontal"
          textBoxPos="TextBoxLeft" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <IMAGEBUTTON name="new button" id="aeee077d7836da40" memberName="imageButton"
               virtualName="" explicitFocusOrder="0" pos="184 56 150 24" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="" opacityNormal="1.00000000000000000000" colourNormal="0"
               resourceOver="" opacityOver="1.00000000000000000000" colourOver="0"
               resourceDown="" opacityDown="1.00000000000000000000" colourDown="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
