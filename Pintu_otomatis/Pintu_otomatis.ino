#include <Servo.h>
Servo myservo;

int pir=7;

void setup()
{
  pinMode(pir,INPUT);
  myservo.attach(8);
  Serial.begin(9600);

}

void loop()
{
  int val = digitalRead(pir);
  Serial.println(val);
  if(val==HIGH){
    
    myservo.write(180);
  }
  else{
    
    myservo.write(-200);
  }
  
  delay(10);

  }
