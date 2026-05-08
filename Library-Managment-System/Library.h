#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include <fstream>
#include "Book.h"

using namespace std;

class Library
{
private:
    vector<Book> books;

    static Library* instance;

    Library() {}

public:
    static Library* getInstance();

    void addBook();
    void displayBooks();
    void searchBook();
    void issueBook();
    void returnBook();

    void saveToFile();
    void loadFromFile();
};

#endif
