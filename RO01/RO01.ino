#define sensor1 3

#define led1pin 8


void setup()
{
  pinMode(sensor1,INPUT) ;

  pinMode(led1pin,OUTPUT) ;


  digitalWrite(led1pin,LOW) ;

  Serial.begin(9600);
  Serial.println("program start here....");
}
void loop()
{
boolean status1 = 0;
status1 = digitalRead(sensor1) ;

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
  
  

delay(200);

}
