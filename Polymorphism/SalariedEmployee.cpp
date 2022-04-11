//********************************************************************** 
// File name:	 SalariedEmployee.cpp
// Author:		 Computer Science, Pacific University
// Date:		   
// Class:		   CS 250
// Assignment: Inheritance 
// Purpose:		 Demonstrate Inheritance
//**********************************************************************

#include <iostream>
#include <string>
#include "SalariedEmployee.h"
#include "Employee.h"

SalariedEmployee::SalariedEmployee () : Employee (), mYearlySalary (0) {
}

SalariedEmployee::SalariedEmployee (const std::string &rcName, 
  const std::string &rcSSN, double salary) :
  Employee (rcName, rcSSN), mYearlySalary (salary) {
}

double SalariedEmployee::getPay () const {
  return mYearlySalary;
}

void SalariedEmployee::print (std::ostream &rcOut) const {

  Employee::print (rcOut);

  // OR
  //rcOut << "Name: " << getName() << " SSN: " << getSSN();

  rcOut << " Pay: " << getPay ();
}


bool SalariedEmployee::read (std::istream &rcIn) {
	bool bCompletedRead;

	if (Employee::read (rcIn)) {
		if (rcIn >> mYearlySalary) {
			bCompletedRead = true;
		}
	}
	else {
		bCompletedRead = false;
	}

	return bCompletedRead;
}

double SalariedEmployee::getMonthlyPay () const {
  const double MONTHS_IN_YEAR = 12.0;

  return getPay () / MONTHS_IN_YEAR;
}