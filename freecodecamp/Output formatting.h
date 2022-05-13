#pragma once
#include "main.h"

inline void nameslist() {

	//setw sets width of text

	cout <<left;
	cout << setw(10) << "Lastname" << setw(10) << "Firstname" << setw(5) << "Age" << endl;
	cout << setw(10) << "Daniel" << setw(10) << "Gray" << setw(5) << "25" << endl;
	cout << setw(10) << "Stanley" << setw(10) << "Woods" << setw(5) << "33" << endl;
	cout << setw(10) << "Jordan" << setw(10) << "Parker" << setw(5) << "45" << endl;
	cout << setw(10) << "Izaiah" << setw(10) << "Robinson" << setw(5) << "29" << endl;
	cout << endl;

}

inline void internaljustified() {

	cout << "Internal justified\n"; //negative sign left justified, data right justified
	cout <<right;
	cout << setw(10) << -123.45 << endl;
	cout << internal;
	cout << setw(10) << -123.45 << endl;
	cout << endl;

}

inline void fill() {

	cout <<left;
	cout << setfill('.'); //fills the space with periods
	cout << setw(20) << "Lastname" << setw(20) << "Firstname" << setw(20) << "Age" << endl;
	cout << endl;
	cout << setw(20) << "Daniel" << setw(20) << "Gray" << setw(20) << "25" << endl;
	cout << setw(20) << "Stanley" << setw(20) << "Woods" << setw(20) << "33" << endl;
	cout << setw(20) << "Jordan" << setw(20) << "Parker" << setw(20) << "45" << endl;
	cout << setw(20) << "Izaiah" << setw(20) << "Robinson" << setw(20) << "29" << endl;
	cout << endl;

}

inline void printstates() {

	bool t{ true };

	cout << t << endl;
	cout << boolalpha; //boolalpha makes cout print true/false instead of 0/1
	cout << t << endl;
	cout << noboolalpha; //noboolalpha does opposite
	cout << t << endl;
	cout << endl;

	cout << 35 << endl;
	cout << showpos; //shows positive/negative sign
	cout << 35 << endl;
	cout << noshowpos; //noshowpos does opposite
	cout << 35 << endl;
	cout << endl;

}

inline void shownumform() {

	int number1{ 123678 };
	int number2{ -123678 };

	cout << dec << number1 << endl; //prints number in decimal form (normal form)
	cout << dec << number2 << endl;

	cout << hex << number1 << endl; //prints number in hex form (123456789ABCDEF)
	cout << hex << number2 << endl;

	cout << oct << number1 << endl; //prints number in octal form (base 8)
	cout << oct << number2 << endl;

	cout << showbase; //shows base for integral types
	cout << dec << number1 << endl; //no difference

	cout << hex << number1 << endl; //has 0x in front

	cout << oct << number1 << endl; //has 0 in front

	//do not work on floating point numbers, different protocol

}