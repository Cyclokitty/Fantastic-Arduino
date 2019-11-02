const int pwm = 3;
const int delayTime = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(pwm, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(pwm, 25);
  delay(delayTime);
  analogWrite(pwm, 50);
  delay(delayTime);
  analogWrite(pwm, 75);
  delay(delayTime);
  analogWrite(pwm, 100);
  delay(delayTime);
  analogWrite(pwm, 125);
  delay(delayTime);
  analogWrite(pwm, 150);
  delay(delayTime);
  analogWrite(pwm, 175);
  delay(delayTime);
  analogWrite(pwm, 200);
  delay(delayTime);
  analogWrite(pwm, 225);
  delay(delayTime);
  analogWrite(pwm, 250);
  delay(delayTime);
}