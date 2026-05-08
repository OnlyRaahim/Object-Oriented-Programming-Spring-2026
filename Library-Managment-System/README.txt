Library Management System

Introduction

This project is a simple "Library Management System" made in "C++ using Object Oriented Programming (OOP)" concepts.
The program helps to manage books in a library such as:

* Adding books
* Displaying books
* Searching books
* Issuing books
* Returning books

The project is created for learning purposes and uses basic OOP concepts in an easy way.



Concepts Used in Project

1. Classes and Objects

We create classes like:

* Book
* Library
* Student

Objects of these classes store and manage data.

Example:

Book b1;


Here "b1" is an object of class "Book".



2. Encapsulation

Data and functions are kept together inside classes.

Example:


class Book
{
private:
    string title;

public:
    void setTitle(string t);
};


Private data cannot be accessed directly from outside the class.



3. Constructors

Constructors initialize object data automatically.

Example:

cpp
Book()
{
    title = "Unknown";
}


When object is created, constructor runs automatically.



4. Functions

Functions perform different tasks like:

* addBook()
* searchBook()
* issueBook()
* returnBook()

They make the code organized and reusable.



5. Arrays / Dynamic Memory

Books are stored using arrays or dynamic memory to manage multiple records.

Example:


Book books[100];


This stores multiple books.



What the Program Does

Add Book

User enters:

* Book title
* Author name
* Book ID

The program stores this information.



Display Books

Shows all books available in the library.



Search Book

Searches a book using:

* Book title
* ID



Issue Book

Marks a book as issued to a student.



Return Book

Marks issued book as returned.



How Program Works

1. Program starts with a menu.
2. User selects an option.
3. Corresponding function runs.
4. Data is stored and displayed.
5. Program continues until user exits.


Purpose of Project

This project helps students understand:

1. OOP concepts
2. File handling
3. Classes and objects
4. Functions
5. Arrays
6. Basic C++ project structure



Conclusion

The Library Management System is a beginner-friendly C++ project that demonstrates how OOP concepts are used in real applications. It provides a simple way to manage books and understand programming logic practically.


HOW TO COMPILE:
g++ main.cpp Book.cpp User.cpp Student.cpp Librarian.cpp Library.cpp -o LMS

RUN:
./LMS
