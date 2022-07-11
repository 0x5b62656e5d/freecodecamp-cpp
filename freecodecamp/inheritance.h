#pragma once
#include "main.h"

//other functions (ignore)



//building class on top of other classes

class Person {

	friend ostream& operator<< (ostream& out, const Person& person);

public:
	Person() = default;
	Person(string& fname_param, string& lname_param);
	~Person();

	const string get_fname() const { return first_name; }
	const string get_lname() const { return last_name; }

private:
	string last_name{ "Mysterious" };
	string first_name{ "Person" };

};

class Player : public Person { //syntax to derive from class

	friend ostream& operator<< (ostream& out, const Player& player);

public:
	Player() = default;
	Player(string_view game_param);
	~Player();

private:
	string m_game{ "None" };

};



class test {
	
private:
	int testint{ 0 };

public:

	test() = default;
	test(int num) { testint = num; }

	void reset(test& test1) { testint = 0; }

	friend void reset2(test& test1) { testint = 0; }

};