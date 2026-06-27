#include<iostream>
using namespace std;

int main (){
    int a,b,c;
    
    cout<<"Enter three numbers"<<endl;
    cin>>a>>b>>c;
    
    int *p1=&a;
    int *p2=&b;
    int *p3=&c;
    
    cout<<"Before swapping a ="<<a<<"b="<<b<<"c="<<c<<endl;
    
    int temp=a;
    a=b;
    b=c;
    c=temp;
    
    cout<<"After swapping a ="<<a<<"b="<<b<<"c="<<c<<endl;
    
    return 0;
}