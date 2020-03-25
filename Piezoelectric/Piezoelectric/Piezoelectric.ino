int Piezoelectric = 4; // the analog pin connected to the sensor
int ledPin = 2; // pin connected to LED
int threshold =20;
int value=0;
int ledStatus=LOW;
void setup()
{
pinMode(ledPin, OUTPUT);   // this function is used to declare led connected pin as output
Serial.begin(9600);
}
void loop()
{
value=analogRead(Piezoelectric);
if(value>=threshold){
  ledStatus = !ledStatus;
  digitalWrite(ledPin,ledStatus);
  Serial.println(value);
  delay(2002);
}
delay(10);
}
