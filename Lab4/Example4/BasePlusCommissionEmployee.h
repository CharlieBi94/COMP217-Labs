/*
* Ref. 12.15
* for example 4
*/

#pragma once
#include <string>
#include "CommissionEmployee.h"

using std::string;

class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
	BasePlusCommissionEmployee(const string&, const string&, const string&, double = 0.0, double = 0.0, double = 0.0);
	virtual ~BasePlusCommissionEmployee() = default; //virtual destructor

	void setBaseSalary(double);
	double getBaseSalary() const;

	virtual double earnings() const override;
	virtual string toString() const override;
private:
	double baseSalary;	// Base salary
};
