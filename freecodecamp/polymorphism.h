#pragma once
#include "main.h"

class Shape {

public:
	Shape() = default;
	Shape(const string_view desc);
	virtual ~Shape() = default;

	virtual void draw() const {
		cout << "Shape::draw() called. Drawing " << m_desc << endl;

	}

protected:
	string m_desc{ "" };

};

class Oval : public Shape {

public:
	Oval() = default;
	Oval(double x_rad, double y_rad, const string_view desc);
	virtual ~Oval() = default;

	virtual void draw() const {
		cout << "Oval::draw() called. Drawing " << m_desc << " with radius x "
			<< m_x_rad << " and radius y " << m_y_rad << endl;

	}

protected:
	double get_x_rad() const { return m_x_rad; }
	double get_y_rad() const { return m_y_rad; }

private:
	double m_x_rad{ 0.0 };
	double m_y_rad{ 0.0 };

};

class Circle : public Oval {

public:
	Circle() = default;
	Circle(double rad, const string_view desc);
	virtual ~Circle() = default;

	virtual void draw() const override {
		cout << "Circle::draw() called. Drawing " << m_desc
			<< " with radius " << get_x_rad() << endl;

	}

	//add override keyword after const keyword
	//used to check if functions in derived classes have same 
	//signature as parent/base class

};

//final specifier (can put in overridden functions or derived class definition)
//if function marked as final, derived classes won't be 
//able to override function - will have to use implementation of parent class
//if class marked final, class cannot be derived further

class Circle2 final : public Oval {

public: 
	Circle2() = default;
	Circle2(double rad, const string_view desc);
	virtual ~Circle2() = default;

	virtual void draw() const final{
		cout << "Circle::draw() called. Drawing " << m_desc
			<< " with radius " << get_x_rad() << endl;

	}

};

//add virtual specifier to destructor will properly delete objects
//if base pointers were used to manage derived objects