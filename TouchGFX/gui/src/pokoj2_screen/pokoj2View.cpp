#include <gui/pokoj2_screen/pokoj2View.hpp>
#include <touchgfx/utils.hpp>
#include <iostream>
#include <random>


pokoj2View::pokoj2View()
{
    counter = 15 + (rand() % (30 - 15 + 1)); //losowa liczba z przedzialu od 15 do 30 
    Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", counter);
    textCounter.resizeToCurrentText();
}

void pokoj2View::setupScreen()
{
    pokoj2ViewBase::setupScreen();
}

void pokoj2View::tearDownScreen()
{
    pokoj2ViewBase::tearDownScreen();
}
void pokoj2View::tempUp()
{
    if (counter < 30)
    {
        counter++;
        Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", counter);
        textCounter.invalidate();
    }
    else {}
}

void pokoj2View::tempDown()
{
    if (counter <= 30 && counter > 15)
    {
        counter--;
        Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", counter);
        textCounter.invalidate();
    }
    else {}
}