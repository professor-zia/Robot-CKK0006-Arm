#include <Servo.h>
Servo myservo1;  // Create a servo class
Servo myservo2;  // Create a servo class
Servo myservo3;  // Create a servo class
Servo myservo4;  // Create a servo class

int pos1 = 60, pos2 = 90, pos3 = 120;
void setup() {
  myservo1.attach(4);  //Set D4 as servo control pin
  myservo2.attach(5);  //Set D5 as servo control pin
  myservo3.attach(6);  //Set D6 as servo control pin
  myservo4.attach(7);  //Set D7 as servo control pin
  delay(1000);
  myservo1.write(pos1);
  myservo2.write(pos1);
  myservo3.write(pos1);
  myservo4.write(pos1);
  delay(1000);
  myservo1.write(pos2);
  myservo2.write(pos2);
  myservo3.write(pos2);
  myservo4.write(pos2);
  delay(1000);
  myservo1.write(pos3);
  myservo2.write(pos3);
  myservo3.write(pos3);
  myservo4.write(pos3);
  delay(1000);
  myservo1.write(pos2);
  myservo2.write(pos2);
  myservo3.write(pos2);
  myservo4.write(pos2);
  delay(1000);
}

void loop() {
}