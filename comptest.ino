#include <Component.h>
#include <Servo.h>
#include <array>

Servo elbo,wrist,should;

void setup(){
  Serial.begin(9600);
  should.attach(1);
  elbo.attach(3);
  wrist.attach(4);

}

void loop(){
  Component comp(should,10.2,1);
  Component comp2(elbo,3,30,3.1,2);
  Component wristC(wrist,25,170,5.2,3,0,10,03,40,30);
  float x = comp.leng;
  Component comp3[] = {comp,comp2};
  Serial.println(x);
  Serial.println(comp3[1].minR+5);
  Serial.println(comp3[1].currDeg);
  Serial.println(" ");
  Serial.println(wristC.serv.attached());
  Serial.println(wristC.minR + wristC.maxR); 
  Serial.println(wristC.leng);
  Serial.println(wristC.massLink);
  Serial.println(wristC.massServo);
  Serial.println(wristC.torqMax+wristC.torqMin);
  Serial.println(wristC.posi);
  Serial.println(wristC.currDeg);
}


