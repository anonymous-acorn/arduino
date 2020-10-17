#include <Servo.h>
Servo sv;
void setup() {
  sv.attach(3);
  pinMode(8,INPUT);
  pinMode(9,OUTPUT);
 
  
}
void loop() {
  if(digitalRead(8) == HIGH)
  
  {
    sv.write(0);
  }
  else
  {
  sv.write(180);
  }
 
 }
