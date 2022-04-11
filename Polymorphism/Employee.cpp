//********************************************************************** 
// File name:	 Employee.cpp
// Author:		 Computer Science, Pacific University
// Date:		   
// Class:		   CS 250
// Assignment: Inheritance
// Purpose:		 Demonstrate Inheritance
//**********************************************************************

#include "Employee.h"

#include <iostream>
#include <string>

//**********************************************************************
// Constructor:	Employee
//
// Description:	Initialize the name with the parameter string
//
// Parameters:	name - the name to store in the object
//							ssn  - employee's social security number
//
// Returned:		none
//**********************************************************************
Employee::Employee (const std::string &rcName,
	const std::string &rcSSN) {
	mcName = rcName;
	mcSSN = rcSSN;
}

//**********************************************************************
// Function:	  name
//
// Description:	Retrieve the name of the Employee
//
// Parameters:	none
//
// Returned:		the name of the Employee
//**********************************************************************
std::string Employee::getName () const {
	return mcName;
}

//**********************************************************************
// Function:	  ssn
//
// Description:	Retrieve the ssn of the Employee
//
// Parameters:	none
//
// Returned:		the ssn of the Employee
//**********************************************************************
std::string Employee::getSSN () const {
	return mcSSN;
}

//**********************************************************************
// Function:	  print
//
// Description:	Output the Employee to the stream
//
// Parameters:	rcOutput - the stream to output to
//              cEmp		 - the Employee to output
//
// Returned:		the output stream
//**********************************************************************

void Employee::print (std::ostream &rcOut) const {
	rcOut << "Name: " << mcName << " SSN: " << mcSSN;
}

//**********************************************************************
// Function:	  print
//
// Description:	Output the Employee to the stream
//
// Parameters:	rcOutput - the stream to output to
//              cEmp		 - the Employee to output
//
// Returned:		the output stream
//**********************************************************************

std::istream& Employee::read (std::istream &rcIn) {
	return  rcIn >> mcName >> mcSSN;
}