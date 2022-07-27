// Employee.cpp created by Antonio Vargas. This source file hold the definitions for the methods declared in the Employee.h file

#include "Employee.h"
#include <iostream>

// method definition for the accessors
void Employee::set_first_name(std::string first_name) {
	First_Name = first_name;
}
void Employee::set_last_name(std::string last_name) {
	Last_Name = last_name;
}
void Employee::set_notes(std::string notes) {
	Notes = notes;
}
void Employee::set_efficiency_rating(int efficiency_rating) {
	Efficiency_Rating = efficiency_rating;		
}
void Employee::set_salary(double salary) {
	Salary = salary;
}
// method definitions for the gettors
std::string Employee::get_first_name() {
	return First_Name;
}
std::string Employee::get_last_name() {
	return Last_Name;
}
int Employee::get_efficiency_rating() {
	return Efficiency_Rating;
}
double Employee::get_salary() {
	return Salary;
}
// method definition to output values from the Employee class
void Employee::PrintValues() {
	std::cout << "First Name: \t\t" << First_Name << std::endl;
	std::cout << "Last Name: \t\t" << Last_Name << std::endl;
	std::cout << "Efficiency Rating: \t" << Efficiency_Rating << std::endl;
	std::cout << "Salary: \t\t" << Salary << std::endl;
	std::cout << "Notes: \t\t\t" << Notes << std::endl;
	std::cout << std::endl;
}
