#pragma once
#include "main.h"


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