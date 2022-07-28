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
	~Person() = default;

	void setname(string_view fname, string_view lname);

	const string get_fname() const { return first_name; }
	const string get_lname() const { return last_name; }

protected: //when using protected, derived classes can read
		//and write from protected members in base class
	string first_name{ "Mysterious" };
	string last_name{ "Person" };

};


class Player : public Person { //syntax to derive from class
	//class Player derived from class Person

	friend ostream& operator<< (ostream& out, const Player& player);

public:
	Player() = default;
	Player(string_view game_param);
	Player(string_view fname, string_view lname, string_view game_param);
	~Player() = default;

private:
	string m_game{ "None" };

};

//resurrecting members from private inheritance
//use "using" keyword in derived class

class Player2 : private Person {

	friend ostream& operator<< (ostream& out, const Player2& player2);

public:
	Player2() = default;
	~Player2() = default;

protected:
	using Person::first_name;
	using Person::last_name; //fname and lname will remain
							//protected in class player2
	using Person::get_fname;
	using Person::get_lname;

};