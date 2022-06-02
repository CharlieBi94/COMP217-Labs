#include "Employee.h"

Employee::Employee(const std::string& firstName, const std::string& lastName, const std::string& ssn)
{
	setFirstName(firstName);
	setLastName(lastName);
	setSocialSecurityNumber(ssn);
}

void Employee::setFirstName(const std::string& firstName)
{
	this->firstName = firstName;
}

std::string Employee::getFirstName() const
{
	return firstName;
}

void Employee::setLastName(const std::string& lastName)
{
	this->lastName = lastName;
}

std::string Employee::getLastName() const
{
	return lastName;
}

void Employee::setSocialSecurityNumber(const std::string& ssn)
{
	this->socialSecurityNumber = ssn;
}

std::string Employee::getSocialSecurityNumber() const
{
	return socialSecurityNumber;
}


std::string Employee::toString() const
{
	return getFirstName() + " " + getLastName() + "\nSocial Security Number: " + getSocialSecurityNumber();
}
