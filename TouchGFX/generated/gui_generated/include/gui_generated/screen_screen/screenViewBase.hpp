/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREENVIEWBASE_HPP
#define SCREENVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen_screen/screenPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/containers/clock/DigitalClock.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/containers/SwipeContainer.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/canvas/Shape.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/canvas/Circle.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/containers/Slider.hpp>
#include <touchgfx/widgets/ToggleButton.hpp>
#include <touchgfx/mixins/ClickListener.hpp>

class screenViewBase : public touchgfx::View<screenPresenter>
{
public:
    screenViewBase();
    virtual ~screenViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box box1;
    touchgfx::ClickListener< touchgfx::Button > button1;
    touchgfx::DigitalClock digitalClock1;
    touchgfx::TextAreaWithOneWildcard textArea1;
    touchgfx::Box box3;
    touchgfx::SwipeContainer swipeContainer1;
    touchgfx::Container swipeContainer1Page1;
    touchgfx::Shape<3> shape1_1;
    touchgfx::PainterRGB565 shape1_1Painter;
    touchgfx::Shape<3> shape1;
    touchgfx::PainterRGB565 shape1Painter;
    touchgfx::Image image1;
    touchgfx::Circle circle1;
    touchgfx::PainterRGB565 circle1Painter;
    touchgfx::Box box2;
    touchgfx::Box box2_1;
    touchgfx::TextArea textArea2;
    touchgfx::Container swipeContainer1Page2;
    touchgfx::Shape<3> shape1_1_1;
    touchgfx::PainterRGB565 shape1_1_1Painter;
    touchgfx::Shape<3> shape1_2;
    touchgfx::PainterRGB565 shape1_2Painter;
    touchgfx::Image image1_1;
    touchgfx::Circle circle1_1;
    touchgfx::PainterRGB565 circle1_1Painter;
    touchgfx::Box box2_2;
    touchgfx::Box box2_1_1;
    touchgfx::TextArea textArea2_1;
    touchgfx::Container swipeContainer1Page3;
    touchgfx::Shape<3> shape1_1_1_1;
    touchgfx::PainterRGB565 shape1_1_1_1Painter;
    touchgfx::Shape<3> shape1_2_1;
    touchgfx::PainterRGB565 shape1_2_1Painter;
    touchgfx::Image image1_1_1;
    touchgfx::Circle circle1_1_1;
    touchgfx::PainterRGB565 circle1_1_1Painter;
    touchgfx::Box box2_2_1;
    touchgfx::Box box2_1_1_1;
    touchgfx::TextArea textArea2_1_1;
    touchgfx::SwipeContainer swipeContainer2;
    touchgfx::Container swipeContainer2Page1;
    touchgfx::Slider slider1;
    touchgfx::Slider slider1_1;
    touchgfx::Slider slider1_2;
    touchgfx::Slider slider1_3;
    touchgfx::TextArea textArea3;
    touchgfx::Shape<3> shape1_1_1_1_1;
    touchgfx::PainterRGB565 shape1_1_1_1_1Painter;
    touchgfx::Shape<3> shape1_2_1_1;
    touchgfx::PainterRGB565 shape1_2_1_1Painter;
    touchgfx::ToggleButton toggleButton1;
    touchgfx::TextArea textArea4;
    touchgfx::Container swipeContainer2Page2;
    touchgfx::Slider slider1_4;
    touchgfx::Slider slider1_1_1;
    touchgfx::Slider slider1_2_1;
    touchgfx::Slider slider1_3_1;
    touchgfx::TextArea textArea3_1;
    touchgfx::Shape<3> shape1_1_1_1_1_1;
    touchgfx::PainterRGB565 shape1_1_1_1_1_1Painter;
    touchgfx::Shape<3> shape1_2_1_1_1;
    touchgfx::PainterRGB565 shape1_2_1_1_1Painter;
    touchgfx::ToggleButton toggleButton1_1;
    touchgfx::TextArea textArea4_1;
    touchgfx::Container swipeContainer2Page3;
    touchgfx::Slider slider1_4_1;
    touchgfx::Slider slider1_1_1_1;
    touchgfx::Slider slider1_2_1_1;
    touchgfx::Slider slider1_3_1_1;
    touchgfx::TextArea textArea3_1_1;
    touchgfx::Shape<3> shape1_1_1_1_1_1_1;
    touchgfx::PainterRGB565 shape1_1_1_1_1_1_1Painter;
    touchgfx::Shape<3> shape1_2_1_1_1_1;
    touchgfx::PainterRGB565 shape1_2_1_1_1_1Painter;
    touchgfx::ToggleButton toggleButton1_1_1;
    touchgfx::TextArea textArea4_1_1;
    touchgfx::Container swipeContainer2Page4;
    touchgfx::Slider slider1_4_1_1;
    touchgfx::Slider slider1_1_1_1_1;
    touchgfx::Slider slider1_2_1_1_1;
    touchgfx::Slider slider1_3_1_1_1;
    touchgfx::TextArea textArea3_1_1_1;
    touchgfx::Shape<3> shape1_1_1_1_1_1_1_1;
    touchgfx::PainterRGB565 shape1_1_1_1_1_1_1_1Painter;
    touchgfx::Shape<3> shape1_2_1_1_1_1_1;
    touchgfx::PainterRGB565 shape1_2_1_1_1_1_1Painter;
    touchgfx::ToggleButton toggleButton1_1_1_1;
    touchgfx::TextArea textArea4_1_1_1;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTAREA1_SIZE = 10;
    touchgfx::Unicode::UnicodeChar textArea1Buffer[TEXTAREA1_SIZE];

private:

    /*
     * Canvas Buffer Size
     */
    static const uint16_t CANVAS_BUFFER_SIZE = 21360;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];
};

#endif // SCREENVIEWBASE_HPP
