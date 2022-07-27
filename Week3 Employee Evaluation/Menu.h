// Menu header file created by Antonio Vargas. 
// Header file holds the Menu class and its attributes

#pragma once
#include <iostream>
// created the class menu for the program
class Menu
{
	// declared friend class to access attributes of Employee and Manager classes
	friend class Employee; 
	friend class Manager;
private:
	int Choice;
	int EmpChoice;
	bool isValid = false;
	int printOption;
	int goBack;
public:
	void Main_Menu(); // declared function for main menu
	void int_validator(); // declared function for integer validator
};

