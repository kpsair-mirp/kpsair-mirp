
// include the servo library
#include <Servo.h>
int yServoPin = 2;
int xServoPin = 3;

Servo ServoX,ServoY ;  // create a servo object
int mn = 60, mx = 120 ;   // variable to hold the angle for the servo motor

void setup() {
  ServoX.attach(xServoPin); // attaches the servo on pin 9 to the servo object
  ServoY.attach(yServoPin);
   // open a serial connection to your computer
}

void loop() {
 for(int i = mn ; i < mx ; ++i){
  ServoX.write(i); // attaches the servo on pin 9 to the servo object
  ServoY.write(i);
  delay(40);
 }
 for(int i = mx ; i > mn ; --i){
  ServoX.write(i); // attaches the servo on pin 9 to the servo object
  ServoY.write(i);
  delay(40);
 }
 
}
