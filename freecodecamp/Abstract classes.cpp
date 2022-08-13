#include "Abstract classes.h"

Shape::Shape(string_view desc)
	: m_desc(desc) {}

Circle3::Circle3(double rad, string_view desc)
	: m_rad(rad), Shape(desc) {}

Rectangle::Rectangle(double width, double height, string_view desc)
	: m_width(width), m_height(height), Shape(desc) {}

void usetypeid() {

	const Shape* shape_rect = new Rectangle(10, 10, "Rectangle1");

	double surface = shape_rect->area();

	cout << "dynamic type of shape_rect: " 
		<< typeid(*shape_rect).name() << endl; 
	//returns type of object (rectangle, shape, circle)

	cout << "Area of shape_rect: " << surface << endl;

	delete shape_rect;

}

//interface
ostream& operator<< (ostream& out, const StreamInsertable& operand) {
	operand.stream_insert(out);
	return out;

}