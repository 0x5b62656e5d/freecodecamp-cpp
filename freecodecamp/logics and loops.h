#pragma once
#include "main.h"

//ternary operator
//can also do ternary initialization
//int speed { (bool) ? 300 : 150};
inline void ternaryop() {

	int result{};
	int tern1{ 10 };
	int tern2{ 20 };
	result = (tern1 > tern2) ? tern1 : tern2;
	/*is also equivalent to
	if (tern1 > tern2) {

		result = tern1;

	} else {

		result = tern2;

	}
	*/

}

inline void whattool() {

	const int pen{ 10 };
	const int marker{ 20 };
	const int eraser{ 30 };

	int tool{ pen };

	switch (tool) {

	case pen: {
		cout << "pen is active" << endl;

	}
			break;

	case marker: {
		cout << "marker is active" << endl;

	}
			   break;

	case eraser: {
		cout << "eraser is active" << endl;

	}
			   break;

	default: {
		cout << "no tool active" << endl;

	}

	}

}

//for loop
inline void forloop() {

	for (int i{}; i < 10; i++) { //for (init variable; condition; what to do after each iteration)
		cout << "this is the " << i << "th operation" << endl;

	}

	for (size_t i{}; i < 10; i++) { //for (init variable; condition; what to do after each iteration)
		//size_t = type alias for unsigned int (is not a type)
		cout << "this is the " << i << "th operation" << endl;

	}

}

//do while loop
inline void dowhile() {

	size_t i{ 10 };
	
	do {
		cout << i << "th iteration" << endl;
		i++;

	} while (i < 10);

}