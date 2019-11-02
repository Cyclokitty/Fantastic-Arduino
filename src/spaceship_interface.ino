int switchState = 0;
int delayTime = 500;
int green = 3;
int red1 = 5;
int red2 = 4;
int btn = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(green, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(red1, OUTPUT);
  pinMode(btn, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  switchState = digitalRead(btn);

  if (switchState == LOW) {
    digitalWrite(green, HIGH);
    digitalWrite(red2, LOW);
    digitalWrite(red1, LOW);
  } else {
      digitalWrite(green, LOW);
      digitalWrite(red2, LOW);
      digitalWrite(red1, HIGH);
      delay(delayTime);
      digitalWrite(red2, HIGH);
      digitalWrite(red1, LOW);      
      delay(delayTime);
  }
}
