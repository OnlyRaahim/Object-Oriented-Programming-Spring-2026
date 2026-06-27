#include<iostream>
using namespace std;

int main (){
    int rollno;
    float marks[5],total=0,percentage;

    cout<<"Enter Roll Number"<<endl;
    cin>>rollno;

    cout<< "Enter marks of 5 subjects"<<endl;
    for (int i=0;i<5;i++){
        cout<<"subject"<<i+1<<":"<<endl;
        cin>>marks[i];
        total+=marks[i];
    }

    percentage=(total/500)*100;

    cout<<"Roll Number:"<<rollno<<endl;
    cout<<"Total marks:"<<total<<endl;
    cout<<"percentage"<<percentage<<"%"<<endl;

    return 0;

}