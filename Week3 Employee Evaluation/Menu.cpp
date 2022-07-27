#include "Menu.h"
#include <iostream>
#include "Employee.h"
#include "Manager.h"
#include <string>

Employee* emp = new Employee("", "", 1, "", 1);
Manager* mgr = new Manager("", "", 1, "", 1, "", "");

std::string first_name;
std::string last_name;
int eff_rating;
std::string notes;
double salary;



void Menu::Main_Menu() {
	
	do
	{
		std::cout << "\t\t ** Main Menu **" << std::endl;
		std::cout << "1: Enter Employee Info\n 2: Enter Manager Info\n3: Display Employee Info\n4: Quit" << std::endl;
		std::cout << "\n Enter your choice: ";
		std::cin >> Choice;

		

		switch (Choice)
		{
		case 1:
			std::cout << "**** Enter Employee Information ****" << std::endl;
			std::cout << "Employee First Name: ";			
			std::cin >> first_name;
			emp->set_first_name(first_name);
			std::cout << "\nEmployee Last Name: ";			
			std::cin >> last_name;
			emp->set_last_name(last_name);
			std::cout << "\nEmployee Efficiency Rating: ";			
			std::cin >> eff_rating;
			emp->set_efficiency_rating(eff_rating);
			std::cout << "\nEmployee Notes: ";
			std::cin.ignore();
			std::getline (std::cin,notes);
			emp->set_notes(notes);
			std::cout << "\nEmployee Salary: ";			
			std::cin >> salary;
			emp->set_salary(salary);
			break;
		case 3:
			emp->PrintValues();
			break;
		default:
			std::cout << "You didn't enter a valid option, try again!" << std::endl;
			break;
		}

	} while (Choice != 4);

}
