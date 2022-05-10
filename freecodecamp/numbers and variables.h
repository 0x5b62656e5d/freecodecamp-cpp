#include "main.h"

static int a{ 1 }; //brace initialization
static int b(2); //functional init
static int c = 3; //assignment init

signed int negvalue = -300; //signed = modifier to store neg/pos values, unsigned to only store pos value

short shortvar{ 255 }; //2 bytes in memory
short int shortint{ 234 };
signed short int signedshort{ 284 };
unsigned short int unsignedshort{ 245 };

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
unsigned long long int unsigned unsignedllongint{ 2348 };

//scientific notation
static double scinum1{ 1.93004e7 };

//variables are case sensitive

inline void thesizeof(int x) {

	cout << "the size of the number is: " << sizeof(x) << endl; //prints the size of an object in bytes (1 byte = 8 bits)

}
