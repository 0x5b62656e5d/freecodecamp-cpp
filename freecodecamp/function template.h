#pragma once
#include "main.h"

//function templates can be alternative for function overloads

//template 1: maximum of two numbers

template <typename T> T maximum(T a, T b) {
	return (a > b) ? a : b;

}
/*
if maximum(10, 23) is called, int versin of template is created
if maximum(34.7, 23.4) is called, double version of template is created
if maximum('hello', 'world') is called, string version of template is crzeated
*/

//template 2: product of two numbers
template <typename T> T multiply(T a, T b) {
	return a * b;

}

//can also specify type of deduction - use <(type)> to specify
//multiply <double> (10, 4);


//template type params by reference
template <typename T> const T& maximumref(const T& a, const T& b) {
	return (a > b) ? a : b;

}

//allows the variables passed into function to be modified inside function


//template specialization for const char* ***have to use existing template for it to work***

template<>
const char* maximum<const char*>(const char* a, const char* b) {
	return (strcmp(a, b) > 0) ? a : b;

}