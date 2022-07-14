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

void Person::setname(string_view fname, string_view lname) {

	first_name = fname;
	last_name = lname;

}

//player class

void printplayer() {

	Player p1("Basketball");

	p1.setname("Jack", "Joe");

	cout << "player: " << p1 << endl;

}

ostream& operator<<(ostream& out, const Player& player) {
	out << "Person [ game: " << player.m_game << ", name: "
		<< player.get_fname() << " " << player.get_lname() 
			<< " ]";
	return out;

}

Player::Player(string_view game_param)
	: m_game(game_param)
{}