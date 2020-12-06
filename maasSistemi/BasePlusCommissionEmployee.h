#ifndef BASEPUS_H
#define BASEPLUS_H
#include "CommissionEmployee.h"

class BasePlusCommissionEmployee :public CommissionEmployee
{
public:
	BasePlusCommissionEmployee(const std::string&, const std::string&, const std::string&, Date&, double = 0.0, double = 0.0, double = 0.0);
	virtual ~BasePlusCommissionEmployee() {}//SANAL YIKICI,


	void setBaseSalary(double);
	double getBaseSalary() const;

	virtual double earnings()const override;
	virtual void print()const override;

private:
	double baseSalary;
};
#endif // !BASEPUS_H

