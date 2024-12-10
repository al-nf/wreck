#include <Servo.h>

#define joystickX A0
int ledPin = 3;
int joystickSW = 4;
int sensor = 5;
Servo myservo;
Servo myservo2;
int servoPin = 9;
int servoPin2 = 10;

bool canFire;

void setup() 
{

    myservo.attach(servoPin);
    myservo.write(90);
    myservo2.attach(servoPin2);
    myservo2.write(90);
    pinMode(joystickSW, INPUT);
    pinMode(ledPin, OUTPUT);
    pinMode(sensor, INPUT);
}

void loop() 
{
    // if the sensor senses an object close by, it will not allow firing
    canFire = digitalRead(sensor) == LOW ? true : false;

    // if the joystick is pushed left enough, the base servo will rotate clockwise
    if (analogRead(joystickX) < 200)
    {
        myservo.write(180);
    }
    // if the joystick is pushed right enough, the base servo will rotate anticlockwise
    else if (analogRead(joystickX) > 823)
    {
        myservo.write(0);
    }
    // otherwise, it will not move
    else
    {
        myservo.write(90);
    }

    // if the joystick is pressed down and there are no objects close by, the servo will rotate and push the plane forwards
    // otherwise, it will not move
    if (canFire)
    {
        myservo2.write(digitalRead(joystickSW) == HIGH ? 180 : 90);
    }
}

