/*
Ref. 12.4 virtual functions
*/


#include <iostream>
#include <iomanip>
#include "BasePlusCommissionEmployee.h"
#include "CommissionEmployee.h"

using namespace std;

int main() {
	//create base-class object

	//Create base class
	CommissionEmployee commissionEmployee("Sue", "Jones", "222-22-222", 10000, 0.06);

	//Create derived class
	BasePlusCommissionEmployee basePlusCommissionEmployee("Bob", "Lewis", "333-33-333", 5000, 0.04, 300);

	//Create pointer for derived class using base typed pointer
	CommissionEmployee* commissionEmployeePtr(&basePlusCommissionEmployee);

	//Create derived typed pointer for derived class
	BasePlusCommissionEmployee* basePlusCommissionEmployeePtr(&basePlusCommissionEmployee);

	cout << fixed << setprecision(2);

	//print base and derived class directly:
	cout << "Invoke objects using static binding:\n"
		<< commissionEmployee.toString()
		<< "\n\n"
		<< basePlusCommissionEmployee.toString();

	//print using virtual functions
	cout << "Invoke objects via dynamic binding";

	cout << "\n\nCalling virutal function toString with derived class pointer to derived class object\n"
		<< "invokes derived class toString function\n"
		<< basePlusCommissionEmployeePtr->toString();

	cout << "\n\nCalling virutal function toString with base class pointer to derived class object\n"
		<< "invokes derived class toString function (POLYMORPHISM)\n"
		<< commissionEmployeePtr->toString() << endl;


}