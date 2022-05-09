#include "main.h"

static int a{ 1 }; //brace initialization
static int b(2); //functional init
static int c = 3; //assignment init

//variables are case sensitive

inline void thesizeof(int x) {

	cout << "the size of the number is: " << sizeof(x) << endl; //prints the size of an object in bytes (1 byte = 8 bits)

}