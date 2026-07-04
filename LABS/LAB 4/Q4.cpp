#include<iostream>
using namespace std;

class Constant{
    private:
    int a;
    
    public:
    Constant(int a){
        this->a=a;
    }
    
    int non_const_func(){
        a=a+10;
        return a;
    }
    
    int const_func()const{
        return a;
    }    
        
};

int main(){
    
    Constant c1(20);
    cout<<c1.const_func()<<endl;
    cout<<c1.non_const_func()<<endl;
    
    return 0;
    
}