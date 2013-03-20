/*
  Component.h - Library for storing data 
	in an organized manner for the RoboArm class to use.
  Created by Tim Hurd, February 12, 2013.
  
*/


#ifndef Component_H
#define Component_H

#include <Arduino.h>
#include <Servo.h>

class Component {
public:
//mass is measured in g
//length is measured in cm
//torque is measured in kgf*cm

	Component(Servo s,int mir,int mar,float l, int p,int cd, float ms, float ml, float tma, float tmi);
	Component(Servo s,float l,int p);
	Component(Servo s,int mir,int mar,float l,int p);
	Component();
	
	Servo serv;  // servo object
	int maxR; //maximum value that the servo can rotate to
	int minR; //minimum value that the servo can rotate to
	int currDeg; //current position of servo in degrees
	float massServo; //mass of the servo
	float massLink; //mass of link to next servo
	float leng;   //length of component to the next axis of rotation
	float torqMax;  // max torque of the servo at 6V
	float torqMin;  // max torue of the servo at 4V
	int posi;  //position in the link of servos creating the arm (0 being the shoulder)


};
#endif