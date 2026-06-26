#include <iostream>
#include "Library.h" 
#include "Template.h"

using namespace std;

int main()
{
    Library* library = Library::getInstance();

    library->loadFromFile();

    int choice;

    do
    {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Save Data\n";
        cout << "7. Display Total Books\n";
        cout << "0. Exit\n";

        cout << "Enter choice: ";
        while (!(cin >> choice)) {
            cout << "Invalid choice\n";
            cin.clear();
            cin.ignore();
            continue;
        }
        switch (choice)
        {
        case 1:
            library->addBook();
            break;

        case 2:
            library->displayBooks();
            break;

        case 3:
            library->searchBook();
            break;

        case 4:
            library->issueBook();
            break;

        case 5:
            library->returnBook();
            break;

        case 6:
            library->saveToFile();
            break;

        case 7:
            displayData(Book::getTotalBooks());
            break;

        case 0:
            library->saveToFile();
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
            break;
        }

    } while (choice != 0);

    return 0;
}
