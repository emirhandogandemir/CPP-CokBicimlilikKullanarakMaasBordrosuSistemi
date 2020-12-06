
#include <iostream>
#include <vector>
#include "Employee.h"
#include "Date.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
using namespace std;
void virtualPointer(const Employee* const);
int main()
{


	Date birthDayEmirhan(6, 30, 2000);
	Date birtDayMehmet(7, 28, 1996);
	Date birtDayHasan(8, 12, 1990);



	SalariedEmployee salariedEmployee("emirhan", "Dogandemir", "111-15-98-41-94", birthDayEmirhan, 5000);
	CommissionEmployee commissionEmployee("mehmet", "yildirim", "111-111-111-11", birtDayMehmet, 10000, 0.6);
	BasePlusCommissionEmployee basePlusCommissionEmployee("hasan", "huseyin", "33-23-223-44", birtDayHasan, 5000, 0.4, 500);





	cout << "polimorfizm kullanilarak :(dinamik baglama yazdirimi)" << endl;
	vector <Employee*>employees(3);
	employees[0] = &salariedEmployee;
	employees[1] = &commissionEmployee;
	employees[2] = &basePlusCommissionEmployee;
	for (Employee* employeePtr : employees) {

		virtualPointer(employeePtr);
	}
}
void virtualPointer(const Employee* const baseClassPtr) {
	int guncelAy = 7;
	if (baseClassPtr->getBirtDay().getMonth() == guncelAy) {
		cout << "Dogum gununuz kutlu olsun" << endl;
		int age = baseClassPtr->earnings() + 100;
		cout << "dogumgunu ikramiyesi ile kazanciniz : " << "\n $ new earned : ";
		cout << age << "\n";
	}
	baseClassPtr->print();
	cout << "\n$ earned : " << baseClassPtr->earnings() << "\n\n\n";

}