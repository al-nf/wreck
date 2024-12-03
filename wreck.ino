#include <DCMotor.h>
#include <Servo.h>
#include <iostream>
using namespace std;

#define joystickX A0
#define joystickY A1

int joystickSW = 4;
int servo1 = 9;
int servo2 = 10;
int motor1 = 7;
int motor2 = 8;
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
    pinMode(motor1, OUTPUT);
    pinMode(motor2, OUTPUT);
}

void loop() {
    cout << digitalRead(sensor) << endl;
    // digitalWrite(ledPin, digitalRead(sensor));
    cout << "X POS: " << analogRead(joystickX) << endl;
    //digitalWrite(servo1, analogRead(joystickX));
    cout << "Y POS: " <<analogRead(joystickY) << endl;
    //digitalWrite(servo2, analogRead(joystickY));
}
