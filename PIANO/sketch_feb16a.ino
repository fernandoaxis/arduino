//Definindo frequencia
int DO = 262;
int RE = 294;
int MI = 329;
int FA = 349;
int SOL = 392;
int LA = 440;
int SI = 494;

int notas[7] = {DO, RE, MI, FA, SOL, LA, SI};

void setup() {
  // put your setup code here, to run once:
  for(int i=2; i<9; i++){
    pinMode(i, INPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=2; i<9; i++){
    while(digitalREad(i) != HIGH){
      tone(12, notas[i-2]);
    }
    noTone(12);
  }

}
