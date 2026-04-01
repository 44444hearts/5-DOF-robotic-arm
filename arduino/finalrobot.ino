#include <Servo.h>
#include "ControlledServo.h"

// Raw Servo objects
Servo baseServo, shoulderServo, elbowServo, wristServo, gripperServo;

// ControlledServo wrappers
ControlledServo base, shoulder, elbow, wrist, gripper;

// Command input
char command;

// Movement rate (ms per degree)
const int angleRate = 15;

void setup() {
  Serial.begin(9600);

  // Attach raw servos to pins
  baseServo.attach(9);
  shoulderServo.attach(10);
  elbowServo.attach(11);
  wristServo.attach(12);
  gripperServo.attach(13);

  // Link ControlledServo to raw Servo
  base.setServo(baseServo);
  shoulder.setServo(shoulderServo);
  elbow.setServo(elbowServo);
  wrist.setServo(wristServo);
  gripper.setServo(gripperServo);

  // Set movement rates
  base.setRate(angleRate);
  shoulder.setRate(angleRate);
  elbow.setRate(angleRate);
  wrist.setRate(angleRate);
  gripper.setRate(angleRate / 2);

  // Move to neutral position
  base.moveTo(90);
  shoulder.moveTo(135);
  elbow.moveTo(170);
  wrist.moveTo(0);
  gripper.moveTo(30);
}

void loop() {
  // Update all servos continuously
  base.update();
  shoulder.update();
  elbow.update();
  wrist.update();
  gripper.update();

  // Handle serial commands
  if (Serial.available() > 0) {
    command = Serial.read();

    switch (command) {
      case 'L':
        base.moveTo(45);
        break;
      case 'R':
        base.moveTo(135);
        break;
      case 'D':
        shoulder.moveTo(90);
        break;
      case 'U':
        shoulder.moveTo(120);
        elbow.moveTo(160);
        break;
      case 'F':
        elbow.moveTo(135);
        break;
      case 'B':
        elbow.moveTo(165);
        break;
      case 'A':
        wrist.moveTo(170);
        break;
      case 'Z':
        wrist.moveTo(90);
        break;
      case 'O':
        gripper.moveTo(170);
        break;
      case 'C':
        gripper.moveTo(30);
        break;
    }
  }
}