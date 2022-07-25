#include <iostream>
#include "Employee.h"
#include "Manager.h"

int main() {
	Employee* employee = new Employee("Antonio", "Vargas", 5, "Brand new employee.", 97000);
	employee->PrintValues();
	Manager* manager = new Manager("Jose", "Del Rio", 5, "Covers the Chicagoland area", 120000, "Area Manager", "Construction and Engineering");
	manager->PrintValues();
	return 0;
}