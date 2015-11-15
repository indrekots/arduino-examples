int ledPin = 13;
int pinHighTime = 500;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  blinkNTimes(5, 500);
  blinkNTimes(5, 2000);  
}

void blinkNTimes(int n, int interval) {
  for (int i = 0; i < n; i++) {
    blink(interval);
  }
}

void blink(int interval) {
  digitalWrite(ledPin, HIGH);
  delay(pinHighTime);
  digitalWrite(ledPin, LOW);
  delay(interval);
}

