// Adapted from 5_2_textLCD --> main.cpp --> Example 2

#include "mbed.h"
#include "TextLCD.h"

TextLCD lcd(D2, D3, D4, D5, D6, D7);

int main()
{
      int x=30;
      lcd.printf("108060018\n");
      while(true)
      {
            lcd.locate(5,1);
            lcd.printf("%5i",x);    //counter display
            ThisThread::sleep_for(1s);
            if(x!=0){
                x--;
            }
            
      }
}