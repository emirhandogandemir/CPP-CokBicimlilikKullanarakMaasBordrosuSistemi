
#include "Employee.h"
#include <iostream>
#include "Date.h"
using namespace std;

Employee::Employee(const string& first, const string& last, const string& ssn, const Date& bday)
	:firstName(first), lastName(last), socialSecurityNumber(ssn), birtday(bday)
{

}
void Employee::setFirstName(const string& first) {
	firstName = first;
}

string Employee::getFirstName()const {
	return firstName;
}
void Employee::setLastName(const string& last) {
	lastName = last;
}
string Employee::getLastName()const {
	return lastName;
}
void Employee::setSocialSecurityNumber(const string& ssn) {
	socialSecurityNumber = ssn;
}
string Employee::getSocialSecurityNumber()const {
	return socialSecurityNumber;
}
Date Employee::getBirtDay()const {
	return birtday;
}

void Employee::print()const {
	cout << getFirstName() << " " << getLastName() << "\nsocial security number : " << getSocialSecurityNumber() << endl;
	cout << "birtday : ";
	birtday.print();
}