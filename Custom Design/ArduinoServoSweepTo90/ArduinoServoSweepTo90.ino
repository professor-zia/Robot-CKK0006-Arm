/* ArduinoServoSweepTo90
 program for testing and calibrating 4 micro servos,
 used in the 3D printed robot arm

 move each servo one at a time, 
 to keep total current draw to a minimum

  F.Zia 2025-0625
*/

#include <Servo.h>
// create Servo objects to control servos
// twelve Servo objects can be created on most boards
Servo armServo1, armServo2, armServo3, armServo4;

// define Servo pins
#define Servo1pin 6
#define Servo2pin 7
#define Servo3pin 8
#define Servo4pin 9

// variables to store servo position and mid-position
int pos = 0, mid_pos = 90;

void setup() {
  // attach servos to respective pins
  armServo1.attach(Servo1pin);
  armServo2.attach(Servo2pin);
  armServo3.attach(Servo3pin);
  armServo4.attach(Servo4pin);

  // move Servo1 from 0 to 180 degrees ------------------
  // in steps of 1 degree
  for (pos = 0; pos <= 180; pos += 1) {
    armServo1.write(pos);
    delay(15);  // wait 15 ms for servo to reach position
  }
  // move Servo1 from 180 to 0 degrees
  for (pos = 180; pos >= 0; pos -= 1) {
    armServo1.write(pos);
    delay(15);  // wait 15 ms for servo to reach position
  }
  // move Servo1 to mid-position for calibration
  armServo1.write(mid_pos);
  delay(1000);

  // move Servo2 from 0 to 180 degrees ------------------
  // in steps of 1 degree
  for (pos = 0; pos <= 180; pos += 1) {
    armServo2.write(pos);
    delay(15);  // wait 15 ms for servo to reach position
  }
  // move Servo2 from 180 to 0 degrees
  for (pos = 180; pos >= 0; pos -= 1) {
    armServo2.write(pos);
    delay(15);  // wait 15 ms for servo to reach position
  }
  // move Servo2 to mid-position for calibration
  armServo2.write(mid_pos);
  delay(1000);

  // move Servo3 from 0 to 180 degrees ------------------
  // in steps of 1 degree
  for (pos = 0; pos <= 180; pos += 1) {
    armServo3.write(pos);
    delay(15);  // wait 15 ms for servo to reach position
  }
  // move Servo3 from 180 to 0 degrees
  for (pos = 180; pos >= 0; pos -= 1) {
    armServo3.write(pos);
    delay(15);  // wait 15 ms for servo to reach position
  }
  // move Servo3 to mid-position for calibration
  armServo3.write(mid_pos);
  delay(1000);

  // move Servo4 from 0 to 180 degrees ------------------
  // in steps of 1 degree
  for (pos = 0; pos <= 180; pos += 1) {
    armServo4.write(pos);
    delay(15);  // wait 15 ms for servo to reach position
  }
  // move Servo4 from 180 to 0 degrees
  for (pos = 180; pos >= 0; pos -= 1) {
    armServo4.write(pos);
    delay(15);  // wait 15 ms for servo to reach position
  }
  // move Servo4 to mid-position for calibration
  armServo4.write(mid_pos);
  delay(1000);
}

void loop() {
  // loop function is empty
}
