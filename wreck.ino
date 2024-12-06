#include <Servo.h>
#include <ArduinoSTL.h>
using namespace std;

#define joystickX A1
#define temp A0

int joystickSW = 4;
int servo1 = 9;
int servo2 = 10;
int ledPin = 6;
int sensor = 5;

void setup() {
    pinMode(joystickX, INPUT);
    pinMode(joystickSW, INPUT);
    pinMode(temp, INPUT);
    pinMode(sensor, INPUT);
    pinMode(ledPin, OUTPUT);
    pinMode(servo1, OUTPUT);
    pinMode(servo2, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    printf("sensor: %d", digitalRead(sensor));
    // digitalWrite(ledPin, digitalRead(sensor));
    printf("X Pos: %d", digitalRead(joystickX));
    //digitalWrite(servo1, analogRead(joystickX));
    printf("Switch state: %d", digitalRead(joystickSW));
}
