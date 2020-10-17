void setup() {
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  Serial.begin(9600);
 
  
}

void loop() {
  Serial.println(digitalRead(7));
  if(digitalRead(7) == HIGH)
  {
    digitalWrite(9, HIGH);
  }
  else if(digitalRead(8) == HIGH)
  {
    digitalWrite(10,HIGH);
  }
  else
  {
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
  }
  
}
