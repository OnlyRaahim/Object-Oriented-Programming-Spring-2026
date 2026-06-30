#include<iostream>
using namespace std;

class Variable{
    private:
    int a,b;
    public:
    
    Variable(int a, int b){
        this->a=a;
        this->b=b;
        cout<<"Iam Parametrized Constructor"<<endl;
    }
    
    Variable(const Variable& obj){
        a=obj.a;
        b=obj.b;
        cout<<"Iam Copy Constructor"<<endl;
    }
    
    void display(){
        cout<<"Value of A: "<<a<<"\n"<<"Value of B: "<<b<<endl;
    }
};

int main (){
    
    Variable v1(10,20);
    v1.display();
    Variable v2=v1;
    v2.display();
    Variable v3(v2);
    v3.display();
    return 0;
}