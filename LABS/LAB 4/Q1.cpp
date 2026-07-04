#include<iostream>
#include<cstring>
using namespace std;

class Employee{
    private:

    char *employeeName;
    const int employeeId;

    public:

    Employee(const char *name, int id) :employeeId(id){
        employeeName=new char[strlen(name)+1];
        strcpy(employeeName, name);
    }

    ~Employee(){
        delete[] employeeName;
    }

    void setemployeeName(const char *name){
        delete[] employeeName;
        employeeName=new char[strlen(name)+1];
        strcpy(employeeName, name);
    
    }

    const char *getemployeeName()const{
        return employeeName;
    }

    int getemployeeId() const{
        return employeeId;
    }
};

int main(){
    Employee e1("Ali",101);
    Employee e2("Ahmed",102);
    Employee e3("Sara",103);
    
    e1.setemployeeName("Ahsan");
    e2.setemployeeName("Akbar");
    e3.setemployeeName("Asghar");

    cout<<"Employee 1 Name: "<<e1.getemployeeName()<<"\nEmployee 1 Id:"<<e1.getemployeeId()<<endl;
    cout<<endl;
    cout<<"Employee 2 Name"<<e2.getemployeeName()<<"\nEmployee 2 Id:"<<e2.getemployeeId()<<endl;
    cout<<endl;
    cout<<"Employee  3Name"<<e3.getemployeeName()<<"\nEmployee 3 Id:"<<e3.getemployeeId()<<endl;
    cout<<endl;
    
    return 0;
}