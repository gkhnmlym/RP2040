#include <Arduino.h>

const int ledPin1 = 14; // the pin that the LED is attached to
const int ledPin2 = 15; // the pin that the LED is attached to

// put function declarations here:

void setup()
{
  Serial.begin(9600);

  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);

  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
}

void loop()
{

  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, LOW);
  delay(100);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  delay(100);
}
