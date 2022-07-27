#include <iostream>
#include "Employee.h"
#include "Manager.h"
#include "Menu.h"

int main() {
	Menu* menu = new Menu; // new object from Menu class
	menu->Main_Menu(); // run main menu from menu object
	return 0;
}