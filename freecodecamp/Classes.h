#pragma once
#include "main.h"
# define PI			3.141592653589793238462643383279502884L //for cylinder volume

//first cpp class - cylinder

class Cylinder {

public: //if changed to private, member variables will not be able to be modified or read
	double base_radius{ };
	double height{ };

public:
	double volume() { return PI * base_radius * base_radius * height; }

};

//using a class

void usecylinderclass();

//class constructors

class cylinderB {

	//properties
private:
	double base_radius{ 1.0 };
	double height{ 1.0 };

	//behaviors
public:
	//constructors

	double CylinderB() {
		base_radius = 2.0;
		height = 2.0;

	};

	cylinderB();
	
	cylinderB(double radius_param, double height_param); //passed by values, values are copies of parameters

	//getters - will read member variables
	double get_radius();
	double get_height();

	//setters - can set member variables
	void set_radius(double radius_param);
	void set_height(double height_param);

	//functions
	double volumeB();

};

//when object is built (CylinderB cylinderb1;), the values of radius and height 
	//will use values from constructors if there is any (2.0, 2.0) 
//if there aren't constructors, it will create default constructor (use member variables)
//to generate default constructor, put "Cylinder() = default;" in public scope

//"setters and getters" (sets and gets member variables from classes

//arrow pointer notation

void usearrowpointer();