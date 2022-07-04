#include "main.h"
#include "Classes.h"

cylinderB::cylinderB(double radius_param, double height_param) { //passed by values, values are copies of parameters
	base_radius = radius_param;
	height = height_param;
};

double cylinderB::volumeB() { return PI * base_radius * base_radius * height; }

double cylinderB::get_radius() { return base_radius; }
double cylinderB::get_height() { return height; }

void cylinderB::set_radius(double radius_param) { base_radius = radius_param; }
void cylinderB::set_height(double height_param) { height = height_param; }


void usecylinderclass() {

	Cylinder cylinder1;
	cylinder1.base_radius = 10.0;
	cylinder1.height = 3;
	cout << "Volume c1: " << cylinder1.volume();

	Cylinder cylinder2;
	cout << "Volume c2: " << cylinder2.volume();

}

void usearrowpointer() {

	double rad_param{ 10.0 };
	double height_param{ 2.0 };

	cylinderB* c1 = new cylinderB(); //create new object on heap

	(*c1).set_radius(rad_param);

	//or

	c1->set_radius(rad_param);
	c1->set_height(height_param);

	cout << "volume c1: " << c1->volumeB();

	delete c1;

	cylinderB c2(10.0, 5.0);

}