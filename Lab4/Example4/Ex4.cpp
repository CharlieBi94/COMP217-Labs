/*
Ref 12.19 Case study
Increase all BasePlusCommissionEmployee's base salary by 10%
*/


#include <iostream>
#include <iomanip>
#include <vector>
#include <typeinfo>
#include "Employee.h"
#include "CommissionEmployee.h"
#include "SalariedEmployee.h"
#include "BasePlusCommissionEmployee.h"


using namespace std;

void virtualViaPointer(const Employee* const);

void virtualViaReference(const Employee&);

int main() {


	cout << fixed << setprecision(2);

	//create and initalize vector of 3 base-class pointers
	vector<Employee*> employees{ 
		new SalariedEmployee("John", "Smith", "111-11-111", 800),
		new CommissionEmployee("Sue", "Jones", "333-33-333", 10000, 0.06),
		new BasePlusCommissionEmployee("Bob", "Lewis", "444-44-444", 5000, 0.04, 300)};


	//polymorphically process each element in vector
	for (Employee* employeePtr : employees) {


		cout << employeePtr->toString() << endl;

		//attempt to downcast pointer
		BasePlusCommissionEmployee* derivedPtr =
			dynamic_cast<BasePlusCommissionEmployee*>(employeePtr);

		if (derivedPtr != nullptr) {
			double oldBaseSalary = derivedPtr->getBaseSalary();
			cout << "Old base salary: $" << oldBaseSalary << endl;
			derivedPtr->setBaseSalary(oldBaseSalary * 1.10);
			cout << "New base salary with 10% increase: $" << derivedPtr->getBaseSalary() << endl;
			
		}

		cout << "Earned $" << employeePtr->earnings() << "\n\n";

		
	}


	for (const Employee* employeePtr : employees) {
		//output class name

		cout << "Deleteing object of "
			<< typeid(*employeePtr).name() << endl;
		delete employeePtr;
	}


}

void virtualViaPointer(const Employee* const baseClassPtr) {

	cout << baseClassPtr->toString()
		<< "\nEarned: $" << baseClassPtr->earnings() << "\n\n";

}

void virtualViaReference(const Employee& baseClassRef) {

	cout << baseClassRef.toString()
		<< "\nEarned: $" << baseClassRef.earnings() << "\n\n";
}


