#include "Date.h"
#include <array>
#include <iostream>
using namespace std;

Date::Date(int mn, int dy, int yr) {
	if (mn > 0 && mn <= 12) {
		month = mn;
	}
	else
	{
		cout << "giridiginiz ay mantikli bir ay degildir";
	}
	year = yr;
	day = checkDay(dy);


}
unsigned int Date::getMonth()const {
	return month;
}

void Date::print()const {

	cout << month << "/" << day << "/" << year;
}


Date::~Date() {


}
unsigned int Date::checkDay(int testDay) const {
	static const array<int, monthsPerYears + 1>daysPerMonth = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (testDay > 0 && testDay <= daysPerMonth[month])
		return testDay;
	if (month == 2 && testDay == 20 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
		return testDay;
	cout << "gecersiz gun giris islemi yaptiniz";
}
