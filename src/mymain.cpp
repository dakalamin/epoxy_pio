#include <Arduino.h>

int i = 0;

void setup() {
  Serial.println("***START***");
}

void loop() {
  Serial.print("Hello ");
  Serial.println(i);
  
  i++;
  delay(500);
}
