int controlPin = 2;
int pinStatus = LOW;
int incomingByte = 0;

void setup() {
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    // read the incoming byte:
    incomingByte = Serial.read();

    if (incomingByte == 115) {
      digitalWrite(controlPin, HIGH);
    }
    else {
      digitalWrite(controlPin, LOW);
    }
  
    // say what you got:
    Serial.print("I received: ");
    Serial.println(incomingByte, DEC);
    delay(20);
  }
  else {
    digitalWrite(controlPin, LOW);
  }
}
