#include "Library.h"

Library* Library::instance = nullptr;

Library* Library::getInstance()
{
    if (instance == nullptr)
        instance = new Library();

    return instance;
}

void Library::addBook()
{
    int id;
    string title, author;

    cout << "Enter Book ID: ";
    cin >> id;

    cin.ignore();

    cout << "Enter Title: ";
    getline(cin, title);

    cout << "Enter Author: ";
    getline(cin, author);

    books.push_back(Book(id, title, author));

    cout << "Book Added Successfully!\n";
}

void Library::displayBooks()
{
    if (books.empty())
    {
        cout << "No books available.\n";
        return;
    }

    for (size_t i = 0; i < books.size(); i++)
    {
        books[i].displayBook();
        cout << "-------------------\n";
    }
}

void Library::searchBook()
{
    int id;
    bool found = false;

    cout << "Enter Book ID: ";
    cin >> id;

    for (size_t i = 0; i < books.size(); i++)
    {
        if (books[i].getBookID() == id)
        {
            books[i].displayBook();
            found = true;
        }
    }

    if (!found)
        cout << "Book not found!\n";
}

void Library::issueBook()
{
    int id;
    bool found = false;

    cout << "Enter Book ID to issue: ";
    cin >> id;

    try
    {
        for (size_t i = 0; i < books.size(); i++)
        {
            if (books[i].getBookID() == id)
            {
                books[i].issueBook();
                cout << "Book issued successfully!\n";
                found = true;
                break;
            }
        }

        if (!found)
            throw "Book ID not found!";
    }
    catch (const char* msg)
    {
        cout << msg << endl;
    }
}

void Library::returnBook()
{
    int id;
    bool found = false;

    cout << "Enter Book ID to return: ";
    cin >> id;

    for (size_t i = 0; i < books.size(); i++)
    {
        if (books[i].getBookID() == id)
        {
            books[i].returnBook();
            cout << "Book returned successfully!\n";
            found = true;
        }
    }

    if (!found)
        cout << "Book not found!\n";
}

void Library::saveToFile()
{
    ofstream file("books.txt");

    for (size_t i = 0; i < books.size(); i++)
    {
        file << books[i].getBookID() << endl;
        file << books[i].getTitle() << endl;
        file << books[i].getAuthor() << endl;
        file << books[i].isAvailable() << endl;
    }

    file.close();

    cout << "Data saved successfully!\n";
}

void Library::loadFromFile()
{
    ifstream file("books.txt");

    if (!file)
        return;

    int id;
    string title, author;
    bool available;

    while (file >> id)
    {
        file.ignore();

        getline(file, title);
        getline(file, author);

        file >> available;

        Book b(id, title, author);

        if (!available)
            b.issueBook();

        books.push_back(b);
    }

    file.close();
}
