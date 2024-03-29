#pragma once

#include <iostream>
#include <cmath>
#include <iomanip>
#include <ios>
#include <limits> //limits for types of numbers
#include <cctype> //strings and char
#include <cstring> //strings
#include <string> //std::string
#include <concepts> //for cpp20 concepts
#include <memory> //for smart pointers

using namespace std;

/*

iostream: endl, flush (flush output stream)
iomanip: setw, setprecision, setfill
ios: left - right - internal (justification), (no)boolalpha, (no)showpos, dec - hex - oct, (no)showbase, 
(no)uppercase, fixed - scientific, (no)showpoint (12 to 12.000)
cctype: isalnum, toupper, tolower, isalpha, isblank
cstring: clen, 

std::flush is used like this:
cout << "message" << endl << flush;

*/