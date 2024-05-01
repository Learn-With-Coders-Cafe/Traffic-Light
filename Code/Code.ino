/*
 * Author: Learn With Coders Cafe
 * Date: 01 May 2024
 * Description: Arduino code for building a simple traffic light using an LED Traffic light signal module and an Arduino UNO R3.
 */

// Define pin numbers for the traffic light
int red = 13;
int yellow = 12;
int green = 11;

void setup() {
  // Set pin modes for the traffic light
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  // Red light ON for 15 seconds
  digitalWrite(red, HIGH);
  delay(15000);
  digitalWrite(red, LOW);

  // Yellow light ON for 1 second, repeated 5 times with 0.5 second intervals
  for (int i = 0; i < 5; i++) {
    digitalWrite(yellow, HIGH);
    delay(1000);
    digitalWrite(yellow, LOW);
    delay(500);
  }

  // Green light ON for 20 seconds
  digitalWrite(green, HIGH);
  delay(20000);
  digitalWrite(green, LOW);

  // Yellow light ON for 1 second, repeated 5 times with 0.5 second intervals
  for (int i = 0; i < 5; i++) {
    digitalWrite(yellow, HIGH);
    delay(1000);
    digitalWrite(yellow, LOW);
    delay(500);
  }
}
