int ledPin = 13;
int incomingByte = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  while (Serial.available() > 0) {
    incomingByte = Serial.read();
    if (incomingByte == 49) {
      digitalWrite(ledPin, HIGH);
    }
    else if (incomingByte == 48) {
      digitalWrite(ledPin, LOW);
    }
    else {
      Serial.println("Unknown command: " + incomingByte);
    }
  }
}
