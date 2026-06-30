#include<iostream>
using namespace std;

class Tolbooth{
private:
int totalnocars;
double totalamount;

public:
Tolbooth(){
    totalnocars=0;
    totalamount=0;
}

void payingCar( ){
    totalnocars++;
    totalamount+=0.50;
}

void display(){
    cout<<"Total No Of Cars: "<<" "<<totalnocars<<endl;
    cout<<"Total Amount: "<<" "<<totalamount<<"$"<<endl;
}

};

int main (){
    Tolbooth t1;
    t1.payingCar();
    t1.payingCar();
    t1.payingCar();
    t1.display();    
    return 0;
}