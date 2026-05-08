#ifndef BOOK_H
#define BOOK_H

#include<iostream>
using namespace std;

class Book
{
private:
    int bookID;
    string title;
    string author;
    bool available;
    static int totalBooks;

public:
    Book();
    Book(int id, string t, string a);

    void displayBook() const;
    void issueBook();
    void returnBook();

    bool isAvailable() const;
    int getBookID() const;
    string getTitle() const;
    string getAuthor() const;

    static int getTotalBooks();

    friend class Library;
};

#endif
