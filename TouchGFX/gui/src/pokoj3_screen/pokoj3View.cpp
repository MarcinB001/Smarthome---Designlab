#include <gui/pokoj3_screen/pokoj3View.hpp>
#include <touchgfx/utils.hpp>
#include <iostream>
#include <random>


pokoj3View::pokoj3View()
{
    counter = 15 + (rand() % (30 - 15 + 1)); //losowa liczba z przedzialu od 15 do 30 
    Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", counter);
    textCounter.resizeToCurrentText();
}

void pokoj3View::setupScreen()
{
    pokoj3ViewBase::setupScreen();
}

void pokoj3View::tearDownScreen()
{
    pokoj3ViewBase::tearDownScreen();
}
void pokoj3View::tempUp()
{
    if (counter < 30)
    {
        counter++;
        Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", counter);
        textCounter.invalidate();
    }
    else {}
}

void pokoj3View::tempDown()
{
    if (counter <= 30 && counter > 15)
    {
        counter--;
        Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", counter);
        textCounter.invalidate();
    }
    else {}
}