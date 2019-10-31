const int red = 13;

void setup() {
  // put your setup code here, to run once:
    pinMode(red, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // this is as basic a led sketch can be
  // turns on led
    digitalWrite(red, HIGH);
  // keeps it on 1/2 second
    delay(500);
  // turns off led
    digitalWrite(red, LOW);
  // keeps it off 1/2 second
    delay(500);

  // this will run until there is no more power available
}