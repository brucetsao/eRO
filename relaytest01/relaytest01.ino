#define relaypin1 32


void setup()
{
  pinMode(relaypin1,OUTPUT) ;


  Serial.begin(9600);
  Serial.println("program start here....");
}
void loop()
{
digitalWrite(relaypin1,HIGH);
  Serial.println("Now Switch Relay 1 On");
 delay(2000);
digitalWrite(relaypin1,LOW);
  Serial.println("Now Switch Relay 1 Off");
 delay(2000);

}
