#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

int angle1 = 0;
int angle2 = 5;
int angle3 = -5;
int angle4 = -5;

void setup() {
  //Serial.begin(9600);
  // put your setup code here, to run once:
  servo1.attach(2); // YL (top)
  servo2.attach(3); // YR (top)
  servo3.attach(4); // RR (down)
  servo4.attach(5); // RL (down) 

  servo1.write(angle);
  servo2.write(angle);
  servo3.write(angle);
  servo4.write(angle);


}

void loop() {

  // //PIN2
  // for(angle = 90; angle < 180; angle++)  
  // {                                  
  //   servo1.write(angle);               
  //   delay(500);              
  // }
  // for(angle = 180; angle > 0; angle--)    
  // {                                
  //   servo1.write(angle);           
  //   delay(10);       
  // } 

  // //PIN3
  // for(angle = 90; angle < 180; angle++)  
  // {                                  
  //   servo2.write(angle);               
  //   delay(500);              
  // }
  // for(angle = 180; angle > 0; angle--)    
  // {                                
  //   servo2.write(angle);           
  //   delay(10);       
  // } 

  // //PIN4
  for(angle = 90; angle < 180; angle++)  
  {                                  
    servo3.write(angle);               
    delay(500);              
  }
  for(angle = 180; angle > 0; angle--)    
  {                                
    servo3.write(angle);           
    delay(10);       
  }

  // //PIN5
  // for(angle = 90; angle < 180; angle++)  
  // {                                  
  //   servo4.write(angle);               
  //   delay(500);              
  // }
  // for(angle = 180; angle > 0; angle--)    
  // {                                
  //   servo4.write(angle);           
  //   delay(10);       
  // } 


}
