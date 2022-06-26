#include "main.h"
#include "var.h"
#include "numbers.h"
#include "variables.h"
#include "Output formatting.h"
#include "logics and loops.h"
#include "Data.h"
#include "strings and char.h"
#include "functions.h"
#include "function template.h"

int main() {

	cout << "Hello World!\n" << endl;
	/* cout << hexa << endl;
	cout << scinum1 << endl;

	thesizeof(a);
	asciiID('C');
	nameslist();
	internaljustified();
	fill();
	printstates();
	whattool();
	chararray();

	dynamicarray();

	datafromfunction(); */

	int result = multiply <double>(10, 5);

	cout << "Press enter to continue...";
	cin.get();

	return 0;

}