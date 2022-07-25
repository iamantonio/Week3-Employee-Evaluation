#include "Employee.h"
#include <iostream>

// method definition for the accessors
void Employee::set_first_name(std::string first_name) {
	First_Name = first_name;
}
void Employee::set_last_name(std::string last_name) {
	Last_Name = last_name;
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

