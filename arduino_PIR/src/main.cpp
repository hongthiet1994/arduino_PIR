#include <Arduino.h>

#define PIN_PIR       7
#define PIN_RELAY     2

void setup() 
{
  Serial.begin(115200);
  pinMode(PIN_PIR,INPUT);  // set pin 7 input
  pinMode(PIN_RELAY,OUTPUT); // set pin 2 output
  digitalWrite(PIN_RELAY,LOW); // turn off relay
}

void loop() 
{
  if (digitalRead(PIN_PIR) == true)
  {
    Serial.println("have motion");
    digitalWrite(PIN_RELAY,HIGH);
    delay(5000); // turn on light 5s
    digitalWrite(PIN_RELAY,LOW);
  }  
}