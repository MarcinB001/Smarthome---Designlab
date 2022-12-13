/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef LAZIENKADOLVIEWBASE_HPP
#define LAZIENKADOLVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/lazienkadol_screen/lazienkaDolPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/ToggleButton.hpp>

class lazienkaDolViewBase : public touchgfx::View<lazienkaDolPresenter>
{
public:
    lazienkaDolViewBase();
    virtual ~lazienkaDolViewBase() {}
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void tempUp()
    {
        // Override and implement this function in lazienkaDol
    }

    virtual void tempDown()
    {
        // Override and implement this function in lazienkaDol
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box background;
    touchgfx::Button goBack;
    touchgfx::Image temp;
    touchgfx::Button down;
    touchgfx::Button up;
    touchgfx::TextAreaWithOneWildcard textCounter;
    touchgfx::ToggleButton floorHeating;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTCOUNTER_SIZE = 3;
    touchgfx::Unicode::UnicodeChar textCounterBuffer[TEXTCOUNTER_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<lazienkaDolViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // LAZIENKADOLVIEWBASE_HPP
