#include <iostream>
#include <cstring>
using namespace std;

class Employee{
    private:
    char *firstname;
    string lastname;
    int monthlysalary;
    
    public:
    Employee(){
        firstname=NULL;
        lastname="";
        monthlysalary=0;
    }
    
    void setdata(char *fname,string lname,int salary){
        firstname=new char[strlen(fname)+1];
        strcpy(firstname, fname);
        
        lastname=lname;
        
        if(monthlysalary<0){
            monthlysalary=0;
        }
        else{
            monthlysalary=salary;
        }
    }
    
    char *getfirstname(){
        return firstname;
    }

    string getlastname(){
        return lastname;
    }
    
    int getsalary(){
        return monthlysalary;
    }
    
    void display(){
        cout<<"First Name:"<<" "<<firstname<<endl;
        cout<<"Last Name:"<<" "<<lastname<<endl;
        cout<<"Monthly Salary:"<<" "<<monthlysalary<<endl;
        cout<<"Yearly  Salary:"<<" "<<monthlysalary*12<<endl;
    }
    
    void giveraise(){
        monthlysalary+=(monthlysalary*10)/100;
    }
    
    ~ Employee(){
        delete [] firstname;
    }
};

int main() {
   Employee e1,e2;
   e1.setdata((char*)"Ali","Ahmed",55000);
   e2.setdata((char*)"Sara","Khan",45000);
   
   cout<<"Before 10% raise"<<endl;
   cout<<endl;
   
   e1.display();
   cout<<endl;
   
   e2.display();
   cout<<endl;
   
   e1.giveraise();
   e2.giveraise();
   
   cout<<"After 10% raise"<<endl;
   cout<<endl;
   
   e1.display();
   cout<<endl;
   
   e2.display();
   cout<<endl;
    
   
    return 0;
}