//********************************************************************** 
// File name:	 HourlyEmployee.h
// Author:		 Computer Science, Pacific University
// Date:		   
// Class:		   CS 250
// Assignment: Inheritance 
// Purpose:		 Demonstrate Inheritance
//**********************************************************************
#pragma once

#include <iostream>
#include <string>
#include "Employee.h"

class HourlyEmployee : public Employee {
public:
	HourlyEmployee ();
	HourlyEmployee (const std::string &rcName, const std::string &rcSSN, 
		double wageRate, double hoursWorked);

	double getPay () const;
	void addWorkedHours (double additionalHours);
	void print (std::ostream &rcOut) const;
	bool read (std::istream &rcIn);

private:
	double mWageRate;
	double mHoursWorked;
};