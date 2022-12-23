#include <Servo.h>

Servo myservo1; 
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;
Servo myservo6;
Servo myservo7;


int pos1 = 0;
int pos2 = 90;


void setup() {
  myservo1.attach(3);
  myservo2.attach(4);
  myservo3.attach(5);
  myservo4.attach(6);
  myservo5.attach(7);
  myservo6.attach(8);
  myservo7.attach(9);
}
  



void loop() {
eight();
delay(5000);
no();
delay(500);

 

}

void one()
{myservo1.write(pos2);
myservo2.write(pos2);}
void two()
{myservo6.write(pos2);
myservo1.write(pos2);
  myservo7.write(pos2);
  myservo4.write(pos2);
myservo3.write(pos2);}
void three()
{myservo6.write(pos2);
myservo1.write(pos2);
  myservo7.write(pos2);
  myservo2.write(pos2);
myservo3.write(pos2);}
void four()
{myservo5.write(pos2);
myservo1.write(pos2);
  myservo7.write(pos2);
  myservo2.write(pos2);
}
void five()
{myservo6.write(pos2);
myservo5.write(pos2);
  myservo7.write(pos2);
  myservo2.write(pos2);
myservo3.write(pos2);}
void six()
{myservo6.write(pos2);
myservo5.write(pos2);
  myservo2.write(pos2);
  myservo4.write(pos2);
myservo3.write(pos2);
myservo7.write(pos2);}
void seven()
{myservo6.write(pos2);
myservo1.write(pos2);
  myservo2.write(pos2);
}
void eight()
{myservo5.write(pos2);
myservo1.write(pos2);
  myservo7.write(pos2);
  myservo2.write(pos2);
  myservo3.write(pos2);
  myservo4.write(pos2);
  myservo6.write(pos2);
}
void nine()
{myservo5.write(pos2);
myservo1.write(pos2);
  myservo7.write(pos2);
  myservo2.write(pos2);
  myservo6.write(pos2);
  myservo3.write(pos2);
}
void zero()
{myservo5.write(pos2);
myservo1.write(pos2);
  myservo2.write(pos2);
  myservo3.write(pos2);
  myservo4.write(pos2);
  myservo6.write(pos2);
}
void no()
{myservo5.write(pos1);
myservo1.write(pos1);
  myservo7.write(pos1);
  myservo2.write(pos1);
  myservo3.write(pos1);
  myservo4.write(pos1);
  myservo6.write(pos1);}
