#include <gui/screen1_screen/Screen1View.hpp>
#include <math.h>
#include <cstdlib>
#include "icm20948.h"

extern axises my_mag;
extern bool received;

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
//        dynamicGraph1.addDataPoint(sinf(tickCounter * 0.07f)*10 + 50 + rand()%10);
    	if (received == true)
    	{
    		x_waveform.addDataPoint(my_mag.x);
    		y_waveform.addDataPoint(my_mag.y);
    		z_waveform.addDataPoint(my_mag.z);
    		received = false;
    	}

    }
}
