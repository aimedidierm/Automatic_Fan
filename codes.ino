#include "DHT.h"

#define DHTPIN 2     // Digital pin connected to the DHT sensor
#define DHTTYPE DHT11   // DHT 11

const int relay =  3;
const int fan =  4;


DHT dht(DHTPIN, DHTTYPE);

void setup() {
  pinMode(fan, OUTPUT);
  dht.begin();
}

void loop() {
  float t = dht.readTemperature();

  if(t <25){
    digitalWrite(fan, LOW);
  }else {
    digitalWrite(fan, HIGH);
  }
}
