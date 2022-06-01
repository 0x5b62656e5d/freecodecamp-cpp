#pragma once
#include "main.h"

void useexception() {

	for (size_t i{}; i < 1000000000; i++) {

		try {
			int* lots_of_ints{ new int[1000000] }; //will try this

		}
		catch (exception& ex) {
			cout << "Exception: " << ex.what() << endl; //will do this if try fails

		}

	}

}

void usenothrow() {

	for (size_t i{}; i < 100000000; i++) {

		int* lots_of_ints{ new(nothrow) int[10000000] };

		if (lots_of_ints == nullptr) {
			cout << "Memory allocation failed" << endl;

		}
		else {	
			cout << "Memory allocation succeeded" << endl;

		}

	}

}