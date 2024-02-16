void setup() {
  // put your setup code here, to run once:

}

void loop() {
  Serial.println("Olá Mundo");
  Serial.println(minhafuncao1());
  delay(2000);
  Serial.println(minhafuncao2(45));
  delay(2000);
  minhafuncao3();
  delay(2000);

}

int minhafuncao1(){
  return 555;
}

int minhafuncao2(int valor){
  return valor;
}

void minhafuncao3(){
  digitalWrite(13, HIGH);
}