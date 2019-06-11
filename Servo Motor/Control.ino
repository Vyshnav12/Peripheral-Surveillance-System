#include <Servo.h>

Servo name_servo;

int servo_pos = 0; // Set inital servo position as 0

void setup() {

  name_servo.attach (9); //Servo Control Pin is connected to Digital Pin 9

}

void loop() {
  //Loop for rotating servo from 0-100.
  for (servo_pos = 0; servo_pos <=100; servo_pos +=1){

    name_servo.write(servo_pos);
    delay(100);//rotates the servo by 1 degree every 0.1 seconds
  }
  //Loop for rotating servo from 100-0.
  for (servo_pos=100; servo_pos >= 0; servo_pos -=1){

    name_servo.write(servo_pos);
    delay(100);
  }
}
