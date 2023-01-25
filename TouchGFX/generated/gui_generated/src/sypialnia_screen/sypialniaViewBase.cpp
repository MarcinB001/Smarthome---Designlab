/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/sypialnia_screen/sypialniaViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

sypialniaViewBase::sypialniaViewBase() :
    buttonCallback(this, &sypialniaViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 800, 480);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    background.setPosition(0, 0, 800, 480);
    background.setColor(touchgfx::Color::getColorFromRGB(38, 34, 34));

    goBack.setXY(0, 380);
    goBack.setBitmaps(touchgfx::Bitmap(BITMAP_GOBACK_ID), touchgfx::Bitmap(BITMAP_GOBACK_ID));
    goBack.setAction(buttonCallback);

    lamp.setXY(218, -9);
    lamp.setBitmaps(touchgfx::Bitmap(BITMAP_LAMPY100NA100_ID), touchgfx::Bitmap(BITMAP_LAMPYZASWIECONE100NA100_ID));
    lamp.setAction(buttonCallback);

    temp.setXY(665, 141);
    temp.setBitmap(touchgfx::Bitmap(BITMAP_TEMPERATURA100NA100_ID));

    down.setXY(665, 294);
    down.setBitmaps(touchgfx::Bitmap(BITMAP_DOWN_ID), touchgfx::Bitmap(BITMAP_DOWN_ID));
    down.setAction(buttonCallback);

    up.setXY(665, 41);
    up.setBitmaps(touchgfx::Bitmap(BITMAP_UP_ID), touchgfx::Bitmap(BITMAP_UP_ID));
    up.setAction(buttonCallback);

    textCounter.setXY(707, 252);
    textCounter.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textCounter.setLinespacing(0);
    textCounterBuffer[0] = 0;
    textCounter.setWildcard(textCounterBuffer);
    textCounter.resizeToCurrentText();
    textCounter.setTypedText(touchgfx::TypedText(T___SINGLEUSE_JY7X));

    upR.setXY(461, 41);
    upR.setBitmaps(touchgfx::Bitmap(BITMAP_UP_ID), touchgfx::Bitmap(BITMAP_UP_ID));

    downR.setXY(461, 294);
    downR.setBitmaps(touchgfx::Bitmap(BITMAP_DOWN_ID), touchgfx::Bitmap(BITMAP_DOWN_ID));

    rollerBinds.setXY(461, 167);
    rollerBinds.setBitmap(touchgfx::Bitmap(BITMAP_ROLETY100N100_ID));

    add(__background);
    add(background);
    add(goBack);
    add(lamp);
    add(temp);
    add(down);
    add(up);
    add(textCounter);
    add(upR);
    add(downR);
    add(rollerBinds);
}

void sypialniaViewBase::setupScreen()
{

}

void sypialniaViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &goBack)
    {
        //GoBack
        //When goBack clicked change screen to Pietro
        //Go to Pietro with no screen transition
        application().gotoPietroScreenNoTransition();
    }
    else if (&src == &lamp)
    {
        //oswietlenie
        //When lamp clicked call virtual function
        //Call oswietlenieSypButtonClicked
        oswietlenieSypButtonClicked();
    }
    else if (&src == &down)
    {
        //tempDown
        //When down clicked call virtual function
        //Call tempDown
        tempDown();
    }
    else if (&src == &up)
    {
        //tempUp
        //When up clicked call virtual function
        //Call tempUp
        tempUp();
    }
}
