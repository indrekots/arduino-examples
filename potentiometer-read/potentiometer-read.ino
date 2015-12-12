int inputPin = 0;
int value = 0;

void setup() {
  pinMode(inputPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  value = analogRead(inputPin);
  Serial.println(value);
}
