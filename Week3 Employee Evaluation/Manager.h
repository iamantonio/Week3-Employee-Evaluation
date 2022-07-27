// Manager header file created by Antonio Vargas. 
// Header file holds the Manager class and its attributes

#pragma once
#include "Employee.h"

class Manager : 
    public Employee // Manager class derived from base class Employee
{
public:
    // Manager class constructor
    Manager(std::string first_name, std::string last_name, int efficiency_rating, std::string notes, double salary, std::string title, std::string department) :
        Employee(first_name, last_name, efficiency_rating, notes, salary) {
        set_title(title);
        set_department(department);
    }
    virtual double get_salary();
    virtual int get_efficiency_rating();

    virtual void set_title(std::string title);
    virtual void set_department(std::string department);

    virtual void PrintValues();

private:
    std::string Title;
    std::string Department;
};

