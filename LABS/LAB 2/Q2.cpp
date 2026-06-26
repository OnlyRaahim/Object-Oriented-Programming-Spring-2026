#include <iostream>
#include<limits>
using namespace std;


class BankAccount{
    private:
    double balance;
    int transactions;
    
    public:
    BankAccount(double b){
        balance=b;
        transactions=0;
    }
    
    void displaybalance(){
        cout<<"Your current balance is:"<<balance<<endl;
    }
    
    void displaytransactions(){
        cout<<"Your total transaction is:"<<transactions<<endl;
    }
    
    void displayinterest(){
        double interest=balance*0.05;
        cout<<"Interest Earned"<<" "<<interest<<endl;
    }
    
    void deposit(double amount){
        if(amount<=0){
            cout<<"Enter amount greater than zero"<<endl;
        }
        
        else{
            balance+=amount;
            transactions++;
            cout<<"Deposit successfull"<<endl;
        }
    }
    
    void withdraw(double amount){
        if(amount>balance){
            cout<<"Insufficient Balance!"<<endl;
        }
        
        else if (amount<=0){
            cout<<"Enter amount greater than zero"<<endl;
        }
        
        else{
            balance-=amount;
            transactions++;
            cout<<"Withdrawal Successful."<<endl;

        }
    }
};


int main() {
    
    BankAccount account(10000);
    
    double amount;
    int choice;
    
    do{
        cout<<"\nABC Bank Menu"<<endl;
        cout<<"1. Display Display the account balance"<<endl;
        cout<<"2. Display the number of transactions"<<endl;
        cout<<"3. Display interest earned for this period"<<endl;
        cout<<"4. Make a deposit"<<endl;
        cout<<"5. Make a withdrawal"<<endl;
        cout<<"6. Exit the program"<<endl;
        
        cout<<"Enter your choice: ";
        cin>>choice;

        if (cin.fail()){
            cout << "Invalid choice! Enter a number between 1 and 6." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
            }
        
        switch(choice){
            
            case 1:
            account.displaybalance();
            break;
            
            case 2:
            account.displaytransactions();
            break;
            
            case 3:
            account.displayinterest();
            break;
            
            case 4:
            cout<<"Enter deposit amount"<<endl;
            cin>>amount;

            if(cin.fail()){
            cout<<"Enter amount in digit"<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            break;    
            }

            account.deposit(amount);
            break;
            
            
            case 5:
            cout<<"Enter withdrawl amount"<<endl;
            cin>>amount;

            if(cin.fail()){
            cout<<"Enter amount in digit"<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            break;    
            }

            account.withdraw(amount);
            break;
            
            case 6:
            cout<<"Exit the program"<<endl;
            break;
            
            default:
            cout<<"Invalid choice! "<<endl;
        }
        
    } while (choice!=6);
    return 0;
}