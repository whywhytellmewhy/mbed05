//Copy from main.cpp in 5_4_uLCD_demo

#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2);

int main()
{
    uLCD.background_color(0xffffff);
    uLCD.color(BLUE);
    uLCD.textbackground_color(0xffffff);
    uLCD.printf("\nMy student ID:\n");
    uLCD.printf("\n  108060018");
    uLCD.text_width(4);
    uLCD.text_height(4);
    uLCD.color(GREEN);
    for (int i=30; i>=0; --i) {
        uLCD.locate(1,2);
        uLCD.printf("%2d",i);
        ThisThread::sleep_for(1s);
    }
}