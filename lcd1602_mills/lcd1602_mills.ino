#include <LiquidCrystal.h>

/* LiquidCrystal display with:

LiquidCrystal(rs, enable, d4, d5, d6, d7) 
LiquidCrystal(rs, rw, enable, d4, d5, d6, d7) 
LiquidCrystal(rs, enable, d0, d1, d2, d3, d4, d5, d6, d7) 
LiquidCrystal(rs, rw, enable, d0, d1, d2, d3, d4, d5, d6, d7) 
R/W Pin Read = LOW / Write = HIGH   // if No pin connect RW , please leave R/W Pin for Low State

Parameters
*/
LiquidCrystal lcd(5,6,7,38,40,42,44);   //ok

void setup()
{
  Serial.begin(9600);
  Serial.println("start LCM1604");
lcd.begin(16, 2);
// 設定 LCD 的行列數目 (16 x 2)  16　行2　列
 lcd.setCursor(0,0);
  // 列印 "Hello World" 訊息到 LCD 上 
lcd.print("hello, world!"); 
  Serial.println("hello, world!");
}

void loop()
{ 
// 將游標設到 　第一行, 　第二列 
// (注意: 　第二列第五行，因為是從 0 開始數起): 
lcd.setCursor(5, 2); 
// 列印 Arduino 重開之後經過的秒數 
lcd.print(millis()/1000); 
 Serial.println(millis()/1000);
delay(200);
}


