#include "Student.h"

Student::Student(int id, string n) : User(id, n)
{
}

void Student::displayMenu()
{
    cout << "\nStudent Menu" << endl;
}
