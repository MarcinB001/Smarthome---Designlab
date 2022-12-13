#include <gui/pokoj1_screen/pokoj1View.hpp>
#include <touchgfx/utils.hpp>
#include <iostream>
#include <random>


pokoj1View::pokoj1View()
{
    counter = 15 + (rand() % (30 - 15 + 1)); //losowa liczba z przedzialu od 15 do 30 
    Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", counter);
    textCounter.resizeToCurrentText();
}

void pokoj1View::setupScreen()
{
    pokoj1ViewBase::setupScreen();
}

void pokoj1View::tearDownScreen()
{
    pokoj1ViewBase::tearDownScreen();
}
void pokoj1View::tempUp()
{
    if (counter < 30)
    {
        counter++;
        Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", counter);
        textCounter.invalidate();
    }
    else {}
}

void pokoj1View::tempDown()
{
    if (counter <= 30 && counter > 15)
    {
        counter--;
        Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", counter);
        textCounter.invalidate();
    }
    else {}
}