#include <iostream>
#include "Employee.h"

int main() {
	Employee* employee = new Employee("Antonio", "Vargas", 5, "Brand new employee.", 97000);
	employee->PrintValues();
	return 0;
}