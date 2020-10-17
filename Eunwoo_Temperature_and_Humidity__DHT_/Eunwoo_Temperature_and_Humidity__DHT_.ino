#include <DHT.h>
#include <DHT_U.h>
DHT dht(12,DHT11);  //DHTPIN, DHTTYPYPE

void setup() {
   Serial.begin(9600);
   Serial.println("DHT11 TEST");

   dht.begin();
}

void loop() {
  delay(2000);

  int h = dht.readHumidity();
  float t = dht.readTemperature();

  Serial.print("온도:");
  Serial.print(t);
  Serial.println("*C");
  Serial.print("습도:");
  Serial.print(h);
  Serial.println("%");

}
  
