/*
precious idehen

program : In physics, an object that is in motion is said to have kinetic energy. The following formula
		  can be used to determine a moving object's kinetic energy:
		  KE== Y2mv2
		  The variables in the formula are as follows: KE is the kinetic energy in joules, m is the
	   	  object's mass in kilograms, and v is the object's velocity in meters per second.
          Write a function named kineticEnergy that accepts an object's mass (in kilograms) and
          velocity (in meters per second) as arguments. The function should return the amount of
          kinetic energy that the object has. Demonstrate the function by calling it in a program that
          asks the user to enter values for mass and velocity.

*/
#include <iostream>
#include <cmath>
using namespace std;

double kineticEnergy(int m, int v) {
	
	return (1.0/2) * m * pow(v, 2);
}

int main() {
	double KE;
	int mass, velocity;
	cout<<"Enter the mass in kilograms: ";
	cin>>mass;
	cout<<"Enter the velocity in meters per second: ";
	cin>>velocity;
	KE = kineticEnergy(mass, velocity);
	cout<<"The kinetic energy of the object is: "<<KE<<"joules"<<endl;
}
