/*
* From Thursday's lecture
*/

#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "CommissionEmployee.h"
using namespace std;

CommissionEmployee::CommissionEmployee(const string& first, const string& last, const string& ssn, double sales, double rate)
{
	setFirstName(first);
	setLastName(last);
	setSocialSecurityNumber(ssn);
	setGrossSales(sales);
	setCommissionRate(rate);
}

void CommissionEmployee::setFirstName(const string& first)
{
	firstName = first;
}

string CommissionEmployee::getFirstName() const
{
	return firstName;
}

void CommissionEmployee::setLastName(const string& last)
{
	lastName = last;
}

string CommissionEmployee::getLastName() const
{
	return lastName;
}

void CommissionEmployee::setSocialSecurityNumber(const string& ssn)
{
	socialSecurityNumber = ssn;
}

string CommissionEmployee::getSocialSecurityNumber() const
{
	return socialSecurityNumber;
}

void CommissionEmployee::setGrossSales(double sales)
{
	if (sales < 0.0)
	{
		throw invalid_argument("Gross sales must be >= 0.0");
	}

	grossSales = sales;
}

double CommissionEmployee::getGrossSales() const
{
	return grossSales;
}

void CommissionEmployee::setCommissionRate(double rate)
{
	if (rate <= 0.0 || rate >= 1.0)
	{
		throw invalid_argument("Commission rate must be > 0.0 and < 1.0");
	}

	commissionRate = rate;
}

double CommissionEmployee::getCommissionRate() const
{
	return commissionRate;
}

double CommissionEmployee::earnings() const
{
	return getCommissionRate() * getGrossSales();
}

string CommissionEmployee::toString() const
{
	ostringstream output;
	output << fixed << setprecision(2);	// Two digits of precision
	output << "Employee: " << getFirstName() << " " << getLastName()
		<< "\nSocial Security Number: " << getSocialSecurityNumber()
		<< "\nGross Sales: $" << getGrossSales()
		<< "\nCommission Rate: " << getCommissionRate() * 100 << "%";
	return output.str();
}
