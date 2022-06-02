/*
Ref 12.17 Abstract classes
Demonstrating how virtual abstract classes allow for easy polymorphism of derived class using pointers
*/


#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"


using namespace std;

void virtualViaPointer(const Employee* const);

void virtualViaReference(const Employee&);

int main() {


	cout << fixed << setprecision(2);

	//create derived class objects

	SalariedEmployee salariedEmployee("John", "Smith", "111-11-111", 800);
	CommissionEmployee commissionEmployee("Sue", "Jones", "333-33-333", 10000, 0.06);
	BasePlusCommissionEmployee basePlusCommissionEmployee("Bob", "Lewis", "444-44-444", 5000, 0.04, 300);

	//output each Employee's information and earnings using static binding
	cout << "Employees proccessed individually using static binding\n"
		<< "\nearned $ " << salariedEmployee.earnings()
		<< "\n\n"
		<< "\nearned $ " << commissionEmployee.earnings()
		<< "\n\n"
		<< "\nearned $ " << basePlusCommissionEmployee.earnings()
		<< "\n\n";


	//create and initalize vector of 3 base-class pointers
	vector<Employee*> employees{ &salariedEmployee, &commissionEmployee, &basePlusCommissionEmployee };

	cout << "Employees proccessed polymorphically via dynamic binding\n\n";

	// call virtualViaPointer to print each employee's information and earnings using dynamic binding

	for (const Employee* employeePtr : employees) {
		virtualViaPointer(employeePtr);
	}

	//call virtualViaReference to print each Employee's informat and earnings using dynamic binding

	for (const Employee* employeePtr : employees) {
		virtualViaReference(*employeePtr);
	}




}

void virtualViaPointer(const Employee* const baseClassPtr) {

	cout << baseClassPtr->toString()
		<< "\nEarned: $" << baseClassPtr->earnings() << "\n\n";

}

void virtualViaReference(const Employee& baseClassRef) {

	cout<< baseClassRef.toString()
		<< "\nEarned: $" << baseClassRef.earnings() << "\n\n";
}


