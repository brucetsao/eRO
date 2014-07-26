#include <LiquidCrystal.h>

/* LiquidCrystal display with:
LCD 4 (RS) to arduino pin 12
LCD 5 (R/W) to ground (non-existent pin 14 okay?)
LCD 6 (E) to arduino pin 11
d4, d5, d6, d7 on arduino pins 7, 8, 9, 10
*/
LiquidCrystal lcd(24,26,28,30,32,34,36);   //ok
//LiquidCrystal lcd(10, 11, 12, 44, 42, 40, 38);

void setup()
{
  lcd.begin(20, 4);
// position cursor on line x=4,y=3
lcd.setCursor(1,1);
// Print a message to the LCD.
lcd.print("hello, world!");
}

void loop()
{ 
}

