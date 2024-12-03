#include <DCMotor.h>
#include <Servo.h>

#define joystickX A0
#define joystickY A1

int joystickSW = 4;
int servo1 = 9;
int servo2 = 10;
int ledPin = 6;
int sensor = 5;

void setup() {
    pinMode(joystickX, INPUT);
    pinMode(joystickY, INPUT);
    pinMode(joystickSW, INPUT);
    pinMode(sensor, INPUT);
    pinMode(ledPin, OUTPUT);
    pinMode(servo1, OUTPUT);
    pinMode(servo2, OUTPUT);
}

void loop() {
    digitalWrite(ledPin, digitalRead(sensor));
    digitalWrite(servo1, analogRead(joystickX));
    digitalWrite(servo2, analogRead(joystickY));
}
