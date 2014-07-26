#define sensor1 3 
#define sensor2 4 
#define led1pin 8
#define led2pin 9
#define led3pin 10
#define Gate 5
#define Motor 6


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



delay(200);

}
