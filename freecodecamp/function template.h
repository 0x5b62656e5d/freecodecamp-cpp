#pragma once
#include "main.h"

//function templates can be alternative for function overloads

//template 1: maximum of two numbers

template <typename T> T maximum(T a, T b) {
	return (a > b) ? a : b;

}