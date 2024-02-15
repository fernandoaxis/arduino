int minhaVar;
int minhaVar2 = 20;
String minhaString = "ola";
String minhaString2 = "Tati";

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  minhaVar = 10 + 10;
  minhaVar = minhaVar + minhaVar2;
  Serial.println(minhaVar);
  delay(5000);
  Serial.println(minhaString + " " + minhaString2);
  Serial.println("Olá Mundo");
}
