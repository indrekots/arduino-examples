#include <Servo.h>

Servo servo;
int const inputPin = 0;
int const servoPin = 9;
int value = 0;
int angle = 0;

void setup() {
  pinMode(inputPin, INPUT);
  servo.attach(servoPin);
  Serial.begin(9600);
}

void loop() {
  value = analogRead(inputPin);
  Serial.print("Input: ");
  Serial.print(value);

  angle = map(value, 0, 1023, 0, 179);

  Serial.print(" Angle: ");
  Serial.println(angle);

  servo.write(angle);
  delay(15);
}
