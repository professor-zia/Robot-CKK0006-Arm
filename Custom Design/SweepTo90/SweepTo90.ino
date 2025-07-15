/* SweepTo90
 robot arm servo calibration test
 move each of the 4 servos to test range from 0 to 180 degrees
 set each servo to mid 90 degree position

 modify each servo's min, max pulse width to set servo 90 to physical 90 position
*/

#include <Servo.h>
#define s1_pin 4
#define s2_pin 5
#define s3_pin 6
#define s4_pin 7

// create servo object to control a servo
// twelve servo objects can be created on most boards
Servo s1, s2, s3, s4;

// variable to store the servo position
int s1_pos = 0;
int s2_pos = 0;
int s3_pos = 0;
int s4_pos = 0;

void setup() {
  // attaches the servo on pin # to the servo object
  // with given servo pulse width min, max corresponding to 0, 180 deg
  s1.attach(s1_pin, 550, 2500);
  s2.attach(s2_pin, 610, 2500);
  s3.attach(s3_pin, 500, 2400);
  s4.attach(s4_pin, 500, 2400);
}

void loop() {
  for (s1_pos = 0; s1_pos <= 180; s1_pos += 1) {  // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    s1.write(s1_pos);  // tell servo to go to position in variable 'pos'
    delay(15);         // waits 15 ms for the servo to reach the position
  }
  for (s1_pos = 180; s1_pos >= 0; s1_pos -= 1) {  // goes from 180 degrees to 0 degrees
    s1.write(s1_pos);                             // tell servo to go to position in variable 'pos'
    delay(15);                                    // waits 15 ms for the servo to reach the position
  }
  s1.write(90);
  delay(1000);

  for (s2_pos = 0; s2_pos <= 180; s2_pos += 1) {  // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    s2.write(s2_pos);  // tell servo to go to position in variable 'pos'
    delay(15);         // waits 15 ms for the servo to reach the position
  }
  for (s2_pos = 180; s2_pos >= 0; s2_pos -= 1) {  // goes from 180 degrees to 0 degrees
    s2.write(s2_pos);                             // tell servo to go to position in variable 'pos'
    delay(15);                                    // waits 15 ms for the servo to reach the position
  }
  s2.write(90);
  delay(1000);

  for (s3_pos = 0; s3_pos <= 180; s3_pos += 1) {  // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    s3.write(s3_pos);  // tell servo to go to position in variable 'pos'
    delay(15);         // waits 15 ms for the servo to reach the position
  }
  for (s3_pos = 180; s3_pos >= 0; s3_pos -= 1) {  // goes from 180 degrees to 0 degrees
    s3.write(s3_pos);                             // tell servo to go to position in variable 'pos'
    delay(15);                                    // waits 15 ms for the servo to reach the position
  }
  s3.write(90);
  delay(1000);

  for (s4_pos = 0; s4_pos <= 180; s4_pos += 1) {  // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    s4.write(s4_pos);  // tell servo to go to position in variable 'pos'
    delay(15);         // waits 15 ms for the servo to reach the position
  }
  for (s4_pos = 180; s4_pos >= 0; s4_pos -= 1) {  // goes from 180 degrees to 0 degrees
    s4.write(s4_pos);                             // tell servo to go to position in variable 'pos'
    delay(15);                                    // waits 15 ms for the servo to reach the position
  }
  s4.write(90);
  delay(1000);

  while (1) {}
}
