#include <Adafruit_Sensor.h>
#include <DHT.h>

#define DHTPIN 2

#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println(F("DHT22 Test!"));

  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(60000);

  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float f = dht.readTemperature(true);

  // test to check if dht sensor works
  if (isnan(h) || isnan(t)) {
    Serial.println(F("Failed to read from DHT sensor."));
    return;
  }

  float hif = dht.computeHeatIndex(f, h);

  float hic = dht.computeHeatIndex(t, h, false);

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print("%\t Temperature: ");
  Serial.print(t);
  Serial.print("ºC ");
  Serial.print(f);
  Serial.print("ºF\t Heat index: ");
  Serial.print(hic);
  Serial.print("ºC ");
  Serial.print(hif);
  Serial.println("ºF. ");
  Serial.println();
}