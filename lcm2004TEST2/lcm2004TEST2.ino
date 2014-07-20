#include <LiquidCrystal.h>

/* LiquidCrystal display with:
LCD 4 (RS) to arduino pin 12
LCD 5 (R/W) to ground (non-existent pin 14 okay?)
LCD 6 (E) to arduino pin 11
d4, d5, d6, d7 on arduino pins 7, 8, 9, 10
*/
LiquidCrystal lcd(5,6,7,38,40,42,44);   //ok
//LiquidCrystal lcd(10, 11, 12, 44, 42, 40, 38);

void setup()
{
  lcd.begin(20, 4);
// position cursor on line x=4,y=3
lcd.setCursor(3,2);
// Print a message to the LCD.
lcd.print("hello, world!");
}

void loop()
{ 
}

