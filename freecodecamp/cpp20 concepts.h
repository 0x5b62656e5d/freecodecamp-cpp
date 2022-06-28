#pragma once
#include "main.h"

//syntax 1

template <typename T>
	requires integral <T>
T add(T a, T b) { return a + b; }

//requires an integer for function to work