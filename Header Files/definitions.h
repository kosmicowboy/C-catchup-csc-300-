//
// Created by Kyle on 2/1/16.
//

#ifndef PROJECT_1_CSC_300_DEFINITIONS_H
#define PROJECT_1_CSC_300_DEFINITIONS_H

#include <iostream>
#include <string>

using namespace std;

class Employee
{
public:
    Employee();
    Employee(string n, double s);
    void setName(string n);
    string getName() const;
    void setSalary(double s);
    double getSalary() const;
    virtual void print() const;
private:
    string name;
    double salary;

};

class Manager :public Employee
{
public:
    Manager(string n, double s, string d);
    void setDepartment(string s);
    string getDepartment() const;
    virtual void print() const;
private:
    string department;
};

class Executive :public Manager
{
public:
    Executive(string n, double s, string d, string t);
    void setTitle(string t);
    string getTitle() const;
    virtual void print() const;
private:
    string title;
};



#endif //PROJECT_1_CSC_300_DEFINITIONS_


