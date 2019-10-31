const int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
	Serial.begin(9600);
	pinMode(ledPin, OUTPUT);

	countDown(5);
}

void loop() {
// put your main code here, to run repeatedly:
	static int delayPeriod = 100;
	static int countDirection = 1;
	static int runTime = 1;

	while (runTime <= 25) { 
		digitalWrite(ledPin, HIGH);
		delay(delayPeriod);
		digitalWrite(ledPin, LOW);
		delay(delayPeriod);

		countDirection = checkDirChange(delayPeriod, countDirection);

		delayPeriod += 100 * countDirection;
		runTime++;
		Serial.print("New Wait Time: ");
		Serial.print(delayPeriod);
		Serial.print(" Run time: ");
		Serial.println(runTime);
	}

	if (runTime >= 25) {
		Serial.println("The End!");
		// seriously cludgey looping break:
		while(1) {};
	}

}

// functions
int checkDirChange(int delayPeriod, int countDirection) {
	if((delayPeriod == 1000) || (delayPeriod == 0)) {
		countDirection *= -1;

		if (countDirection < 0) {
			Serial.println("Going Down");      
		} else {
			Serial.println("Going Up");
		}
	}

	return countDirection;
}

void countDown(int max) {
	for (int i = max; i > 0; i--) {
		Serial.println(i);
		delay(1000);
	}
	Serial.println("Go!");
}
