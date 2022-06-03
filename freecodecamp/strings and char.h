#pragma once
#include "main.h"

void isalphanum() {

	cout << isalnum('C') << endl;

	char char1{ '*' };
	if (isalnum(char1)) { cout << char1 << "is alphanumeric" << endl; }
	else { cout << char1 << "isnt alphanumeric" << endl; }
	
	//output of isalnum can be treated as bool

}

// std::isalpha checks if char is part of alphabet

void checkforblank() {

	char message[]{ "Hello there. How are you doing?" };
	int blankcount{};

	for (size_t i{ 0 }; i < size(message); i++) {
		cout << "Blank character at: [" << i << " ]" << endl;
		blankcount++;

	}
	cout << "Found total of " << blankcount << "blanks" << endl;

}

void checkforlowerupper() {

	char thought[]{ "The C++ Programming Language is one of the most used on the Planet" };
	int lowercount{};
	int uppercount{};

	cout << "Original: " << thought << endl;

	for (auto character : thought) {
		if (islower(character)) { lowercount++; }
		else if (isupper(character)) { uppercount++; }

	}
	cout << "Found " << lowercount << " lower cases and " 
		<< uppercount << " upper cases" << endl;

}

//concept is same for std::isdigit
//std::isdigit checks if character is a number

void upperlower() {

	char message[]{ "The quick brown fox jumps over the lazy dog" };
	char des_msg[size(message)]; //the array where upper or lower string will be written to

	for (size_t i{ 0 }; i < size(message); i++) {
		des_msg[i] = toupper(message[i]);

	}

	cout << "Upper: " << des_msg << endl;

	for (size_t i{ 0 }; i < size(message); i++) {
		des_msg[i] = tolower(message[i]);

	}

	cout << "Lower: " << des_msg << endl;
	
}