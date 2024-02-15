int sensorPin = A0;
int ledPin = 9;
int sensorValue = 0;
  
void setup()
{
 Serial.begin(9600) ;
 pinMode(ledPin, OUTPUT); 
}

void loop()
{
	sensorValue = analogRead(sensorPin);
	Serial.print("sensor = ");
    Serial.println(sensorValue);
  
  if(sensorValue < 100){
	digitalWrite(ledPin,HIGH);  
  }else{
    digitalWrite(ledPin,LOW);
  }
  delay(2);
}