#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int rollno;
    char section;
    string semester;

    public:
    Student(string n,int r,char s,string sem){
        name=n;
        rollno=r;
        section=s;
        semester=sem;
    }

    void display(){
        cout<<"Name :"<<name<<endl;
        cout<<"Roll Number: "<<rollno<<endl;
        cout<<"Section :"<<section<<endl;
        cout<<"Semester :"<<semester<<endl;
        
    }

    char getsection(){
        return section;
    }

};    

    int main (){
        
        Student s1("ali",1,'A',"first");
        Student s2("ahmed",2,'B',"first");
        Student s3("sara",3,'C',"first");
        Student s4("sarim",4,'A',"first");

        if (s1.getsection()=='A')
            s1.display();

        if (s2.getsection()=='A')
            s2.display();
                    
        if (s3.getsection()=='A')
            s3.display();
        
        if (s4.getsection()=='A')
            s4.display();
        

        return 0;
    }
