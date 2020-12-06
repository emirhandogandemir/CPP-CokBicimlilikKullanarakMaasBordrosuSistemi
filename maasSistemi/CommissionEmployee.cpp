#include "CommissionEmployee.h"
#include <iostream>
using namespace std;

CommissionEmployee::CommissionEmployee(const string& first, const string& last, const string& ssn, Date& bday, double sales, double rate)
	:Employee(first, last, ssn, bday)
{
	setGrossSales(sales);
	setCommissionRate(rate);
}
void CommissionEmployee::setCommissionRate(double rate) {
	if (rate > 0.0 && rate < 1.0) {
		commissionRate = rate;
	}
	else {
		cout << "o dan buyuk olmalidir";
	}
}
double CommissionEmployee::getCommissionRate()const {
	return commissionRate;
}
void CommissionEmployee::setGrossSales(double sales) {
	if (sales >= 0) {
		grossSales = sales;

	}
	else
	{
		cout << "0 dan buyuk olmalidir";
	}
}
double CommissionEmployee::getGrossSale()const {
	return grossSales;
}
double CommissionEmployee::earnings()const {
	return getCommissionRate() * getGrossSale();
}
void CommissionEmployee::print()const {
	cout << "commission employee : ";
	Employee::print();
	cout << "\ngroos sales : " << getGrossSale();
	cout << "\n commission rate : " << getCommissionRate();
}