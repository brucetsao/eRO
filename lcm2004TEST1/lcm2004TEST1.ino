#include <LiquidCrystal.h>

/* LiquidCrystal display with:

LiquidCrystal(rs, enable, d4, d5, d6, d7) 
LiquidCrystal(rs, rw, enable, d4, d5, d6, d7) 
LiquidCrystal(rs, enable, d0, d1, d2, d3, d4, d5, d6, d7) 
LiquidCrystal(rs, rw, enable, d0, d1, d2, d3, d4, d5, d6, d7) 
R/W Pin Read = LOW / Write = HIGH   // if No pin connect RW , please leave R/W Pin for Low State

Parameters
*/
//LiquidCrystal lcd(10,11,12,30, 32, 34,36,38,40,42,44);  //ok
//LiquidCrystal lcd(10,12,38,40,42,44);  //ok
LiquidCrystal lcd(5,6,7,38,40,42,44);   //ok
//LiquidCrystal lcd(10,11,12,30, 32, 34,36,38,40,42,44);  //ok
//  
void setup()
{
  Serial.begin(9600);
  Serial.println("start LCM2004");
//  pinMode(11,OUTPUT);
//  digitalWrite(11,LOW);
lcd.begin(20, 4);
// 設定 LCD 的行列數目 (4 x 20)
 lcd.setCursor(0,0);
  // 列印 "Hello World" 訊息到 LCD 上 
lcd.print("hello, world!"); 
  Serial.println("hello, world!");
}

void loop()
{ 
// 將游標設到 column 0, line 1 
// (注意: line 1 是第二行(row)，因為是從 0 開始數起): 
lcd.setCursor(0, 1); 
// 列印 Arduino 重開之後經過的秒數 
lcd.print(millis()/1000); 
 Serial.println(millis()/1000);
delay(200);
}
