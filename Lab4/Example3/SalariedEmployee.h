/*
Ref 12.11
Salaried employee derived from employee class
*/
#pragma once
#include <string>
#include "Employee.h"

class SalariedEmployee : public Employee {
public:
	SalariedEmployee(const std::string&, const std::string&, const std::string&, double = 0.0);

	virtual ~SalariedEmployee() = default;

	void setWeeklySalary(double);
	double getWeeklySalary() const;


	//calling these functions 'virtual' is redundant
	virtual double earnings() const override;
	virtual std::string toString() const override;

protected:
	double weeklySalary;

};
