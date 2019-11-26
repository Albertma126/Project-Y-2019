//Arduino Robotic Hand Science Fair 2016
//Rubber version

#include <Servo.h> 

Servo Finger1, Finger2, Finger3, Finger4, Finger5;

int Servo1 = 10;
int Servo2 = 9;
int Servo3 = 8;
int Servo4 = 7;
int Servo5 = 6;

int Flex1 = A1;
int Flex2 = A2;
int Flex3 = A3;
int Flex4 = A4;
int Flex5 = A5;

void setup()
{
  //Attach the servo objects to their pins on the Arduino
  Finger1.attach(Servo1);
  Finger2.attach(Servo2);
  Finger3.attach(Servo3);
  Finger4.attach(Servo4);
  Finger5.attach(Servo5);
  
  pinMode(Servo1, OUTPUT);
  pinMode(Servo2, OUTPUT);
  pinMode(Servo3, OUTPUT);
  pinMode(Servo4, OUTPUT);
  pinMode(Servo5, OUTPUT);
  
  //Set each flex sensor pin to input
  pinMode(Flex1, INPUT);
  pinMode(Flex2, INPUT);
  pinMode(Flex3, INPUT);
  pinMode(Flex4, INPUT);
  pinMode(Flex5, INPUT);
  
  
}

void loop()
{
  //Defines analog input variables for the flex sensors
  int flex1 = analogRead(Flex1);
  int flex2 = analogRead(Flex2);
  int flex3 = analogRead(Flex3);
  int flex4 = analogRead(Flex4);
  int flex5 = analogRead(Flex5);
  int pos1 = map(flex1, 400, 700, 0, 180);
  pos1 = constrain(pos1, 0, 180);
  int pos2 = map(flex2, 400, 700, 0, 180);
  pos2 = constrain(pos2, 0, 180);
  int pos3 = map(flex3, 400, 700, 0, 180);
  pos3 = constrain(pos3, 0, 180);
  int pos4 = map(flex4, 480, 640, 0, 180);
  pos4 = constrain(pos4, 0, 180);
  int pos5 = map(flex5, 400, 700, 0, 180);
  pos5 = constrain(pos5, 0, 180);
  
  //Tells servos to move by the amount specified in the "pos" variables
  Finger1.write(pos1);
  Finger2.write(pos2);
  Finger3.write(pos3);
  Finger4.write(pos4);
  Finger5.write(pos5);
}


