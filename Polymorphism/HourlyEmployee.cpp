//********************************************************************** 
// File name:	 HourlyEmployee.cpp
// Author:		 Computer Science, Pacific University
// Date:		   
// Class:		   CS 250
// Assignment: Inheritance 
// Purpose:		 Demonstrate Inheritance
//**********************************************************************

#include <iostream>
#include <string>
#include "Employee.h"
#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee () : Employee (), mWageRate (0),
mHoursWorked (0) {
}

HourlyEmployee::HourlyEmployee (const std::string &rcName,
	const std::string &rcSSN, double wageRate, double hoursWorked) :
	Employee (rcName, rcSSN), mWageRate (wageRate),
	mHoursWorked (hoursWorked) {
}

double HourlyEmployee::getPay () const {
	return mWageRate * mHoursWorked;
}

void HourlyEmployee::addWorkedHours (double additionalHours) {
	mHoursWorked += additionalHours;
}

void HourlyEmployee::print (std::ostream &rcOut) const {
	Employee::print (rcOut);
	rcOut << "Wage: " << mWageRate << " HoursWorked: " << mHoursWorked
		<< " Pay: " << getPay ();
}

std::istream &HourlyEmployee::read (std::istream &rcIn) {
	return Employee::read (rcIn) && (rcIn >> mWageRate >> mHoursWorked));
}