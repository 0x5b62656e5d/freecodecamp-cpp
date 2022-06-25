#pragma once
#include "main.h"

void max_str(const string& input1, const string input2, string& output) {

	if (input1 > input2) { output = input1; }
	else { output = input2; };

}

void datafromfunction() {

	string out_str;
	string string1("Alabama");
	string string2("Believe");
	max_str(string1, string2, out_str);
	cout << "max_str: " << out_str << endl;

}

void max_int(int input1, int input2, int& output) {

	if (input1 > input2) { output = input1; }
	else { output = input2; };

}

void intfromfunction() {

	int out_int;
	int num1{ 45 };
	int num2{ 23 };
	max_int(num1, num2, out_int);
	cout << "max_str: " << out_int << endl;

}

void max_double(double input1, double input2, double* output) {

	if (input1 > input2) { *output = input1; }
	else { *output = input2; };

}

void doublefromfunction() {

	double out_double;
	double num1{ 45.9 };
	double num2{ 6.9 };
	max_double(num1, num2, &out_double);
	cout << "max_str: " << out_double << endl;

}


//overloading

int max(int a, int b) {

	return (a > b) ? a : b;

}

double max(double a, double b) {

	return (a > b) ? a : b;

}

string_view max(string_view a, string_view b) {

	return (a > b) ? a : b;

}

double max(double a, int b, int c) {

	//overloading funtions can also change # of params
	return a;

}


//lambda functions

//function signature:
/*

[capture list] {params} -> return type{

	body

};

*/
//return type is optional, can use auto

auto func = []() {

	cout << "Hello world" << endl;

};
//can be called with func();

//to call function after definition, add () at end of definition

[] () {

	cout << "Hello world" << endl;

} ();

//pass params

[] (double a, double b) {

	cout << "a + b = " << (a + b) << endl;

}(12.1, 5.7);