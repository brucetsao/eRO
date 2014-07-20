#define relaypin1 32
#define relaypin2 34
#define relaypin3 36
#define relaypin4 38

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
 delay(2000);
digitalWrite(relaypin1,LOW);
digitalWrite(relaypin2,LOW);
digitalWrite(relaypin3,LOW);
digitalWrite(relaypin4,LOW);
 delay(2000);

}
