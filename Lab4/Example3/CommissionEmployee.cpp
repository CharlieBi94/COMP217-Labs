/*
Ref. 12.14
CommissionEmployee for example 3
*/
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "CommissionEmployee.h"

using namespace std;


CommissionEmployee::CommissionEmployee(const std::string& fName, const std::string& lName, const std::string& ssn, double sales, double rate) : Employee(fName, lName, ssn)
{
	
	setGrossSales(sales);
	setCommissionRate(rate);

}


void CommissionEmployee::setCommissionRate(double rate)
{
	if (rate <= 0.0 || rate > 1.0) {
		throw invalid_argument("Commission rate must be > 0.0 and < 1.0");
	}

	commissionRate = rate;
}

double CommissionEmployee::getCommissionRate() const {

	return commissionRate;
}

void CommissionEmployee::setGrossSales(double sales)
{
	if (sales < 0.0) {
		throw invalid_argument("Gross sales bust be >= 0.0");
	}

	grossSales = sales;
}

double CommissionEmployee::getGrossSales() const {

	return grossSales;
}

double CommissionEmployee::earnings() const {

	return getCommissionRate() * getGrossSales();
}

string CommissionEmployee::toString() const {

	ostringstream output;
	output << fixed << setprecision(2);

	output << "Commission Employee: " << Employee::toString()
		<< "\ngross sales: " << getGrossSales()
		<< "; commission rate: " << getCommissionRate();

	return output.str();
}
