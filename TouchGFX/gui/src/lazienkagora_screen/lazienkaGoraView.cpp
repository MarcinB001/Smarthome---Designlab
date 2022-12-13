#include <gui/lazienkagora_screen/lazienkaGoraView.hpp>
#include <touchgfx/utils.hpp>
#include <iostream>
#include <random>

lazienkaGoraView::lazienkaGoraView()
{
    counterW = 15 + (rand() % (45 - 15 + 1)); //losowa liczba z przedzialu od 15 do 45
    Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", counterW);
    textCounter.resizeToCurrentText();
}

void lazienkaGoraView::setupScreen()
{
    lazienkaGoraViewBase::setupScreen();
    
}

void lazienkaGoraView::tearDownScreen()
{
    lazienkaGoraViewBase::tearDownScreen();
}

void lazienkaGoraView::tempWUp()
{
    if (counterW < 45)
    {
        counterW++;
        Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", counterW);
        textCounter.invalidate();
    }
    else {}
}

void lazienkaGoraView::tempWDown()
{
    if (counterW <= 45 && counterW > 15)
    {
        counterW--;
        Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", counterW);
        textCounter.invalidate();
    }
    else {}
}
