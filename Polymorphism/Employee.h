//********************************************************************** 
// File name:	 Employee.h
// Author:		 Computer Science, Pacific University
// Date:		   
// Class:		   CS 250
// Assignment: Inheritance 
// Purpose:		 Demonstrate Inheritance
//**********************************************************************

#pragma once

#include <iostream>
#include <string>

class Employee {
public:
  Employee (const std::string &rcName = "",
    const std::string &rcSSN = "");
  std::string getName () const;
  std::string getSSN () const;
  void print (std::ostream &rcOut) const;
  bool read (std::istream &rcIn);

private:
  std::string mcName, mcSSN;
};

