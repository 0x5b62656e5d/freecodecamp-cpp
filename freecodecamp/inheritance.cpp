#include "inheritance.h"

void playerobj() {

	Player p1("basketball");

}

//person class

Person::Person(string& fname_param, string& lname_param)
	: first_name(fname_param), last_name(lname_param)
{}

ostream& operator<<(ostream& out, const Person& person) {
	out << "Person [ " << person.get_fname() << " "
		<< person.get_lname() << " ]" << endl;
	return out;

}

//player class

ostream& operator<<(ostream& out, const Player& player) {
	out << "Person [ game: " << player.m_game << ", name: "
		<< player.get_fname() << " " << player.get_lname() 
			<< " ]" << endl;
	return out;

}

Player::Player(string_view game_param)
	: m_game(game_param)
{}


void usetest() {

	test test1(9);
	test test2(10);

	test1.reset(test1);

}