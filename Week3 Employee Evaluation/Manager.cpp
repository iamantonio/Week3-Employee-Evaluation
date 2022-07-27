#include "Manager.h"
#include <iostream>

// method to get salary from Manager class
double Manager::get_salary() {
	return Salary;
}
// method to get efficiency rating
int Manager::get_efficiency_rating() {
	return Efficiency_Rating;
}

// set title for manager
void Manager::set_title(std::string title) {
	Title = title;
}
// set department
void Manager::set_department(std::string department) {
	Department = department;
}
// override print value method from employee class 
void Manager::PrintValues() {
	Employee::PrintValues();
	std::cout << "Manager Title: \t\t\t" << Title << std::endl;;
	std::cout << "Manager Department: \t\t" << Department << std::endl;
}
