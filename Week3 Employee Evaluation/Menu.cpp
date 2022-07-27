// Menu.cpp file created by Antonio Vargas. This file holds main menu functionality of the program



#include "Menu.h"
#include <iostream>
#include "Employee.h"
#include "Manager.h"
#include <string>

void Menu::int_validator() { // method for the int validator
	if (std::cin.good())
	{
		// if valid integer entered by user exit loop by updating isValid to true
		isValid = true;
	}
	else
	{
		// if user did not enter a valid integer then error and will need to re-enter
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Please enter a valid integer!" << std::endl;
	}
}
// using pointers for classes
Employee* emp = new Employee("", "", 1, "", 1);
Manager* mgr = new Manager("", "", 1, "", 1, "", "");
// variables to pass to classes after user inputs
std::string first_name;
std::string last_name;
std::string title;
std::string department;
int eff_rating = 0;
std::string notes;
double salary;


// Main menu definition
void Menu::Main_Menu() {
	
	do
	{ // The main menu 
		std::cout << " *****************************************************" << std::endl;
		std::cout << " ********************* Main Menu *********************" << std::endl;
		std::cout << " *****************************************************" << std::endl;
		std::cout << " 1: Enter Employee Evaluation\n 2: Enter Manager Evaluation\n 3: Print Evaluation\n 4: Quit" << std::endl;
		std::cout << "\n Enter your choice: ";
		std::cin >> Choice;		
		// created switch / case loop for the menu option
		switch (Choice)
		{
		case 1:
			system("CLS"); // clear screen when user enters into sub-menu
			std::cout << "************** Employee Evaluation **************" << std::endl; // start of employee evalution inputs
			std::cout << "Employee First Name: ";			
			std::cin >> first_name;
			emp->set_first_name(first_name);
			std::cout << "Employee Last Name: ";			
			std::cin.ignore(); // this is to ignore the enter button after entering the first name
			std::getline(std::cin, last_name); // using getline here in case users have multiple last names
			emp->set_last_name(last_name); // pass last name to employee class
			std::cout << "Employee Efficiency Rating: ";			
			std::cin >> eff_rating;
			while (eff_rating <= 0 || eff_rating > 5) // i want to make sure the user only enters an integer that is greater than 0 but less than 6
			{
				std::cout << "You must enter a rating between 1 and 5. " << std::endl; // if user enters anything less than 0 or greater than 6
				std::cout << "Employee Efficiency Rating: ";
				std::cin >> eff_rating;
			}
			emp->set_efficiency_rating(eff_rating); // passing eff rating to emp class			
			std::cout << "Employee Notes: ";
			std::cin.ignore(); 
			std::getline (std::cin,notes); // used get lines for spaces in notes
			emp->set_notes(notes);
			do // using loop as part of the validator, isValid is set to false
			{
				std::cout << "Employee Salary: ";
				std::cin >> salary;
				int_validator(); // using the int_validator to make sure that only an int is entered. 
				emp->set_salary(salary);

			} while (!isValid); // run loop until isValid is true and will only turn true if valid int is entered.
			// after user enters information they can either enter a int to save the inputs and go back to main menu, or enter a char to re-enter employee evaluation but will loose whatever they entered previously.
			std::cout << "Thank you!!\nEnter an integer to save employee evaluation and go back to the Main Menu\n\nEnter a character to go back to enter a different employee evaluation (Note that you will loose currently entered employee)." << std::endl;
			std::cin >> goBack;
			if (goBack == 1)
			{
				system("CLS");
				break;
			}
			else {
				system("CLS");
				break;
			}
		case 2:  // manager evaluation is similar to employee evaluation
			system("CLS");
			std::cout << "**** Manager Evaluation ****" << std::endl;
			std::cout << "Manager First Name: ";
			std::cin >> first_name;
			mgr->set_first_name(first_name);
			std::cout << "Manager Last Name: ";
			std::cin.ignore();
			std::getline(std::cin, last_name);
			mgr->set_last_name(last_name);
			std::cout << "Manager Title: ";
			std::getline(std::cin, title);
			mgr->set_title(title);
			std::cout << "Manager Department: ";
			std::getline(std::cin, department);
			mgr->set_department(department);
			do
			{
				std::cout << "Manager Efficiency Rating: ";
				std::cin >> eff_rating;
				int_validator();
				while (eff_rating <= 0 || eff_rating > 5)
				{
					std::cout << "You must enter a rating between 1 and 5. " << std::endl;
					std::cout << "Manager Efficiency Rating: ";
					std::cin >> eff_rating;
				}
				mgr->set_efficiency_rating(eff_rating);
			} while (!isValid);			
			std::cout << "Manager Notes: ";
			std::cin.ignore();
			std::getline(std::cin, notes);
			mgr->set_notes(notes);
			isValid = false;
			do
			{
				std::cout << "Manager Salary: ";
				std::cin >> salary;
				int_validator();
				mgr->set_salary(salary);

			} while (!isValid);
			std::cout << "Thank you!!\nEnter an integer to save manager evaluation and go back to the Main Menu\n\nEnter a character to go back to enter a different Manager evaluation (Note that you will loose currently entered manager)."<< std::endl;
			std::cin >> goBack;
			if (goBack == 1)
			{
				system("CLS");
				break;
			}
			else {
				system("CLS");
				break;
			}

		case 3: // Print evaluation sub-menu
			isValid = false; // making sure that isValid is set to false in case the previous loop set it back to true.
			do
			{
				system("CLS");
				std::cout << "Choose which one to print\n1: Employee Evaluation\n2: Manager Evaluation" << std::endl;
				std::cout << "Enter option: ";
				std::cin >> printOption;
				int_validator();
				if (printOption == 1)
				{
					system("CLS");
					std::cout << "\n*********************Employee Evaluation*********************" << std::endl;
					emp->PrintValues(); // call the print values method from the employee class
				}
				else if (printOption == 2)
				{
					system("CLS");
					std::cout << "\n*********************Manager Evaluation*********************" << std::endl;
					mgr->PrintValues(); // call the print value method from the manager class
				}
				else {
					std::cout << "Enter a valid option." << std::endl;
				}

			} while (!isValid);
			std::cout << "Thank you!!\nEnter an integer to go back to the Main Menu\nEnter a character to go back to print options" << std::endl;
			std::cin >> goBack;
			if (goBack == 1)
			{
				system("CLS");
				break;
			}
			else {
				system("CLS");
				break;
			}
		case 4: // if user wants to quit the program
			std::cout << "Thank you and good bye!" << std::endl;
			break;
		default:
			std::cout << "You didn't enter a valid option, try again!" << std::endl;
			break;
		}

	} while (Choice != 4);

}
