  // declare rgb to pins
  int redPin = 9;
  int greenPin = 10;
  int bluePin = 11;

void setup() {
  

}

// random select different light levels for each red, green, blue pin 
void loop() {
  analogWrite(redPin, random(0, 255));
  analogWrite(greenPin, random(0, 255));
  analogWrite(bluePin, random(0, 255));
  delay(1000);
}