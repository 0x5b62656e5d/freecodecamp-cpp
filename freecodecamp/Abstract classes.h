#pragma once
#include "main.h"

class Shape { //shape will become abstract

protected:
	Shape() = default;
	Shape(string_view desc);
	
public:
	virtual ~Shape() = default;
	//even if class is abstract, destructor has to be public
	//to delete pointer objects

	//pure virtual functions (abstract)
	//implementations of function will be defined in derived classes
	virtual double perimeter() const = 0;
	virtual double area() const = 0;	

private:
	string m_desc{};

};

class Circle3 : public Shape {

public:
	Circle3() = default;
	Circle3(double rad, string_view desc);
	virtual ~Circle3() = default;

	virtual double perimeter() const override {
		return (2 * m_rad * m_pi);

	}

	virtual double area() const override {
		return (m_rad * m_rad * m_pi);

	}

private:
	double m_rad{ 0.0 };

	const double m_pi{ 3.141592653589793238462643383279502884L };

};

class Rectangle : public Shape {

public:
	Rectangle() = default;
	Rectangle(double width, double height, string_view desc);
	virtual ~Rectangle() = default;

	virtual double perimeter() const override {
		return (2 * m_width + 2 * m_height);

	}

	virtual double area() const override {
		return (m_width * m_height);

	}

private:
	double m_width{ 0.0 };
	double m_height{ 0.0 };

};

//interfaces
//abstract classes with only functions and no member variables

class StreamInsertable {

	friend ostream& operator<< (ostream& out, 
		const StreamInsertable& operand);

public:
	virtual void stream_insert(ostream& out) const = 0;

};

class Point : public StreamInsertable {

public:
	Point() = default;
	Point(double x, double y)
		: m_x(x), m_y(x) {}

	virtual void stream_insert(ostream& out) const override {
		out << "Point (" << m_x << ", " << m_y << ")" << endl;

	}

private:
	double m_x{};
	double m_y{};

};