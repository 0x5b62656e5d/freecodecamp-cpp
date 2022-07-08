#include "main.h"
#include "Classes.h"

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

	(*c1).set_radius(15.0);

	//or

	c1->set_radius(rad_param);
	c1->set_height(height_param);

	cout << "volume c1: " << c1->volumeB();

	delete c1;

	cylinderB c2(10.0, 5.0);

}

void usedestructor() {

	Dog* dog1 = new Dog("Fluffy", "Shepherd", 2);

	delete dog1; //destructor for dog will be called

}

void chaincallbyptr() {

	Dog* dog2 = new Dog("Milou", "Shepard", 3);
	dog2->printinfo();

	dog2->set_breed("Chihuahua")->set_name("doggo")->set_age(5);

	delete dog2;

}

void chaincallbyref() {

	Dog dog3("Joe", "Bulldog", 4);
	dog3.printinfo();

	dog3.set_name2("Bob").set_breed2("Chihuahua").set_age2(3);

	dog3.printinfo();

}


cylinderB::cylinderB(double radius_param, double height_param) { //passed by values, values are copies of parameters
	base_radius = radius_param;
	height = height_param;
};

double cylinderB::volumeB() { return PI * base_radius * base_radius * height; }

double cylinderB::get_radius() { return base_radius; }
double cylinderB::get_height() { return height; }

void cylinderB::set_radius(double radius_param) { base_radius = radius_param; }
void cylinderB::set_height(double height_param) { height = height_param; }


//function setup for chained calls using ptr

Dog* Dog::set_name(const string& dog_name) {

	this->dog_name = dog_name;
	return this;

}

Dog* Dog::set_breed(const string& dog_breed) {

	this->dog_breed = dog_breed;
	return this;

}

Dog* Dog::set_age(int age) {

	*(this->dog_age) = age;
	return this;

}

//function setup for chined calls using ref

Dog& Dog::set_name2(const string& dog_name) {

	this->dog_name = dog_name;
	return *this;

}

Dog& Dog::set_breed2(const string& dog_breed) {

	this->dog_breed = dog_breed;
	return *this;

}

Dog& Dog::set_age2(int age) {

	*(this->dog_age) = age;
	return *this;

}

void Dog::printinfo() { cout << dog_name << ", " << dog_breed << ", " << *dog_age << endl; }

//destructors

Dog::Dog() {

	dog_name = "None";
	dog_breed = "None";
	dog_age = new int;
	*dog_age = 0;

	//the "this" pointer

	cout << "Dog: " << dog_name << " constructed at " << this << endl;
	//will print out the address of the name of the dog

}

Dog::Dog(string_view name_param, string breed_param, int age_param) {

	dog_name = name_param;
	dog_breed = breed_param;
	dog_age = new int;
	*dog_age = age_param;
	cout << "dog constructor called for " << dog_name << endl;

}

Dog::~Dog() {

	delete dog_age;
	cout << "Dog destructor called for " << dog_name << endl;

}

void Dog::thethispointer(const string& dog_name) {

	this->dog_name = dog_name;
	//if a member variable has the same name as parameter, then u can use
	//this->variablename

}