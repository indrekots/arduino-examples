int analogPin = 5;
int ledPin = 3;
int brightness = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
}

void loop() {
  brightness = analogRead(analogPin);
  Serial.println(brightness);

  if (brightness < 500) {
    digitalWrite(ledPin, HIGH);  
  }
  else {
    digitalWrite(ledPin, LOW);
  }
}
