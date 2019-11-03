#include <DHT.h>
#include <DHT_U.h>

#include <Adafruit_Sensor.h>

#define DHTPIN 2
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

int red = 13;
int blue = 12;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("DHT22 Test!");

  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);

  dht.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
  float temp = dht.readTemperature();

  if (isnan(temp)) {
    Serial.println("Failed to read from the DHT sensor.");
    return;
  }
  Serial.println();
  Serial.print("Temp: ");
  Serial.print(temp);
  Serial.println("ºC");

  if (temp > 22) {
    Serial.println("It's warm!");
    digitalWrite(red, HIGH);
    digitalWrite(blue, LOW);
  } else {
    Serial.println("It's cool!");
    digitalWrite(blue, HIGH);
    digitalWrite(red, LOW);
  }

  delay(1000);

}