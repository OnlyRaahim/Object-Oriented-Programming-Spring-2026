#include "Book.h"

int Book::totalBooks = 0;

Book::Book()
{
    bookID = 0;
    title = "";
    author = "";
    available = true;
}

Book::Book(int id, string t, string a)
{
    bookID = id;
    title = t;
    author = a;
    available = true;
    totalBooks++;
}

void Book::displayBook() const
{
    cout << "Book ID: " << bookID << endl;
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Status: " << (available ? "Available" : "Issued") << endl;
}

void Book::issueBook()
{
    if (!available)
        throw "Book already issued!";

    available = false;
}

void Book::returnBook()
{
    available = true;
}

bool Book::isAvailable() const
{
    return available;
}

int Book::getBookID() const
{
    return bookID;
}

string Book::getTitle() const
{
    return title;
}

string Book::getAuthor() const
{
    return author;
}

int Book::getTotalBooks()
{
    return totalBooks;
}
