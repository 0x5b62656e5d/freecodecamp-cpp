#pragma once
#include "main.h"

//arrays
inline void basicarray() {

	int scores[10];//declaration of array with 10 integers
	double salaries[5]{ 12.7, 7.5, 13.2, 8.1, 9.3 }; //initialize array @ declaration
	//can also do "double examplearray[]{1, 2, 3, 4, 5}"
	//compiler will deduce # of items in array
	//can also do "const" arrays

	//writing data
	scores[0] = 1;
	scores[3] = 4;
	scores[7] = 8;

	//read values
	cout << "Integer #4 in array is " << scores[3] << endl;
	cout << "Integer #8 in array is " << scores[7] << endl;

	for (size_t i{ 0 }; i < 5; i++) {
		cout << "Salary[ " << i << " ] is " << salaries[i] << endl;

	}

}

inline void chararray() {

	char message[]{ 'H', 'e', 'l', 'l', 'o', '\0' }; //"\0" = null termination string (end of string)
	//without '\0', after printing directly to console there may be random garbage after "hello"
	//better way to initialize char array is:
	char message2[]{ "Hello" }; //'\0' will automitically be added to end of string

	cout << "The message is: ";
	for (auto i : message) {
		cout << i;

	}
	cout << endl;
	//you can also print directly to console
	cout << message << endl;


	//also modify the array

	message[0] = 'T';
	cout << "The new message is: ";
	for (auto i : message) {
		cout << i;

	}
	cout << endl;

}

//dynamic array
void dynamicarray() {

	const size_t size{ 10 };

	double* p_salaries{ new double[size] }; //p_salaries will have garbage values, uninitialized
	int* p_students{ new(nothrow) int[size] {} }; //all values 0
	double* p_scores{ new(nothrow) double[size] {1,2,3,4,5} }; //first 5 will be 1-5 then rest will be 0

	//std::size dont work on dynamic arrays

	for (size_t i{}; i < size; i++) {
		cout << "value: " << p_scores[i] << " : " << *(p_scores + i) << endl;

	}

	delete[] p_salaries;
	p_salaries = nullptr;

	delete[] p_students;
	p_students = nullptr;

	delete[] p_scores;
	p_scores = nullptr;

}