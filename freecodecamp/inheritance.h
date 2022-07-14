#pragma once
#include "main.h"

//other functions (ignore)

void printplayer();

//building class on top of other classes

class Person {

	friend ostream& operator<< (ostream& out, const Person& person);

public:
	Person() = default;
	Person(string& fname_param, string& lname_param);
	//~Person();

	void setname(string_view fname, string_view lname);

	const string get_fname() const { return first_name; }
	const string get_lname() const { return last_name; }

private:
	string first_name{ "Mysterious" };
	string last_name{ "Person" };

};


class Player : public Person { //syntax to derive from class
	//class Player derived from class Person

	friend ostream& operator<< (ostream& out, const Player& player);

public:
	Player() = default;
	Player(string_view game_param);
	//~Player();

private:
	string m_game{ "None" };

};