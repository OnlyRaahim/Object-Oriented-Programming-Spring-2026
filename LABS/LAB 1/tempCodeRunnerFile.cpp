#include<iostream>
#include<iomanip>
using namespace std;

int main (){
    const double initial_balance=200000;
    double balance=initial_balance;
    double tax=0,fee=0,withdraw_amount;
    char accountcode;
    string accountnumber;
    
    cout<<"Enter account code (S for saving and C for current) "<<endl;
    cin>>accountcode;
    
    if(accountcode!='s'&& accountcode!='S' && accountcode!='c' && accountcode!='C'){
        
        cout<<"Enter valid account code"<<endl;
        return 0;
    }
    
    cout<<"Enter account number"<<endl;
    cin>>accountnumber;
    
    for(int i=0;i<accountnumber.length();i++){
        if(!isdigit(accountnumber[i])){
            cout<<"Invalid account number!!, Enter digit only"<<endl;
            return 0; 
        }
       
    }
        
    cout<<"Enter withdraw amount"<<endl;
    cin>>withdraw_amount;
    
    if(cin.fail()){
        cout<<"Invalid Amount! Numbers only."<<endl;
        return 0;
    }
    
    if(withdraw_amount<=0){
        cout<<"Enter amount greater than zero "<< endl;
        return 0;
    }
        
    if(withdraw_amount>100000){
        cout<<"Cannot withdraw more than 100,000 at a time"<<endl;
        return 0;
    }
    
    if(accountcode=='s'||accountcode=='S'){
        fee=withdraw_amount*0.02;
        double remaining_balance=balance-withdraw_amount-fee;
        
        if(withdraw_amount>50000){
            tax=remaining_balance*0.05;
        }
        
        balance=remaining_balance-tax;
    }
    
    else {
        fee=100;
        double remaining_balance=balance-withdraw_amount-fee;
        
        if(withdraw_amount>50000){
            tax=remaining_balance*0.05;
        }
        
        balance=remaining_balance-tax;
    }
    
    
    
    cout<<fixed<<setprecision(2)<<endl;
    cout<<"Account code is:"<<accountcode<<endl;
    cout<<"Account number is:"<<accountnumber<<endl;
    cout<<"Withdrawl Amount is:"<<withdraw_amount<<endl;
    cout<<"Fee charged:"<<fee<<endl;
    cout<<"Tax deducted:"<<tax<<endl;
    cout << "Remaining Balance: " << balance << endl;

    
    return 0;
}