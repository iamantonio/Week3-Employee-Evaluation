#include "Menu.h"
#include <iostream>

int Menu::Main_Menu() {
	do
	{
		std::cout << "0. Quit Program\n1. Enter Employee Record\n2. Delete Employee Record" << std::endl;
		std::cin >> Choice;

		switch (Choice)
		{
			case 1:
				std::cout << "User entered 1!" << std::endl;
				break;
			case 2:
				std::cout << "User entered 2!" << std::endl;
				break;
			case 0:
				std::cout << "Good bye" << std::endl;
				return 0;

		}

	} while (Choice !=0);
}
