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

//auto lets program guess type of variable
static auto var1{ 12 }; //int
static auto var2{ 14.0 }; //double
static auto var3{ 15.01f }; //float
static auto var4{ 15.0l }; //long
static auto var5{ 'e' }; //char

static auto var6{ 123u }; //unsigned
static auto var7{ 123ul }; //unsigned long
static auto var8{ 123ll }; //long long