#include "inheritance2.h"

//custom constructors in inheritance

ostream& operator<<(ostream& out, const Person2& Person2) {

	out << "Person [" << Person2.m_fullname << "] Age ["
		<< Person2.m_age << "] Address [" << Person2.m_address
		<< "]" << endl;

	return out;

}

ostream& operator<<(ostream& out, const Engineer& Engineer) {

	out << "Person [" << Engineer.get_fullname() << "] Age ["
		<< Engineer.get_age() << "] Address [" << Engineer.get_address()
		<< "] Contract count [" << Engineer.contractcount << "]"
		<< endl;

	return out;
}

ostream& operator<<(ostream& out, const CivilEngineer& operand) {

	out << "Person [" << operand.get_fullname() << "] Age ["
		<< operand.get_age() << "] Address [" << operand.get_address()
		<< "] Contract count [" << operand.get_contract()
		<< "] Speciality [" << operand.m_speciality << "]" << endl;

	return out;
}

Person2::Person2(string_view fullname, int age, string_view address)
	: m_fullname(fullname), m_age(age), m_address(address)
{}

Engineer::Engineer(string_view fullname, int age, 
	string_view address, int contractcount)

	: Person2(fullname, age, address), contractcount(contractcount)
{}

CivilEngineer::CivilEngineer(string_view fullname, int age,
	string_view address, int contractcount, string_view speciality)

	: Engineer(fullname, age, address, contractcount), m_speciality(speciality)
{}
 

//copy constructors in inheritance

Engineer2::Engineer2(const Engineer2& source)
	: Person2(source), contractcount(source.contractcount)
{}

CivilEngineer2::CivilEngineer2(const CivilEngineer2& source)
	: Engineer2(source), m_speciality(source.m_speciality)
{}

Engineer3::Engineer3(const Engineer3& source)
	: Person2(source), contractcount(source.contractcount)
{}