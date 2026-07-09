#include <iostream>
#include <string>
using namespace std;


class Item
{
protected:
    string name;
    int quantity;

public:
    void setItem(string n, int q)
    {
        name = n;
        quantity = q;
    }

    string getName()
    {
        return name;
    }

    int getQuantity()
    {
        return quantity;
    }
};


class BakedGoods : public Item
{
protected:
    float discount = 0.10;   
};


class Cake : public BakedGoods
{
private:
    const double price = 600;

public:
    void calculateBill()
    {
        double total = price * getQuantity();
        double discountAmount = total * discount;
        double bill = total - discountAmount;

        cout << "\n===== BILL =====" << endl;
        cout << "Item: " << getName() << endl;
        cout << "Quantity: " << getQuantity() << endl;
        cout << "Price per Item: Rs. " << price << endl;
        cout << "Total Price: Rs. " << total << endl;
        cout << "Discount (10%): Rs. " << discountAmount << endl;
        cout << "Final Bill: Rs. " << bill << endl;
    }
};


class Bread : public BakedGoods
{
private:
    const double price = 200;

public:
    void calculateBill()
    {
        double total = price * getQuantity();
        double discountAmount = total * discount;
        double bill = total - discountAmount;

        cout << "\n===== BILL =====" << endl;
        cout << "Item: " << getName() << endl;
        cout << "Quantity: " << getQuantity() << endl;
        cout << "Price per Item: Rs. " << price << endl;
        cout << "Total Price: Rs. " << total << endl;
        cout << "Discount (10%): Rs. " << discountAmount << endl;
        cout << "Final Bill: Rs. " << bill << endl;
    }
};


class Drinks : public Item
{
private:
    const double price = 100;
    float discount = 0.05;   

public:
    void calculateBill()
    {
        double total = price * getQuantity();
        double discountAmount = total * discount;
        double bill = total - discountAmount;

        cout << "\n===== BILL =====" << endl;
        cout << "Item: " << getName() << endl;
        cout << "Quantity: " << getQuantity() << endl;
        cout << "Price per Item: Rs. " << price << endl;
        cout << "Total Price: Rs. " << total << endl;
        cout << "Discount (5%): Rs. " << discountAmount << endl;
        cout << "Final Bill: Rs. " << bill << endl;
    }
};

int main()
{
    string name;
    int quantity;
    int choice;

    cout << "========== Bakery Menu ==========\n";
    cout << "1. Cake   (Rs. 600)\n";
    cout << "2. Bread  (Rs. 200)\n";
    cout << "3. Drinks (Rs. 100)\n";
    cout << "================================\n";

    cout << "Enter Choice: ";
    cin >> choice;

    if (choice < 1 || choice > 3)
    {
        cout << "Invalid Choice!" << endl;
        return 0;
    }

    cin.ignore();

    cout << "Enter Item Name: ";
    getline(cin, name);

    cout << "Enter Quantity: ";
    cin >> quantity;

    switch (choice)
    {
    case 1:
    {
        Cake c;
        c.setItem(name, quantity);
        c.calculateBill();
        break;
    }

    case 2:
    {
        Bread b;
        b.setItem(name, quantity);
        b.calculateBill();
        break;
    }

    case 3:
    {
        Drinks d;
        d.setItem(name, quantity);
        d.calculateBill();
        break;
    }

    default:
        cout << "Invalid Choice!" << endl;
    }

    return 0;
}