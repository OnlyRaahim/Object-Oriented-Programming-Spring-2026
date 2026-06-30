#include <iostream>
#include <string>
using namespace std;

class bookType
{
private:
    string title;
    string authors[4];
    int numAuthors;
    string publisher;
    string ISBN;
    double price;
    int yearOfPublication;
    int copiesInStock;

public:
    // Default Constructor
    bookType()
    {
        title = "";
        publisher = "";
        ISBN = "";
        numAuthors = 0;
        price = 0;
        yearOfPublication = 0;
        copiesInStock = 0;
    }

    // Parameterized Constructor
    bookType(string t, string a[], int n, string pub,
             string isbn, double p, int year, int copies)
    {
        title = t;

        if (n > 4)
            numAuthors = 4;
        else
            numAuthors = n;

        for (int i = 0; i < numAuthors; i++)
            authors[i] = a[i];

        publisher = pub;
        ISBN = isbn;
        price = p;
        yearOfPublication = year;
        copiesInStock = copies;
    }

    // Destructor
    ~bookType()
    {
    }

    // Setters
    void setTitle(string t)
    {
        title = t;
    }

    void setPublisher(string p)
    {
        publisher = p;
    }

    void setISBN(string i)
    {
        ISBN = i;
    }

    void setPrice(double p)
    {
        price = p;
    }

    void setYear(int y)
    {
        yearOfPublication = y;
    }

    void setCopies(int c)
    {
        copiesInStock = c;
    }

    void setAuthors(string a[], int n)
    {
        if (n > 4)
            numAuthors = 4;
        else
            numAuthors = n;

        for (int i = 0; i < numAuthors; i++)
            authors[i] = a[i];
    }

    // Getters
    string getTitle()
    {
        return title;
    }

    string getISBN()
    {
        return ISBN;
    }

    int getCopies()
    {
        return copiesInStock;
    }

    // Search Functions
    bool checkTitle(string t)
    {
        return title == t;
    }

    bool checkISBN(string id)
    {
        return ISBN == id;
    }

    // Update Copies
    void updateCopies(int value)
    {
        copiesInStock += value;
    }

    // Display
    void displayBook()
    {
        cout << "\n--------------------------\n";
        cout << "Title: " << title << endl;

        cout << "Authors: ";
        for (int i = 0; i < numAuthors; i++)
            cout << authors[i] << " ";

        cout << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "ISBN: " << ISBN << endl;
        cout << "Price: $" << price << endl;
        cout << "Year: " << yearOfPublication << endl;
        cout << "Copies in Stock: " << copiesInStock << endl;
    }
};

int main()
{
    bookType books[100];

    string a1[] = {"Bjarne Stroustrup"};
    string a2[] = {"Herbert Schildt", "John Doe"};

    books[0] = bookType(
        "Programming Fundamentals",
        a1,
        1,
        "Oxford",
        "9781111111111",
        550,
        2021,
        20);

    books[1] = bookType(
        "Object Oriented Programming",
        a2,
        2,
        "Pearson",
        "9782222222222",
        700,
        2022,
        15);

    int totalBooks = 2;

    cout << "===== BOOKS =====\n";

    for (int i = 0; i < totalBooks; i++)
        books[i].displayBook();

    // Search by Title
    string searchTitle;

    cout << "\nEnter Title to Search: ";
    getline(cin, searchTitle);

    bool found = false;

    for (int i = 0; i < totalBooks; i++)
    {
        if (books[i].checkTitle(searchTitle))
        {
            books[i].displayBook();
            found = true;
        }
    }

    if (!found)
        cout << "Book not found.\n";

    // Search by ISBN
    string searchISBN;

    cout << "\nEnter ISBN to Search: ";
    getline(cin, searchISBN);

    found = false;

    for (int i = 0; i < totalBooks; i++)
    {
        if (books[i].checkISBN(searchISBN))
        {
            books[i].displayBook();
            found = true;
        }
    }

    if (!found)
        cout << "Book not found.\n";

    // Update Copies
    cout << "\nEnter ISBN to Update Stock: ";
    getline(cin, searchISBN);

    found = false;

    for (int i = 0; i < totalBooks; i++)
    {
        if (books[i].checkISBN(searchISBN))
        {
            int add;

            cout << "Enter Copies to Add: ";
            cin >> add;

            books[i].updateCopies(add);

            cout << "\nUpdated Book Information\n";
            books[i].displayBook();

            found = true;
        }
    }

    if (!found)
        cout << "Book not found.\n";

    return 0;
}
