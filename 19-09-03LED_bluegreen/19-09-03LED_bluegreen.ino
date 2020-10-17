
void setup() {
  pinMode(9, OUTPUT);     //R
  pinMode(10, OUTPUT);    //G
  pinMode(11, OUTPUT);    //B
}

void loop() {
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  
}
