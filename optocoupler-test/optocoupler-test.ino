int controlPin = 2;
int pinStatus = LOW;

void setup() {
  pinMode(2, OUTPUT);
}

void loop() {
  if (pinStatus == LOW) {
    pinStatus = HIGH; 
  }
  else {
    pinStatus = LOW;
  }

  digitalWrite(controlPin, pinStatus);
  delay(500);
}
