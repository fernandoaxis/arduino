int var = 11;


void setup() {
  Serial.begin(9600); 

}

void loop() {
  if(var < 10){
    Serial.println(var);
    delay(1000);
    var+=10;
    Serial.println(var);
  }else{
    Serial.println("Error");
  }
}

