#include <gui/screen1_screen/Screen1View.hpp>
#include <math.h>

Screen1View::Screen1View()
{
    tickCounter = 0;
}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

/* This function is called every time the screen is refreshed */
void Screen1View::handleTickEvent()
{
    tickCounter++;

    if (tickCounter % 2 == 0)
    {
        dynamicGraph1.addDataPoint((sinf(tickCounter * 0.07f) + 1.5f) * 30 + rand() % 20);
    }
}
