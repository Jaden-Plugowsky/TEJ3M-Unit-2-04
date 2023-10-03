// Created by: Jaden Plugowsky
// Created on: Oct 2023
//
// This is an RGB LED circuit.

int pin6 = 6; // Red LED
int pin5 = 5; // Green LED
int pin4 = 4; // Blue LED

void setup()
{
    pinMode(pin6, OUTPUT);
    pinMode(pin5, OUTPUT);
    pinMode(pin4, OUTPUT);
}

void loop()
{
  	digitalWrite(pin6, HIGH); // Red only
    digitalWrite(pin5, LOW);
    digitalWrite(pin4, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(pin6, LOW);
    digitalWrite(pin5, HIGH); // Green only
    digitalWrite(pin4, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(pin6, LOW);
    digitalWrite(pin5, LOW);
  	digitalWrite(pin4, HIGH); // Blue only
  delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(pin6, HIGH); // Red on
    digitalWrite(pin5, HIGH); // Green on
    digitalWrite(pin4, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(pin6, LOW);
    digitalWrite(pin5, HIGH); // Green on
  	digitalWrite(pin4, HIGH); // Blue on
  delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(pin6, HIGH); // Red on
    digitalWrite(pin5, LOW);
  	digitalWrite(pin4, HIGH); // Blue on
  delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(pin6, HIGH); // All on
    digitalWrite(pin5, HIGH);
    digitalWrite(pin4, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
}
