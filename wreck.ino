#include <Servo.h>

#define joystickX A0
int joystickSW = 4;
Servo myservo;
Servo myservo2;
int servoPin = 9;
int servoPin2 = 10;

void setup() 
{

    myservo.attach(servoPin);
    myservo.write(90);
    myservo2.attach(servoPin2);
    myservo2.write(90);
    pinMode(joystickSW, INPUT);
}

void loop() 
{
    if (analogRead(joystickX) < 200)
    {
        myservo.write(180);
    }
    else if (analogRead(joystickX) > 823)
    {
        myservo.write(0);
    }
    else
    {
        myservo.write(90);
    }

    if (digitalRead(joystickSW) == HIGH)
    {
        myservo2.write(180);
    }
    else
    {
        myservo2.write(90);
    }
}
