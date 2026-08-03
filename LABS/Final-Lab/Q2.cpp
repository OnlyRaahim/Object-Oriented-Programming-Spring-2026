#include<iostream>
#include<fstream>
using namespace std;

class Store{
protected:
float total_bill;

public:
Store(float bill){
    total_bill=bill;
}

virtual void calculateBill()=0;

};

class ImtiazStore:public Store{
    
public:
ImtiazStore(float bill):Store(bill){}

void calculateBill(){
    float discount=total_bill*0.07;
    float finalBill=total_bill-discount;

    cout<<"\n--Imtiaz Store--"<<endl;
    cout<<"Total Bill: "<<total_bill<<endl;
    cout<<"Discount (7%): "<<discount<<endl;
    cout<<"Final Bill: "<<finalBill<<endl;

    ofstream file("StoreRecord.txt",ios::app);
    file<<"\n--Imtiaz Store--"<<endl;
    file<<"Total Bill: "<<total_bill<<endl;
    file<<"Discount (7%): "<<discount<<endl;
    file<<"Final Bill: "<<finalBill<<endl;
    file.close();
}

};

class BinHashimStore:public Store{
    
public:
BinHashimStore(float bill):Store(bill){}

void calculateBill(){
    float discount=total_bill*0.05;
    float finalBill=total_bill-discount;

    cout<<"\n--Bin Hashim Store--"<<endl;
    cout<<"Total Bill: "<<total_bill<<endl;
    cout<<"Discount (5%): "<<discount<<endl;
    cout<<"Final Bill: "<<finalBill<<endl;

    ofstream file("StoreRecord.txt",ios::app);
    file<<"\n--IBin Hashim Store--"<<endl;
    file<<"Total Bill: "<<total_bill<<endl;
    file<<"Discount (5%): "<<discount<<endl;
    file<<"Final Bill: "<<finalBill<<endl;
    file.close();
}

};

int main(){
    float bill;

    cout<<"\nEnter Total Bill: "<<endl;
    cin>>bill;

    if(bill<=0){
        cout<<"Inavalid Amount"<<endl;
        return 0;
    }

    Store *s1=new ImtiazStore(bill);
    Store *s2=new BinHashimStore(bill);

    s1->calculateBill();
    s2->calculateBill();

    delete s1;
    delete s2;

    cout<<"\nStore Record Saved Successfully in StoreRecord.txt\n"<<endl;

    return 0;

}