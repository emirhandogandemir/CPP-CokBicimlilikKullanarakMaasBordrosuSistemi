#include "BasePlusCommissionEmployee.h"
#include <iostream>
using namespace std;

//kurucu
BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string& first, const string& last, const string& ssn, Date& bday, double sales, double rate, double salary)
	:CommissionEmployee(first, last, ssn, bday, sales, rate)
{
	setBaseSalary(salary);
}
void BasePlusCommissionEmployee::setBaseSalary(double salary) {
	if (salary >= 0.0) {
		baseSalary = salary;
	}
	else
	{
		cout << "baseSalary 0 dan buyuk olmalýdýr";
	}
}
double BasePlusCommissionEmployee::getBaseSalary()const {
	return baseSalary;
}
double BasePlusCommissionEmployee::earnings()const {
	return getBaseSalary() + CommissionEmployee::earnings();
}
void BasePlusCommissionEmployee::print()const {
	cout << "base salaried : ";
	CommissionEmployee::print();
	cout << "; baseSalary : " << getBaseSalary();
}
