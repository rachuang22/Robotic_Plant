#include <Servo.h>

Servo myservo;  // create servo object to control a servo. A maximum of eight servo objects can be created
Servo myservo1;
int pos = 0;    // variable to store the servo position

void setup()
{
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo1.attach(10);

}


void loop()
{
  //TILT SERVO
  //range = [0,180]

  int servo1pose = myservo.read();

  if(servo1pose > 30) {
for(pos = servo1pose; pos > 30; pos -= 1)  
  {                                  
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(55);                       // waits 15ms for the servo to reach the position
  }
  }
  
  for(pos = 30; pos < 150; pos += 1)  // goes from 0 degrees to 180 degrees
  {                                  // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(55);                       // waits 15ms for the servo to reach the position
  }

    for(pos = 180; pos >
    0; pos -= 1)  
  {                                  
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(55);                       // waits 15ms for the servo to reach the position
  }


//Rotation 

int servo2pose = myservo1.read();
if(servo2pose > 0) {
for(pos = servo2pose; pos > 0; pos -= 1)  
  {                                  
    myservo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(55);                       // waits 15ms for the servo to reach the position
  }
  }

  for(pos = 0; pos < 180; pos += 1)  // goes from 0 degrees to 180 degrees
  {                                  // in steps of 1 degree
    myservo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(55);                       // waits 15ms for the servo to reach the position
  }

    for(pos = 180; pos > 0; pos -= 1)  
  {                                  
    myservo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(55);                       // waits 15ms for the servo to reach the position
  }
}
