#include <gui/sypialnia_screen/sypialniaView.hpp>
#include <touchgfx/utils.hpp>
#include <iostream>
#include <random>


sypialniaView::sypialniaView()
{
    counter = 15 + (rand() % (30 - 15 + 1)); //losowa liczba z przedzialu od 15 do 30 
    Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", counter);
    textCounter.resizeToCurrentText();
}

void sypialniaView::setupScreen()
{
    sypialniaViewBase::setupScreen();
}

void sypialniaView::tearDownScreen()
{
    sypialniaViewBase::tearDownScreen();
}
void sypialniaView::tempUp()
{
    if (counter < 30)
    {
        counter++;
        Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", counter);
        textCounter.invalidate();
    }
    else {}
}

void sypialniaView::tempDown()
{
    if (counter <= 30 && counter > 15)
    {
        counter--;
        Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", counter);
        textCounter.invalidate();
    }
    else {}
}