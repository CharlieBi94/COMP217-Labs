/*

Ref 12.1 
Base and Derived class pointers experiment

*/

#include <iostream>
#include <iomanip>
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

using namespace std;

int main() {


	//Create base class
	CommissionEmployee commissionEmployee("Sue", "Jones", "222-22-222", 10000, 0.06);

	//Create derived class
	BasePlusCommissionEmployee basePlusCommissionEmployee("Bob", "Lewis", "333-33-333", 5000, 0.04, 300);

	//Create pointer for base class
	CommissionEmployee* commissionEmployeePtr(&commissionEmployee);

	//Create pointer for derived class
	BasePlusCommissionEmployee* basePlusCommissionEmployeePtr(&basePlusCommissionEmployee);

	cout << fixed << setprecision(2);
	
	//print base and derived class directly:
	cout << "Display Base-class derived class objects:\n" 
		 << commissionEmployee.toString() 
		 << "\n\n" 
		 << basePlusCommissionEmployee.toString();

	//print base class using base typed pointer
	cout << "\n\nCalling toString with base class pointer to"
		<< "\nbase class object invokes base class toString function:\n"
		<< commissionEmployeePtr->toString();

	//print derived class using derived class typed pointer
	cout << "\n\nCalling toString with derived class pointer to"
		<< "\nbase class object invokes derived class toString function:\n"
		<< basePlusCommissionEmployeePtr->toString();

	//print derived class using a base class pointer
	commissionEmployeePtr = basePlusCommissionEmployeePtr;
	cout << "\n\nCalling toString with base class pointer to"
		 << "\nderived class object invokes the base class toString function:\n"
		 << commissionEmployeePtr->toString() << endl;

}
