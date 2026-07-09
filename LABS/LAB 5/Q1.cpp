#include<iostream>
using namespace std;

class Base{
    private:
    int privateInt;
    
    protected:
    int protectedInt;
    
    public:
    int publicInt;
    
    Base(){
        privateInt=0;
        protectedInt=0;
        publicInt=0;
    }
    
    void setprivateInt(int value){
        privateInt=value;
    }
    
    int getprivateInt(){
        return privateInt;
    }
    
    void setprotectedInt(int value){
        protectedInt=value;
    }
    
    int getprotectedInt(){
        return protectedInt;
    }
    
    void setpublicInt(int value){
        publicInt=value;
    }
    
    int getpublicInt(){
        return publicInt;
    }
    
};

class PrivateInt:private Base{
    public:
    void initialize(){
        setprivateInt(10);
        protectedInt=20;
        publicInt=30;
    }
    
    void display(){
        cout<<"\nPrivate Int: "<<getprivateInt()<<endl;
        cout<<"Protected Int: "<<protectedInt<<endl;
        cout<<"Public Int: "<<publicInt<<endl;
    }
    
};

class ProtectedInt:protected Base{
    public:
    void initialize(){
        setprivateInt(20);
        protectedInt=30;
        publicInt=40;
    }
    
    void display(){
        cout<<"\nPrivate Int: "<<getprivateInt()<<endl;
        cout<<"Protected Int: "<<protectedInt<<endl;
        cout<<"Public Int: "<<publicInt<<endl;
    }
    
};

class PublicInt:public Base{
    public:
    void initialize(){
        setprivateInt(30);
        protectedInt=40;
        publicInt=50;
    }
    
    void display(){
        cout<<"\nPrivate Int: "<<getprivateInt()<<endl;
        cout<<"Protected Int: "<<protectedInt<<endl;
        cout<<"Public Int: "<<publicInt<<endl;
    }
    
};

int main(){
    
    PrivateInt prvt;
    prvt.initialize();
    prvt.display();
    cout<<endl;
    
    ProtectedInt prot;
    prot.initialize();
    prot.display();
    cout<<endl;
    
    PublicInt pub;
    pub.initialize();
    pub.display();
    cout<<endl;
    
    return 0;
}