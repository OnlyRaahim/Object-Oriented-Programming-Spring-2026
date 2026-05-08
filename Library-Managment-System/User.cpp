#include "User.h"

User::User(int id, string n)
{
    userID = id;
    name = n;
}

void User::showDetails()
{
    cout << "User ID: " << userID << endl;
    cout << "Name: " << name << endl;
}
