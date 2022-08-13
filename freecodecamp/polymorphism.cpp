#include "polymorphism.h"

Shape::Shape(const string_view desc) : m_desc(desc) {}


Oval::Oval(double x_rad, double y_rad, const string_view desc)
	: m_x_rad(x_rad), m_y_rad(y_rad), Shape(desc)
{}


Circle::Circle(double rad, const string_view desc)
	: Oval(rad, rad, desc) {}

Circle2::Circle2(double rad, const string_view desc)
	: Oval(rad, rad, desc) {}

//static binding with base class ptr

void staticbind() {

	Shape shape1("Shape1");
	Oval oval1(2, 3.5, "Oval1");
	Circle circle1(3.3, "Circle1");

	cout << "Calling methods thru ptrs - static binding" << endl;

	Shape* shape_ptr = &shape1;

	shape_ptr->draw();
	
	shape_ptr = &oval1;
	shape_ptr->draw(); //will not call oval::draw but shape::draw because 
						//draw function is statically bound to shape ptr
	shape_ptr = &circle1;
	shape_ptr->draw();

	delete shape_ptr;
	shape_ptr = nullptr;

}

void dynamicbind() {

	//put "virtual" keyword in front of function used in polymorphism

	Shape shape1("Shape1");
	Oval oval1(2, 3.5, "Oval1");
	Circle circle1(3.3, "Circle1");

	Shape* shape_ptr = &shape1;
	shape_ptr->draw();

	shape_ptr = &oval1;
	shape_ptr->draw();

	shape_ptr = &circle1; //will now do shape draw, oval draw, circle draw
	shape_ptr->draw();	//since functions are now marked as virtual

	delete shape_ptr;
	shape_ptr = nullptr;

	Shape* shape_collec[]{ &shape1, &oval1, &circle1 };
	for (Shape* s_ptr : shape_collec) {
		s_ptr->draw();

	}

}

void draw_shape(Shape* s) { //dynamioc binding
	s->draw(); //can pass circle, shape, or oval and will use 
	//the method from object passed
}

void polymorphicarray() {

	Circle circle1(7.2, "circle1");
	Oval oval1(13.3, 1.2, "Oval1");
	Circle circle2(11.2, "circle2");
	Oval oval2(31.3, 15.2, "oval2");
	Circle circle3(12.2, "circle3");
	Oval oval3(53.3, 9.2, "Oval3");

	Shape* shapes[]{ &circle1, &oval1, &circle2, &oval2, &circle3, &oval3 };

	for (Shape* s : shapes) {
		s->draw();

	}

	//smart pointers

	shared_ptr<Shape> shapes2[]{ make_shared<Circle>(12.2, "Circle4"), make_shared<Oval>(10.0, 20.0, "oval4") };

	for (auto& s : shapes) {
		s->draw();

	}

}

//dynamic casts

Animal::Animal(string_view desc) : m_desc(desc) {}

Feline::Feline(string_view fur, string_view desc)
	: m_fur(fur), Animal(desc) {}

Dog3::Dog3(string_view fur, string_view desc)
	: Feline(fur, desc) {}

Animal::~Animal() {}
Feline::~Feline() {}
Dog3::~Dog3() {}

void dynamiccasts() {

	//if dynamic cast = succeed, will get valid pointer
	//if fail, will get nullptr

	Animal* animal1 = new Feline("stripes", "feline1");

	Feline* felineptr = dynamic_cast<Feline*>(animal1);

	if (felineptr) { felineptr->dosomething(); }
	else { cout << "Couldn't cast to Feline ptr" << endl; }

	//for references (avoid dynamic_casts with ref)

	Feline feline2("stripes", "feline2");
	Animal& animalref = feline2;

	Feline& felineref{ dynamic_cast<Feline&>(animalref) };
	felineref.dosomething();

	//not pointer but to check if value was valid we can
	//turn ref into ptr

	Feline* felineptr2{ dynamic_cast<Feline*>(&animalref) };
	if (felineptr2) { felineptr2->dosomething(); }
	else { cout << "Couldn't cast to Feline ptr" << endl; }

}