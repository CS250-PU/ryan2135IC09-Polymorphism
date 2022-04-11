//********************************************************************** 
// File name:	 SalariedEmployee.h
// Author:		 Computer Science, Pacific University
// Date:		   
// Class:		   CS 250
// Assignment: Inheritance 
// Purpose:		 Demonstrate Inheritance
//**********************************************************************
#pragma once

#include <string>
#include <iostream>
#include "Employee.h"


class SalariedEmployee : public Employee {
public:
  SalariedEmployee ();
  SalariedEmployee (const std::string &rcName, const std::string &rcSSN, 
    double salary);

  double getPay () const;

  void print (std::ostream &rcOut) const;
  bool read (std::istream &rcIn);

  double getMonthlyPay () const;

private:
  double mSalary;
};