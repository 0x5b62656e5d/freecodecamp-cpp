#pragma once
#include "main.h"

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

//example:
/*

auto func3 = [] (double a, double b) {

	cout << "a + b = " << (a + b) << endl;

} (12.1, 5.7);

*/

auto func2 = []() {

	cout << "Hello world" << endl;

};

//pass params

auto func3 = [](double a, double b) {

	cout << "a + b = " << (a + b) << endl;

}; //(12.1, 5.7)

/*
if defined in int main()

then u can do this (define lambda function without name)

[] (double a, double b) {

	cout << "a + b = " << (a + b) << endl;

} (12.1, 5.7);

*/

//can also return values in lambda functions

auto result = [](double a, double b) {

	return (a + b);

}; //(12.1, 5.7)

/* can also do this:

cout << "result: " << [](double a, double b){
	return (a + b);
}(12.1, 5.7); << endl;

*/

// to specify return type, define like this

auto result2 = [](double a, double b) -> double {

	return (a + b);

}; //(12.1, 5.7);


//capture lists (inside the [] brackets of lambda functions)
//capture list allows lambda function to access variables not declared inside scope of lambda function

void caplist1() {

	int a{ 10 };
	int b{ 20 };

	auto func = [a, b]() -> int {

		cout << (a + b) << endl;
		return (a + b);

	}();

}

//can also capture by reference
//will allow you to modify the variable used in capture list

void caplist2() {

	int c{ 42 };

	auto func = [&c]() {

		cout << "Inner value: " << c << endl;

	};

	for (size_t i{}; i < 5; i++) {
		cout << "Outer value: " << c << endl;
		func();
		c++;

	}

}

//can also capture all variables not in function scope

void caplistall() {

	int a{ 2 };
	int b{ 3 };
	int c{ 4 };

	auto func1 = [=]() {
		cout << a << ", " << b << ", " << c << endl;

	}; //the variables used in func1 will only be a copy, not using reference

	auto func2 = [&]() {
		cout << a << ", " << b << ", " << c << endl;

	}; //the variables a b c can also be modified in func2

}