#define relaypin1 8
#define relaypin2 9
#define relaypin3 10
#define relaypin4 11

void setup()
{
  pinMode(relaypin1,OUTPUT) ;
  pinMode(relaypin2,OUTPUT) ;
  pinMode(relaypin3,OUTPUT) ;
  pinMode(relaypin4,OUTPUT) ;

  Serial.begin(9600);
  Serial.println("program start here....");
}
void loop()
{
digitalWrite(relaypin1,HIGH);
digitalWrite(relaypin2,HIGH);
digitalWrite(relaypin3,HIGH);
digitalWrite(relaypin4,HIGH);
Serial.println("all open");
 delay(2000);
digitalWrite(relaypin1,LOW);
digitalWrite(relaypin2,LOW);
digitalWrite(relaypin3,LOW);
digitalWrite(relaypin4,LOW);
 Serial.println("all close");
delay(2000);

}
