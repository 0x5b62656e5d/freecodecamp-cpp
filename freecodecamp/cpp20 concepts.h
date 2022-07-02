#pragma once
#include "main.h"

//syntax 1

template <typename T>
requires integral <T> //can also use type traits (std::is_integral_v)
T add(T a, T b) { return a + b; }

//requires an integer for function to work

//syntax 2

template <integral T>
T add(T a, T b) { return a + b; }

//declare concept in template line

//syntax 3

auto add(integral auto a, integral auto b) { return a + b; }

//auto to setup function template
//will enfore both params to satisfy "integral" concept

//syntax 4

template <typename T>
T add(T a, T b) requires integral <T> { return a + b; }

//enforce integral concept after function params list


//build ur own concept
//syntax 1

template <typename T>
concept MyIntegral = is_integral_v<T>;

//syntax 2

template <typename T>
concept Multipliable = requires(T a, T b) { a * b; };

//syntax 3

template <typename T>
concept Incrementable = requires(T a) {
	a += 1;
	++a;
	a++;

};

//using custom concepts
//syntax 1

template <typename T>
requires MyIntegral<T>
T add_1(T a, T b) { return a + b; };

//syntax 2

template <MyIntegral T>
T add_2(T a, T b) { return a + b; };

//syntax 3

auto add_3(MyIntegral auto a, MyIntegral auto b) { return a + b; };