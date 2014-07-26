#define sensor1 3 
#define sensor2 4 
#define led1pin 8
#define led2pin 9



void setup()
{
  pinMode(sensor1,INPUT) ;
  pinMode(sensor2,INPUT) ;

  pinMode(led1pin,OUTPUT) ;
  pinMode(led2pin,OUTPUT) ;

  digitalWrite(led1pin,LOW) ;
  digitalWrite(led2pin,LOW) ;


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


delay(200);

}
