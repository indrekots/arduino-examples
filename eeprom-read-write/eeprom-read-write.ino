#include <EEPROM.h>
String command;
int addr = 0;
int value = 0;

void setup() {
  Serial.begin(9600);

}

void loop() {
  if (Serial.available() > 0) {
    command = Serial.readStringUntil(' ');
    
    if (isValidCommand()) {
      readParams();

      if (command == "read") {
        Serial.println(EEPROM.read(addr));
      }
      else {
        EEPROM.write(addr, value);
      }
    } 
  }
}

bool isValidCommand() {
  return command == "read" || command == "write";
}

void readParams() {
  addr = Serial.parseInt();
  if (command == "write") {
    value = Serial.parseInt();  
  }
}

