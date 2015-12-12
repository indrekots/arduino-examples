int const inputPin = 0;
int const ledPin = 9;
int value = 0;
int output = 0;

void setup() {
  pinMode(inputPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  value = analogRead(inputPin);
  Serial.print("Input: ");
  Serial.print(value);
  output = value / 4;
  Serial.print(" output: ");
  Serial.println(output);
  analogWrite(ledPin, output);
  delay(15);
}
