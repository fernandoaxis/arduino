void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);

}

void loop() {
  Serial.println(analogRead(A0));
  while(analogRead(A0) < 100){
    digitalWrite(2, OUTPUT);
    digitalWrite(3, OUTPUT);
    digitalWrite(4, OUTPUT);
    digitalWrite(5, OUTPUT);
    digitalWrite(6, OUTPUT);
    Serial.println(analogRead(A0));

  }
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);

}
