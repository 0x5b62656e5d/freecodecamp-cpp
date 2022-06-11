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

	//can add third argument to strcmp, how many letters to compare
	//strcmp(aaaa,bbbb,3) tells strcmp to compare first 3 letters of str1 and str2

}

void searchchara() {

	const char* const str{ "Try not. Do, or do not. There is no try." };
	//make const pointer to prevent pointing somewhere else
	char target = 'T';
	const char* result = str;
	size_t iterations{};

	while ((result = strchr(result, target)) != nullptr) {
		cout << "Found '" << target << "' starting at " << result << endl;

		++result;
		++iterations;

	}
	cout << iterations << " iterations" << endl;

}

void lastoccurrence() {

	char input[]{ "/home/user/hellp.cpp" };
	char* output = strrchr(input, '/');
	if (output)
		cout << output + 1 << endl;

}

void joinstring() {

	char dest[50] = "hello ";
	char src[50] = "world! ";
	//arrays have to be big enough for characters to be joined

	strcat(dest, src);
	strcat(dest, " Goodbye world!");
	cout << "dest: " << dest << endl;

}

void joinstring2() {

	char* dest1 = new char[30]{ 'F', 'i', 'r', 'e', 'l', 'o', 'r', 'd', '\0' };
	char* src1 =
		new char[30]{ ',', 'T', 'h', 'e', ' ', 'P', 'h', 'e', 'o', 'n', 'i', 'x', ' ', 'K', 'i', 'n', 'g', '!', '\0' };

	cout << "length of dest1" << strlen(dest1) << endl;
	cout << "length of src1" << strlen(src1) << endl;

	strcat(dest1, src1);

	cout << "length of cat dest1" << strlen(dest1) << endl;
	cout << dest1 << endl;

}

void joinstringlimited() {

	//strncat specifies number of characters from 2nd string to combine with 1st string

	char dest2[50]{ "Hello" };
	char source2[50]{ " There is a bird on my window" };

	cout << strncat(dest2, source2, 6) << endl;

	// or u can use strncat operator separately

	strncat(dest2, source2, 6);
	cout << dest2 << endl;

}

void copystring() {

	const char* source3 = "C++ is a multipurpose programming language.";
	char* dest3 = new char[strlen(source3) + 1];

	strcpy(dest3, source3);

	cout << "Sizeof(dest3): " << sizeof(dest3) << endl;
	cout << "strlen(dest3): " << strlen(dest3) << endl;
	cout << dest3 << endl;

}

void copystringlimited() {

	//strncpy specifies number of characters to be copied from source to destination

	const char* source4 = "Hello";
	char dest4[]{ 'a', 'b', 'c', 'd', 'e', 'f', '\0' };

	cout << "dest4: " << dest4 << endl;
	strncpy(dest4, source4, 5);
	cout << "dest4: " << dest4 << endl;

}