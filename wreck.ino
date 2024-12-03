#include <DCMotor.h>
#include <Servo.h>
#include <ArduinoSTL.h>
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
    Serial.begin(9600);
}

void loop() {
    printf("sensor: %d", digitalRead(sensor));
    // digitalWrite(ledPin, digitalRead(sensor));
    printf("X Pos: %d", digitalRead(joystickX));
    //digitalWrite(servo1, analogRead(joystickX));
    printf("Y Pos: %d", digitalRead(joystickY));
    //digitalWrite(servo2, analogRead(joystickY));
}
