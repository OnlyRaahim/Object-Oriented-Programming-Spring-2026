#ifndef STUDENT_H
#define STUDENT_H

#include "User.h"

class Student : public User
{
public:
    Student(int id = 0, string n = "");

    void displayMenu();
};

#endif
