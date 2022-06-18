#pragma once
#include "main.h"

void max_str(const string& input1, const string input2, string& output) {

	if (input1 > input2) { output = input1; }
	else { output = input2; };

}

void datafromfunction() {

	string out_str;
	string string1("Alabama");
	string string2("Believe");
	max_str(string1, string2, out_str);
	cout << "max_str: " << out_str << endl;

}