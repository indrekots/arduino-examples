int ledPin = 13;
int commandHigh = 49;
int commandLow = 48;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  while (Serial.available() > 0) {
    int incomingByte = Serial.read();
    if (incomingByte == commandHigh) {
      digitalWrite(ledPin, HIGH);
    }
    else if (incomingByte == commandLow) {
      digitalWrite(ledPin, LOW);
    }
    else {
      Serial.print("Unknown command: ");
      Serial.println(incomingByte);
    }
  }
}
