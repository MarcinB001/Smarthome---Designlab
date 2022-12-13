#include <gui/lazienkadol_screen/lazienkaDolView.hpp>
#include <touchgfx/utils.hpp>
#include <iostream>
#include <random>


lazienkaDolView::lazienkaDolView()
{
    counter = 15 + (rand() % (30 - 15 + 1)); //losowa liczba z przedzialu od 15 do 30 
    Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", counter);
    textCounter.resizeToCurrentText();
}

void lazienkaDolView::setupScreen()
{
    lazienkaDolViewBase::setupScreen();
}

void lazienkaDolView::tearDownScreen()
{
    lazienkaDolViewBase::tearDownScreen();
}
void lazienkaDolView::tempUp()
{
    if (counter < 30)
    {
        counter++;
        Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", counter);
        textCounter.invalidate();
    }
    else {}
}

void lazienkaDolView::tempDown()
{
    if (counter <= 30 && counter > 15)
    {
        counter--;
        Unicode::snprintf(textCounterBuffer, TEXTCOUNTER_SIZE, "%d", counter);
        textCounter.invalidate();
    }
    else {}
}