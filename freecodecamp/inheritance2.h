#pragma once
#include "main.h"

//custom constructors in inheritance

class Person2 {

	friend ostream& operator<<(ostream& out, const Person2& Person2);

public:
	Person2() = default;
	Person2(string_view fullname, int age, string_view address);
	~Person2() = default;

public:
	string m_fullname{ "None" };

	string get_fullname() const { return m_fullname; }
	int get_age() const { return m_age; }
	string get_address() const { return m_address; }
	
protected:
	int m_age{ 0 };

private:
	string m_address{ "None" };

};

class Engineer : public Person2 {

	friend ostream& operator<<(ostream& out, const Engineer& Engineer);

public:
	Engineer() = default;
	Engineer(string_view fullname, int age, 
		string_view address, int contractcount);
	~Engineer() = default; 

	int get_contract() const { return contractcount; }

private:
	int contractcount{ 0 };

};

class CivilEngineer : public Engineer {

	friend ostream& operator<<(ostream& out, 
		const CivilEngineer& CivilEngineer);

public:
	CivilEngineer() = default;
	CivilEngineer(string_view fullname, int age,
		string_view address, int contractcount, string_view speciality);
	~CivilEngineer() = default;

	string get_speciality() const { return m_speciality; }

private:
	string m_speciality{ "None" };

};


//copy constructors in inheritance

class Engineer2 : public Person2 {

	friend ostream& operator<<(ostream& out, const Engineer& Engineer);

public:
	Engineer2() = default;
	Engineer2(const Engineer2& source);
	~Engineer2() = default;

	int get_contract() const { return contractcount; }

private:
	int contractcount{ 0 };

};

class CivilEngineer2 : public Engineer2 {

	friend ostream& operator<<(ostream& out,
		const CivilEngineer& CivilEngineer);

public:
	CivilEngineer2() = default;
	CivilEngineer2(const CivilEngineer2& source);
	~CivilEngineer2() = default;

	string get_speciality() const { return m_speciality; }

private:
	string m_speciality{ "None" };

};

//inheriting base constructors

class Engineer3 : public Person2 {

	using Person2::Person2;

	friend ostream& operator<<(ostream& out, const Engineer& Engineer);

public:
	Engineer3(const Engineer3& source);
	~Engineer3() = default;

	int get_contract() const { return contractcount; }

private:
	int contractcount{ 0 };

};

//compiler generated constructor will look like this:
/*
Engineer3(const string& fullname, int age, const string adderss) 
	: Person(fullname, age, address)
{}
*/