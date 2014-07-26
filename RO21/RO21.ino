#include <LiquidCrystal.h>

#define sensor1 3 
#define sensor2 4 
#define led1pin 8
#define led2pin 9
#define led3pin 10
#define Gate 5
#define Motor 6

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
  pinMode(sensor1,INPUT) ;
  pinMode(sensor2,INPUT) ;

  pinMode(led1pin,OUTPUT) ;
  pinMode(led2pin,OUTPUT) ;
  pinMode(led3pin,OUTPUT) ;

  pinMode(Gate,OUTPUT) ;
  pinMode(Motor,OUTPUT) ;


  digitalWrite(led1pin,LOW) ;
  digitalWrite(led2pin,LOW) ;
  digitalWrite(led3pin,LOW) ;

  digitalWrite(Gate,LOW) ;
  digitalWrite(Motor,LOW) ;

  lcd.begin(20, 4);
// position cursor on line x=4,y=3
  PowonLedDisplay();
  Serial.begin(9600);
  Serial.println("program start here....");
}
void loop()
{
boolean status1 = 0;
boolean status2 = 0;
status1 = digitalRead(sensor1) ;
status2 = digitalRead(sensor2) ;
if (status1 == HIGH)
  {
    Serial.println("The water is coming");
     digitalWrite(led1pin,HIGH) ;
  }
  else
  {
    Serial.println("The water is blocked");
     digitalWrite(led1pin,LOW) ;
  }
  
  if (status2 == LOW)
  {
    Serial.println("The RO water is Full");
     digitalWrite(led2pin,HIGH) ;
  }
   else
  {
    Serial.println("The RO water is not Full");
     digitalWrite(led2pin,LOW) ;

  }

  if ((status1 == HIGH) && (status2 == HIGH) )
  {
    Serial.println("The making-water of the RO Machin is Starting");
     digitalWrite(led3pin,HIGH) ;
      digitalWrite(Gate,HIGH) ;
      digitalWrite(Motor,HIGH) ;
  }
   else
  {
    Serial.println("The making-water of the RO Machin is stopping");
     digitalWrite(led3pin,LOW) ;
       digitalWrite(Gate,LOW) ;
      digitalWrite(Motor,LOW) ;
  }

StatusDisplay(status1,status2) ;

delay(200);

}

void PowonLedDisplay()
{
    lcd.setCursor(2,0);   //lcd.setCursor(Col,Row);
// Print a message to the LCD .
lcd.print("System Power ON");

}
  
void StatusDisplay(boolean st1, boolean st2)
{
  if (st1)
  {  
      lcd.setCursor(2,1);   //lcd.setCursor(Col,Row);
  // Print a message to the LCD .
      lcd.print("Water Supply OK      ");
      Serial.println("Water Supply OK      ");
    
  }
  else
  {
      lcd.setCursor(2,1);   //lcd.setCursor(Col,Row);
  // Print a message to the LCD .
      lcd.print("No Water Coming      ");
      Serial.println("No Water Coming      ");
  }
  
  if (st2)
  {  
      lcd.setCursor(2,2);   //lcd.setCursor(Col,Row);
  // Print a message to the LCD .
    lcd.print("Ready for Making Water");
    Serial.println("Ready for Making Water");
  }
  else
  {
      lcd.setCursor(2,2);   //lcd.setCursor(Col,Row);
  // Print a message to the LCD .
    lcd.print("Water  is fulled     ");
    Serial.println("Water  is fulled     ");
  }
  
  if (st1  && st2)
  {  
      lcd.setCursor(2,3);   //lcd.setCursor(Col,Row);
  // Print a message to the LCD .
    lcd.print("Now Making Water");
    Serial.println("Now Making Water");
  }
  else
  {
      lcd.setCursor(2,3);   //lcd.setCursor(Col,Row);
  // Print a message to the LCD .
    lcd.print("Stop Making Water");
    Serial.println("Stop Making Water");
  }

}
    
  
