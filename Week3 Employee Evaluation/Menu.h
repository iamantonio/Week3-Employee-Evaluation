#pragma once
#include <iostream>

class Menu
{
	friend class Employee;
	friend class Manager;
private:
	int Choice;
	int EmpChoice;
	
	int goBack;
public:
	void Main_Menu();
};

