#include "main.h"

static int a{ 1 }; //brace initialization
static int b(2); //functional init
static int c = 3; //assignment init

signed int negvalue = -300; //signed = modifier to store neg/pos values, unsigned to only store pos value

short shortvar{ 255 }; //2 bytes in memory
short int shortint{ 234 };
signed short int signedshort{ 284 };
unsigned short int unsignedshort{ 245 };

//short int cannot do arithmetic functions (+, -, *, /, %)
//auto result = short1 + short2; (numbers will be automatically converted to int - 4 bytes in memory)

int integer{ 8 }; //4 bytes in memory
signed int signedint{ 3 };
unsigned int unsignedint{ 6 };

long longvar{ 299 }; //4 OR 8 bytes in memory
long int longint{ 123 };
signed long int signedlongint{ 128 };
unsigned long int unsignedlongint{ 238 };

long long llong{ 2388 }; //8 bytes in memory
long long int llongint{ 2382 };
signed long long int signedllongint{ 2347 };
unsigned long long int unsignedllongint{ 2348 };

//scientific notation
static double scinum1{ 1.93004e7 };

//variables are case sensitive

inline void thesizeof(int x) {

	cout << "the size of the number is: " << sizeof(x) << endl; //prints the size of an object in bytes (1 byte = 8 bits)

}

inline void limitsfornum() {

	cout << "range for short" << numeric_limits<short>::min() << "to" << numeric_limits<short>::max() << endl;
	cout << "range for unsigned short" << numeric_limits<unsigned short>::min() << "to" << numeric_limits<unsigned short>::max() << endl;
	
	cout << "range for short" << numeric_limits<int>::min() << "to" << numeric_limits<int>::max() << endl;
	
	cout << "range for float (lowest)" << numeric_limits<float>::lowest() << "to" << numeric_limits<float>::max() << endl;


}

//-------------------- math ---------------------------

inline void roundnum() {

	double numtoround{ 9.6 };

	cout << "9.6 rounded floor is " << floor(numtoround) << endl;
	cout << "9.6 rounded to ceiling is " << ceil(numtoround) << endl;

}

inline void numtopower() {

	cout << "3 to the power of 3 is " << pow(3, 3) << endl;
	cout << "2 to the power of 4 is " << pow(2, 4) << endl;

}

inline void rootof() {

	cout << "sq root of 4 is " << sqrt(4) << endl;
	cout << "sq root of 9 is " << sqrt(9) << endl;

}

inline void roundnum() {

	cout << "3.654 is rounded to " << round(2.5) << endl; //2.5 --> 3, 2.4 --> 2

}