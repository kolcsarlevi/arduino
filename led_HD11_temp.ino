#include <DHT.h>

int DHTPin=2;
int DHTType=11;

DHT dht(DHTPin,DHTType);

void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
   dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
 
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();
  delay(5);
  Serial.print(temperature);
  Serial.print("°C  ");
  Serial.print(humidity);
  Serial.print("%  ");
}
