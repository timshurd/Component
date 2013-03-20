#include <Servo.h>
#include <Component.h>

/*
		Component(Servo,int,int,float,int,int,float,float,float,float); //includes Servo, max, min, length of link, position in chain, current position, mass of servo, mass of link to next joint, max torque, min T
		Component(Servo,int,int,float,int); //gives the servo a min and max degree of rotation, length component, and position in chain, necessary for any spatial calulations.
		Component(Servo,float,int); //assumes servo has min and max of 0-180 degrees, just gives length of links and position in chain
		//maybe include constructor for base to correct for spatial effect?

	*/
	
//Component::Component(Servo,int,int,float,int);

Component::Component(Servo s,int mir,int mar,float l, int p,int cd, float ms, float ml, float tma, float tmi) {
serv = s;
maxR = mar;
minR = mir;
currDeg = cd;
massServo = ms;
massLink = ml;
leng = l;
torqMax = tma;
torqMin = tmi;
posi = p;
}
Component::Component(Servo s,int mir,int mar,float l,int p) {
serv = s;
maxR = mar;
minR = mir;
leng = l;
posi = p;
currDeg = 0;
massServo = 0;
massLink = 0;
torqMax = 0;
torqMin = 0;

}
Component::Component(Servo s,float l,int p) {
serv = s;
leng = l;
posi = p;
maxR = 180;
minR = 0;
currDeg = 0;
massServo = 0;
massLink = 0;
torqMax = 0;
torqMin = 0;
}

Component::Component(){
serv= Servo();
leng =0;
posi=-1;
maxR = 180;
minR = 0;
currDeg = 0;
massServo = 0;
massLink = 0;
torqMax = 0;
torqMin = 0;
}






