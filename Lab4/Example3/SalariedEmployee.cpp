/*
SalariedEmployee class definitions
Ref.12.12
*/
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "SalariedEmployee.h"

using namespace std;

SalariedEmployee::SalariedEmployee(const std::string& firstName, const std::string& lastName, const std::string& ssn, double salary) : Employee(firstName, lastName, ssn)
{
	setWeeklySalary(salary);
}

void SalariedEmployee::setWeeklySalary(double salary)
{
	if (salary < 0.0) {
		throw invalid_argument("Weekly salary must be >= 0.0");
	}
	weeklySalary = salary;
}

double SalariedEmployee::getWeeklySalary() const
{
	return weeklySalary;
}

double SalariedEmployee::earnings() const
{
	return getWeeklySalary();
}

std::string SalariedEmployee::toString() const
{
	ostringstream output;
	output << fixed << setprecision(2);
	output << "Salaried employee: "
		<< Employee::toString()
		<< "\nWeekly salary: " << getWeeklySalary();

	return output.str();
}
