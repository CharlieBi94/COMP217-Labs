/*
* From Thursday's lecture
*/

#pragma once
#include <string>
using std::string;

class CommissionEmployee
{
public:
	// Constructor (Prototype)
	CommissionEmployee(const string&, const string&, const string&, double = 0.0, double = 0.0);
	// Gets and Sets (Prototype)
	void setFirstName(const string&);
	string getFirstName() const;

	void setLastName(const string&);
	string getLastName() const;

	void setSocialSecurityNumber(const string&);
	string getSocialSecurityNumber() const;

	void setGrossSales(double);
	double getGrossSales() const;

	void setCommissionRate(double);
	double getCommissionRate() const;

	// Other functions
	double earnings() const;	// Calculate Earnings
	string toString() const;	// Create a string representation

protected:
	string firstName;
	string lastName;
	string socialSecurityNumber;
	double grossSales;	// Gross weekly sales
	double commissionRate;	// Commission Percentage
};