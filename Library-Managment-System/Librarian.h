#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include "User.h"

class Librarian : public User
{
public:
    Librarian(int id = 0, string n = "");

    void displayMenu();
};

#endif
