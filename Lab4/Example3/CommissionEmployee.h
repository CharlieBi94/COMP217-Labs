/*
Ref. 12.13
Commission employee for example 3
*/

#pragma once
#include <string>
#include "Employee.h"

class CommissionEmployee : public Employee {

public:
	CommissionEmployee(const std::string&, const std::string&, const std::string&, double = 0.0, double = 0.0);
	virtual ~CommissionEmployee() = default;

	void setGrossSales(double);
	double getGrossSales() const;

	void setCommissionRate(double);
	double getCommissionRate() const;

	virtual double earnings() const override;
	virtual std::string toString() const override;

private:
	double grossSales;
	double commissionRate;
};
