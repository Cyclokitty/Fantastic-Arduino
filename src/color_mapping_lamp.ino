const int green = 9;
const int red = 11;
const int blue = 10;

const int redSensor = A0;
const int greenSensor = A1;
const int blueSensor = A2;

int redValue = 0;
int greenValue = 0;
int blueValue = 0;

int redSensorValue = 0;
int greenSensorValue = 0;
int blueSensorValue = 0;

void setup() {
  Serial.begin(9600);

  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);

}

void loop() {
  redSensorValue = analogRead(redSensor);
  delay(5);
  greenSensorValue = analogRead(greenSensor);
  delay(5);
  blueSensorValue = analogRead(blueSensor);

  Serial.print("Raw Sensor Values\t Red: ");
  Serial.print(redSensorValue);
  Serial.print("\t Green: ");
  Serial.print(greenSensorValue);
  Serial.print("\t Blue: ");
  Serial.println(blueSensorValue);

  redValue = redSensorValue / 4;
  greenValue = greenSensorValue / 4;
  blueValue = blueSensorValue / 4;

  Serial.print("Mapped Sensor Values \t Red: ");
  Serial.print(redValue);
  Serial.print("\t Green: ");
  Serial.print(greenValue);
  Serial.print("\t Blue: ");
  Serial.println(blueValue);

  analogWrite(red, redValue);
  analogWrite(green, greenValue);
  analogWrite(blue, blueValue);

  delay(10000);
}