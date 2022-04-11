#include <iostream>
#include "Employee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"

//******************************************************************************
// Function:    main
//
// Description:	Demonstrate Inheritance
//              Declare a base class object and a derived class object.
//              call functions on both objects.
//
// Parameters:	none
//
// Returned:		exit status
//******************************************************************************

int main () {
  Employee cEmployee;
  while (cEmployee.read (std::cin)) {
    cEmployee.print (std::cout);
    std::cout << std::endl;
  }

  std::cin.clear (); // clears all stream flags
  HourlyEmployee cHourlyEmployee;
  while (cHourlyEmployee.read (std::cin)) {
    cHourlyEmployee.print (std::cout);
    std::cout << std::endl;
  }

  std::cin.clear ();
  SalariedEmployee cSalariedEmployee;
  while (cSalariedEmployee.read (std::cin)) {
    cSalariedEmployee.print (std::cout);
    std::cout << std::endl;
  }

  return EXIT_SUCCESS;
}