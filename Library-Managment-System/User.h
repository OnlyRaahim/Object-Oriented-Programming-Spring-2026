#ifndef USER_H
#define USER_H

#include <iostream>
using namespace std;

class User{
protected:
    int userID;
    string name;

public:
    User(int id = 0, string n = "");

    virtual void displayMenu() = 0;

    virtual void showDetails();

    virtual ~User() {}
};


#endif
