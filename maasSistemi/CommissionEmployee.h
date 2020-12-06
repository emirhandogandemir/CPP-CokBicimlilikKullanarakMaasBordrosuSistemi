#ifndef COMMISSION_H
#define COMMISSION_H
#include <string>
#include "Employee.h"

class CommissionEmployee :public Employee
{
public:
	CommissionEmployee(const std::string&, const std::string&, const std::string&, Date&, double = 0.0, double = 0.0);
	virtual ~CommissionEmployee() {}//sanal yýkýcý

	void setCommissionRate(double);
	double getCommissionRate()const;

	void setGrossSales(double);
	double getGrossSale()const;


	virtual double earnings()const override;
	virtual void print()const override;

private:
	double grossSales;
	double commissionRate;
};
#endif //!COMMISSION_H

