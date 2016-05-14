int FORWARDS = 5;
int BACKWARDS = 0;
int AOUT2 = 4;
int AOUT1 = 13;

void setup() {
  pinMode(FORWARDS, OUTPUT);
  pinMode(BACKWARDS, OUTPUT);
  pinMode(AOUT2, OUTPUT);
  pinMode(AOUT1, OUTPUT);
}

void loop() {
  digitalWrite(FORWARDS, HIGH);
  delay(2000);
  digitalWrite(FORWARDS, LOW);
  digitalWrite(BACKWARDS, HIGH);
  delay(2000);
  digitalWrite(BACKWARDS, LOW);
  digitalWrite(AOUT2, HIGH);
  delay(2000);
  digitalWrite(AOUT2, LOW);
  digitalWrite(AOUT1, HIGH);
  delay(2000);
  digitalWrite(AOUT1, LOW);
}
