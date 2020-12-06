#include "SalariedEmployee.h"
#include <iostream>
using namespace std;

SalariedEmployee::SalariedEmployee(const string& first, const string& last, const string& ssn, Date& bday, double salary)
	:Employee(first, last, ssn, bday)
{
	setWeeklySalary(salary);
}

void SalariedEmployee::setWeeklySalary(double salary) {
	if (salary > 0) {
		weeklySalary = salary;
	}
	else {
		cout << "iscinin alacagý para 0 dan az olamaz";
	}
}
double SalariedEmployee::getWeeklySalary()const {
	return weeklySalary;
}
double SalariedEmployee::earnings()const {
	return getWeeklySalary();
}
void SalariedEmployee::print()const {
	cout << "salaried employee: ";
	Employee::print();
	cout << "\n weekly salary : " << getWeeklySalary();
}
