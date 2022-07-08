#pragma once
#include "main.h"
#define PI			3.141592653589793238462643383279502884L //for cylinder volume

//arrow pointer notation

void usearrowpointer();

//using a class

void usecylinderclass();

//using destructors

void usedestructor();



//first cpp class - cylinder

class Cylinder {

public: //if changed to private, member variables will not be able to be modified or read
	double base_radius{ };
	double height{ };

public:
	double volume() { return PI * base_radius * base_radius * height; }

};

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

	cylinderB() = default;
	
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

//destructors

class Dog {

public:
	Dog();
	Dog(string_view name_param, string breed_param, int age_param);
	~Dog();

	Dog* set_age(int age);
	Dog* set_name(const string& name);
	Dog* set_breed(const string& breed);

	Dog& set_age2(int age);
	Dog& set_name2(const string& dog_name);
	Dog& set_breed2(const string& dog_breed);

	void printinfo();

	void thethispointer(const string& dog_name);
	/*
	~Dog() {

	delete dog_age;
	cout << "Dog destructor called for " << dog_name << endl;

	} 
	*/ //another way to define destructors

private:
	string dog_name;
	string dog_breed;
	int* dog_age{ nullptr };

};

class Dog2 {

public:
	Dog2();
	Dog2(const string& name_param, const string& breed_param, int age_param);

private:
	string dog_name;
	string dog_breed;
	int dog_age;

};

//in classes, member variables are private by default
//in struct, member variabels are public by default

struct Cat {

public:
	Cat(const string& cat_name);

private:
	string name;

};