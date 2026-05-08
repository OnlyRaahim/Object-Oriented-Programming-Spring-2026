#include "Librarian.h"

Librarian::Librarian(int id, string n) : User(id, n)
{
}

void Librarian::displayMenu()
{
    cout << "\nLibrarian Menu" << endl;
}
