#include "Manager.h"
#include <iostream>

double Manager::get_salary() {
	return Salary;
}
int Manager::get_efficiency_rating() {
	return Efficiency_Rating;
}

void Manager::set_title(std::string title) {
	Title = title;
}
void Manager::set_department(std::string department) {
	Department = department;
}

void Manager::PrintValues() {
	Employee::PrintValues();
	std::cout << "Manager Title: \t\t\t" << Title << std::endl;;
	std::cout << "Manager Department: \t\t" << Department << std::endl;
}
