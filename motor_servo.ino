#include <Servo.h>

Servo myServo; // Create a servo object to control a servo motor

int servoPin = 9; // Define the pin to which the servo is connected

void setup() {
  myServo.attach(servoPin); // Attaches the servo on pin 9 to the servo object
}

void loop() {
  // Sweep the servo from 0 to 180 degrees in steps of 1 degree
  for (int angle = 0; angle <= 180; angle++) {
    myServo.write(angle); // Set the servo position
    delay(30); // Wait for servo to reach the position
  }
  
  // Sweep the servo from 180 to 0 degrees in steps of 1 degree
  for (int angle = 180; angle >= 0; angle--) {
    myServo.write(angle); // Set the servo position
    delay(30); // Wait for servo to reach the position
  }
}
