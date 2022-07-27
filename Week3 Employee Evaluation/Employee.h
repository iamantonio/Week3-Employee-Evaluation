#pragma once
#include <iostream>

class Employee // base class
{
public:
	Employee(std::string first_name, std::string last_name, int efficiency_rating, std::string notes, double salary) { // base constructor
		set_first_name(first_name);
		set_last_name(last_name);
		set_efficiency_rating(efficiency_rating);
		set_salary(salary);
		set_notes(notes);
	}
	~Employee() {
		std::cout << "Destructor Invoked\n";
	}
	// setting up the virtual accessors. 
	virtual void set_first_name(std::string first_name);
	virtual void set_last_name(std::string last_name);
	virtual void set_salary(double salary);
	virtual void set_notes(std::string);
	virtual void set_efficiency_rating(int efficiency_rating);
	// setting up the virtual getters.
	virtual std::string get_first_name();
	virtual std::string get_last_name();
	virtual double get_salary();
	virtual int get_efficiency_rating();
	// virtual method to output all information stored in Employee class.
	virtual void PrintValues();
	
private:
	std::string First_Name;
	std::string Last_Name;	
	std::string Notes;
protected:
	double Salary;
	int Efficiency_Rating;

};

