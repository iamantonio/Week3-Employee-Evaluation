/*
* Week 3 Assignment SDEV-340 Employee Evaluation Program by Antonio Vargas created on 7/25
* The base class shall have a constructor that inputs the employee's first and last name, efficiency rating (use 1 through 5), a notes field and their salary.
* Within employee create a virtual destructor and virtual accessors and getters for firstname, last name, efficiency rating and salary. The getSalary() and getFirstName() and getLastName() accessors shall be virtual methods.
* Include a virtual method called PrintValues() that outputs all of the information stored in the base class.
* Create a manager class that inherits from employee. The virtual class shall have a constructor that takes in the same information as the employee class, but also includes the manager's title and department.
* Include virtual methods for getSalary(), getEfficiency() and printValues(). PrintValues() shall output all of the information about the manager.
* Add functionality of your choosing that implements at least one of the Standard Template Libraries found in C++. 
* 
* 
 */


#include <iostream>
#include "Employee.h"
#include "Manager.h"
#include "Menu.h"

int main() {
	Menu* menu = new Menu; // new object from Menu class
	menu->Main_Menu(); // run main menu from menu object
	return 0;
}