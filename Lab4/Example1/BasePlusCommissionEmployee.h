/*
* From Thursday's lecture
*/

#pragma once
#include <string>
#include "CommissionEmployee.h"
using std::string;

class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
	BasePlusCommissionEmployee(const string&, const string&, const string&, double = 0.0, double = 0.0, double = 0.0);

	void setBaseSalary(double);
	double getBaseSalary() const;

	double earnings() const;
	string toString() const;
private:
	double baseSalary;	// Base salary
};