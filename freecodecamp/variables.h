#pragma once
#include "main.h"

static int intnum{ 0 }; //whole number
static double doublenum{ 1.23897234 }; //decimal number, precision up to 15
static float floatnum{ 1.2367f }; //decimal number, , precision up to 7

//char variables occupies 1 byte/8 bits in memory
static char char1{ 'a' };
static char char_a{ 65 }; //stored as ASCII character code for 'A'
inline void asciiID(char character) { //use static_cast<int>(character) to print out the ASCII code for character

	cout << character << endl;
	cout << static_cast<int>(character) << endl;

}
void autovariables() {

	//auto lets program guess type of variable
	static auto var1{ 12 }; //int
	static auto var2{ 14.0 }; //double
	static auto var3{ 15.01f }; //float
	static auto var4{ 15.0l }; //long
	static auto var5{ 'e' }; //char

	static auto var6{ 123u }; //unsigned
	static auto var7{ 123ul }; //unsigned long
	static auto var8{ 123ll }; //long long

}

void pointers() {

	//pointers
	//declaration
	int* p_number{}; //pointer variables can only store addresses to variable of type int
	double* p_fractional_number{};

	int* p_number2{ nullptr }; //nullptr = not pointing anywhere
	int* p_fractional_number2{ nullptr };

	//definition
	int int_var{ 43 };
	int* p_int{ &int_var }; //& = address of variable operator

	//can also use pointer for char variables

}

//dynamic memory

inline void dynamicmem() {

	int* p_number3{ nullptr }; //initialize null pointer
	p_number3 = new int; //specifically allocates memory for p_number3
	p_number3 = { new int {23} }; //uniform initialization

	cout << p_number3 << endl;
	cout << "* " << *p_number3 << endl;

	delete p_number3; //returns allocated memory to OS
	p_number3 = nullptr; //reset pointer

}

//references

void references1() {

	int int_value{ 45 };
	double double_value{ 33.65 };

	int& reftointval{ int_value }; //assign via init
	int& reftointval2 = int_value; //assign via assignment
	double& reftodoubleval{ double_value };

	//can also set constant reference

	const int& const_int_value{ int_value };

}