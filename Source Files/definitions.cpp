//
// Created by Kyle on 2/1/16.
//

#include "../Header Files/definitions.h"

Employee::Employee()
{
    name = "none";
    salary = 0;
}

Employee::Employee(string n, double s)
{
    name = n;
    salary = s;
}

void Employee::setName(string n)
{
    name  = n;
}

string Employee::getName() const
{
    return name;
}

void Employee::setSalary(double s)
{
    salary = s;
}

double Employee::getSalary() const
{
    return salary;
}

void Employee::print() const
{
    cout << "name = " << name << "\n";
    cout << "salary = $" << salary << "\n";
}

Manager::Manager(string n, double s, string d)
        : Employee(n, s)
{
    department = d;
}

void Manager::setDepartment(string s)
{
    department = s;
}

string Manager::getDepartment() const
{
    return department;
}

void Manager::print() const
{
    Employee::print();
    cout << "Department = " << getDepartment() << "\n";
}

Executive::Executive(string n, double s, string d, string t)
        :Manager(n, s, d)
{
    title = t;
}

void Executive::setTitle(string t)
{
    title = t;
}

string Executive::getTitle() const
{
    return title;
}

void Executive::print() const
{
    Manager::print();
    cout << "Title = " << getTitle() << "\n";
}



