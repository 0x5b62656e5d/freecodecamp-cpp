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
		if (isblank(message[i])) {
			cout << "Blank character at: [" << i << " ]" << endl;
			blankcount++;
		}

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

//cstring

void checklength() {

	char message[]{ "hello world" };
	cout << "Length of message is " << strlen(message) << "characters long" << endl;

}

void comparestring() {

	const char* str1{ "Alabama" };
	const char* str2{ "Blabama" };

	char str3[]{ "Alabama" };
	char str4[]{ "Blabama" };

	//print out comparison
	cout << strcmp(str1, str2) << endl; //will return negative value because letters in 1 come before 2
	cout << strcmp(str3, str4) << endl;

	//return 0 if both strings equal
	//return positive if letters in 2 come before 1


}