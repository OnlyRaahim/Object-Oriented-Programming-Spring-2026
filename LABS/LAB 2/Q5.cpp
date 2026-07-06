#include<iostream>
using namespace std;

class Account{
    private:
    string name;
    int account_no;
    double balance;
    string security_code;
    static int count;
    
    public:
    Account(string n,int acc,double b,string sc){
        name=n;
        account_no=acc;
        balance=b;
        security_code=sc;
        count++;
    }
    
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Account Number: "<<account_no<<endl;
        cout<<"Balance: "<<balance<<"$"<<endl;
        cout<<"Security Code: "<<security_code<<endl;
    }
    
    static void displaycount(){
        cout<<"Total Object Created: "<<count<<endl; 
    }
    
};

int Account::count=0;

int main (){
    Account A1("Raahim",1234,25000,"0322\n");
    Account A2("Ali",1356,45000,"0301\n");
    Account A3("Ahmed",1289,55000,"1209\n");
    A1.display();
    A2.display();
    A3.display();
    Account::displaycount();
    return 0;
}