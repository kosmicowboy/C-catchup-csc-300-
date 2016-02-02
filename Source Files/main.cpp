#include <iostream>
#include <vector>
#include "../Header Files/definitions.h"

using namespace std;

int main() {

    Employee e;
    Employee e2("bob", 100000);
    Manager m("Kim", 50000, "CS" );
    Executive ex("Johnson", 120000, "Math", "chair");
    e.print();
    e2.print();
    m.print();
    ex.print();
    cout << e2.getSalary() << endl;
    e2.setName("John");
    e2.print();
    ex.setName("bobo the clown");
    ex.setTitle("chief clown");
    ex.print();

    cout << "assigning executive to new employee \n";
    Employee newE = ex;//can assign executive to employee variable, but not the other way around
    newE.print();

    cout << "Creating a pointer and pointing it to employee 2 \n";
    Employee* eptr = NULL; //initialize to null, point nowhere
    eptr = &e2; // returns address of e2 and assigns it to pointer eptr; & is the address operator
    eptr->print(); //accessing a member function of a referenced object

    cout << "Creating a pointer to reference an object in the heap to be created upon runtime \n";
    //dynamically allocate memory for an Employee object
    Employee *eptr2 = new Employee("Dynamic", 10000); //new will allocate memory and return address upon compile time,
    //will not create actual object until runtime reaches this point in the code
    eptr2->print();

    cout << "deleting the eptr2 object in the heap \n";
    delete eptr2;//deletes the object that eptr2 was pointing to, but the pointer itself still exists
    eptr2 = NULL;

    //polymorphism
    cout << "Polymorphism" << "\n";
    vector<Employee*> base(3); //vector of 3 objects of the same base class
    base[0] = &e2; //base class employee
    base[1] = &m; //class manager
    base[2] = &ex; //class executive
    for (int i = 0; i < 3; i++)
        base[i]->print();
    //add virtual to method so it checks what type of object it is, and which method to run (and not just base class method)


    return 0;
}