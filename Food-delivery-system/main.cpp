#include <iostream>
#include <vector>
using namespace std;


class User{
protected:
    int userID;
    string name;
    string email;

public:
    User(int id, string n, string e)
    {
        userID = id;
        name = n;
        email = e;
    }

    void login()
    {
        cout << name << " Logged In Successfully.\n";
    }

    void logout()
    {
        cout << name << " Logged Out.\n";
    }

};


class FoodItem{
    
private:
    string name;
    double price;

public:
    FoodItem(string n = "", double p = 0)
    {
        name = n;
        price = p;
    }

    string getName()
    {
        return name;
    }

    double getPrice()
    {
        return price;
    }

    void display()
    {
        cout << name << " - $" << price << endl;
    }
};


class Cart
{
private:
    vector<FoodItem> items;

public:
    void addItem(FoodItem item)
    {
        items.push_back(item);
        cout << item.getName() << " Added to Cart.\n";
    }

    void removeItem()
    {
        if (!items.empty())
        {
            items.pop_back();
            cout << "Last Item Removed.\n";
        }
    }

    vector<FoodItem> getItems()
    {
        return items;
    }
};


class Customer : public User
{
private:
    Cart cart;
    string address;

public:
    Customer(int id, string n, string e, string a)
        : User(id, n, e)
    {
        address = a;
    }

    Cart &getCart()
    {
        return cart;
    }

    void placeOrder()
    {
        cout << "Order Placed Successfully.\n";
    }

    void trackOrder()
    {
        cout << "Order is On the Way.\n";
    }
};


class DeliveryPartner : public User
{
public:
    DeliveryPartner(int id, string n, string e)
        : User(id, n, e)
    {
    }

    void deliver()
    {
        cout << "Food Delivered Successfully.\n";
    }
};


class Restaurant
{
private:
    string name;
    double rating;
    vector<FoodItem> menu;

public:
    Restaurant(string n, double r)
    {
        name = n;
        rating = r;
    }

    void addFood(FoodItem item)
    {
        menu.push_back(item);
    }

    void showMenu()
    {
        cout << "\n----- MENU -----\n";
        for (int i = 0; i < menu.size(); i++)
        {
            cout << i + 1 << ". ";
            menu[i].display();
        }
    }

    FoodItem getFood(int index)
    {
        return menu[index];
    }

    void receiveOrder()
    {
        cout << "Restaurant Received Order.\n";
    }
};


class Order
{
private:
    string status;
    double total;

public:
    Order()
    {
        status = "Pending";
        total = 0;
    }

    void confirmOrder(vector<FoodItem> items)
    {
        total = 0;

        for (FoodItem item : items)
            total += item.getPrice();

        status = "Confirmed";

        cout << "\nOrder Confirmed.\n";
        cout << "Status : " << status << endl;
        cout << "Total  : $" << total << endl;
    }

    double getTotal()
    {
        return total;
    }
};


class Payment
{
public:
    virtual void pay(double amount) = 0;
};


class Cash : public Payment
{
public:
    void pay(double amount)
    {
        cout << "Paid $" << amount << " Using Cash.\n";
    }
};


class Card : public Payment
{
public:
    void pay(double amount)
    {
        cout << "Paid $" << amount << " Using Card.\n";
    }
};


class Wallet : public Payment
{
public:
    void pay(double amount)
    {
        cout << "Paid $" << amount << " Using Wallet.\n";
    }
};


int main()
{
    Customer customer(101, "Ali", "ali@gmail.com", "Karachi");

    customer.login();

    Restaurant restaurant("Pizza House", 4.8);

    restaurant.addFood(FoodItem("Burger", 8));
    restaurant.addFood(FoodItem("Pizza", 15));
    restaurant.addFood(FoodItem("Fries", 5));
    restaurant.addFood(FoodItem("Drink", 3));

    restaurant.showMenu();

    customer.getCart().addItem(restaurant.getFood(1));
    customer.getCart().addItem(restaurant.getFood(3));

    customer.placeOrder();

    restaurant.receiveOrder();

    Order order;

    order.confirmOrder(customer.getCart().getItems());

    Payment *payment;

    int choice;

    cout << "\n1. Cash\n2. Card\n3. Wallet\n";
    cout << "Select Payment Method: ";
    cin >> choice;

    if (choice == 1)
        payment = new Cash();

    else if (choice == 2)
        payment = new Card();

    else
        payment = new Wallet();

    payment->pay(order.getTotal());

    DeliveryPartner rider(201, "Ahmed", "ahmed@gmail.com");

    rider.deliver();

    customer.trackOrder();

    customer.logout();

    delete payment;
    return 0;
}