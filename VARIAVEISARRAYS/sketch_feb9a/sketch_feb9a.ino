int meuNumero = 70;
float meuNumFloat = 1.20;
char meuChar = "A";
String minhaString = "Oi Mundo";
boolean minhaBoolean = 0;
char meuArray[] = {'a', 'b', 'c', 'd'};
int meuArray2[] = {1,2,3};

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(meuArray[0]);
  delay(2000);
  Serial.println(meuArray2[1]);
}
