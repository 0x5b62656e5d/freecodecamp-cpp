#pragma once
#include "main.h"

//arrays
inline void basicarray() {

	int scores[10];//declaration of array with 10 integers

	//writing data
	scores[0] = 1;
	scores[3] = 4;
	scores[7] = 8;

	//read values
	cout << "Integer #4 in array is " << scores[3] << endl;
	cout << "Integer #8 in array is " << scores[7] << endl;

}