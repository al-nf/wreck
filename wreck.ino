#include <DCMotor.h>
#include <Servo.h>

#define joystickX A0
#define joystickY A1

int trackerButton = 3;
int joystickSW = 4;
bool track = false;
int servo1 = 9;
int servo2 = 10;
int ledPin = 5;

void setup() {
    pinMode(trackerButton, INPUT);
    pinMode(fireButton, INPUT);
    pinMode(joystickX, INPUT);
    pinMode(joystickSW, INPUT);
}

void loop() {
    if (digitalInput(trackerButton) == HIGH)
    {
            track = !track;
    }
    
    if (track)
    {
        digitalWrite(ledPin, HIGH);
    }
    else
    {
        digitalWrite(ledPin, LOW);
    }

    digitalWrite(servo1, analogRead(joystickX));
    digitalWrite(servo2, analogRead(joystickY));
}
