int var = 10;


void setup() {
  Serial.begin(9600); 

}

void loop() {
  if(var == 10 || var >= 11){
    Serial.println("variable is 10 or 11");
  }else{
    Serial.println("Error");
  }
}
