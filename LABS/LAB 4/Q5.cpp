#include<iostream>
using namespace std;

class Hotel_Mercato{
    private:
    string name;
    int days;
    static const double rent;
    
    
    public:
    Hotel_Mercato(string n,int d){
        name=n;
        days=d;
    }
    
    double calculaterent()const{
        if(days>7){
            return (days-1)*rent;
        }
        
        else{
            return (days*rent);
        }
    }
    void setname(string n){
        name=n;
    }
    
    void setdays(int d){
        days=d;
    }
    
    void display()const{
        cout<<"Customer name: "<<name<<endl;
        cout<<"Days Stayed: "<<days<<endl;
        cout<<"Total Rent: "<<calculaterent()<<endl;
    }
    
};

const double Hotel_Mercato::rent=1000.85;

int main (){
    Hotel_Mercato h1("Ali",10);
    Hotel_Mercato h2("Ahmed",6);
    
    h1.display();
    cout<<endl; 
    
    h2.display();
    cout<<endl; 
    
    h1.setdays(5);
    h1.display();
    
}