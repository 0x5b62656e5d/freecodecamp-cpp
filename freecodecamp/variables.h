#pragma once
#include "main.h"

static int integer{ 0 }; //whole number
static double doublenum{ 1.23897234 }; //decimal number, precision up to 15
static float floatnum{ 1.2367 }; //decimal number, , precision up to 7

//char variables occupies 1 byte/8 bits in memory
static char char1{ 'a' };
static char char_a{ 65 }; //stored as ASCII character code for 'A'
inline void asciiID(char character) { //use static_cast<int>(character) to print out the ASCII code for character

	cout << static_cast<int>(character) << endl;

}