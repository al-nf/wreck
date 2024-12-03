#include <DCMotor.h>
#include <Servo.h>
#include <iostream>
using namespace std;

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
    // digitalWrite(ledPin, digitalRead(sensor));
    cout << digitalRead(sensor) << endl;
    //digitalWrite(servo1, analogRead(joystickX));
    cout << "X POS: " << analogRead(joystickX) << endl;
    //digitalWrite(servo2, analogRead(joystickY));
    cout << "Y POS: " <<analogRead(joystickY) << endl;
}
