#ifndef EMPLOYEE_H
#define EMPLOYEE_H	
#include "Date.h"
#include <string>

class Employee
{
public:
	Employee(const std::string&, const std::string&, const std::string&, const Date&);

	virtual ~Employee() {}//sanal yýkýcý

	void setFirstName(const std::string&);
	std::string getFirstName()const;

	void setLastName(const std::string&);
	std::string getLastName()const;

	void setSocialSecurityNumber(const std::string&);
	std::string getSocialSecurityNumber()const;

	Date getBirtDay()const;
	virtual double earnings() const = 0;

	virtual void print() const;
private:
	std::string firstName;
	std::string lastName;
	std::string socialSecurityNumber;
	const Date birtday;
};

#endif // !
