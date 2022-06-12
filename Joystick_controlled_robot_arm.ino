#include <Servo.h>

Servo Servo_0;
Servo Servo_1;
Servo Servo_2;
Servo Servo_3;

#define Joy_X1 A0
#define Joy_Y1 A1
#define Joy_X2 A2
#define Joy_Y2 A3

int Joy_Val = 0;

void setup()
{
  Servo_0.attach(3);
  Servo_1.attach(5);
  Servo_2.attach(6);
  Servo_3.attach(9);
}

void loop()
{

  Joy_Val = analogRead(Joy_X1);
  Joy_Val = map(Joy_Val, 0, 1023, 180, 0);
  Servo_0.write(Joy_Val);

  Joy_Val = analogRead(Joy_Y1);
  Joy_Val = map(Joy_Val, 0, 1023, 0, 180);
  Servo_1.write(Joy_Val);

  Joy_Val = analogRead(Joy_Y2);
  Joy_Val = map(Joy_Val, 512, 1023, 180, 0);
  Servo_2.write(Joy_Val);

  Joy_Val = analogRead(Joy_X2);
  Joy_Val = map(Joy_Val, 0, 1023, 170, 180);
  Servo_3.write(Joy_Val);
  delay(1);


}
