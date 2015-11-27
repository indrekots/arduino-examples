int buttonPin = 2;
int redLed1 = 3;
int redLed2 = 4;
int greenLed = 5;
int redDelay = 500;


void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(redLed1, OUTPUT);
  pinMode(redLed2, OUTPUT);
  pinMode(greenLed, OUTPUT);

  Serial.begin(9600);

}

void loop() {
  int buttonPressed = digitalRead(buttonPin);
  Serial.println(buttonPressed);

  if (buttonPressed == LOW) {
    digitalWrite(redLed1, LOW);
    digitalWrite(redLed2, LOW);
    digitalWrite(greenLed, HIGH);
  }
  else {
    digitalWrite(greenLed, LOW);
    digitalWrite(redLed1, HIGH);
    digitalWrite(redLed2, LOW);
    delay(redDelay);
    digitalWrite(redLed1, LOW);
    digitalWrite(redLed2, HIGH);
    delay(redDelay);
  }

}
