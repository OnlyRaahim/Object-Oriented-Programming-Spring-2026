#include<iostream>
#include<string>
using namespace std;

class Teacher{
    private:
    string name;
    string institute;
    int age;
    
    public:
    void setname(string n){
        name=n;
    }

    string getname(){
        return name;
    }

    void setinstitute(string i){
        institute=i;
    }

    string getinstitute(){
        return institute;
    }

    void setage(int a){
        age=a;
    }

    int getage(){
        return age;
    }
};

class HumanitiesTeacher:public Teacher{
    private:
    string department="Humanities";
    string coursename;
    string designation;

    public:
    string getdepartment(){
        return department;
    }

    void setcoursename(string c){
        coursename=c;
    }

    string getcoursename(){
        return coursename;
    }

    void setdesignation(string d){
        designation=d;
    }

    string getdesignation(){
        return designation;
    }

    void display(){
        cout<<"Name: "<<getname()<<endl;
        cout<<"Institute: "<<getinstitute()<<endl;
        cout<<"Age: "<<getage()<<endl;
        cout<<"Department: "<<getdepartment()<<endl;
        cout<<"Course Name: "<<getcoursename()<<endl;
        cout<<"Designation: "<<getdesignation()<<endl;
    }
};

class ScienceTeacher:public Teacher{
    private:
    string department="Science";
    string coursename;
    string designation;

    public:
    string getdepartment(){
        return department;
    }

    void setcoursename(string c){
        coursename=c;
    }

    string getcoursename(){
        return coursename;
    }

    void setdesignation(string d){
        designation=d;
    }

    string getdesignation(){
        return designation;
    }

    void display(){
        cout<<"Name: "<<getname()<<endl;
        cout<<"Institute: "<<getinstitute()<<endl;
        cout<<"Age: "<<getage()<<endl;
        cout<<"Department: "<<getdepartment()<<endl;
        cout<<"Course Name: "<<getcoursename()<<endl;
        cout<<"Designation: "<<getdesignation()<<endl;
    }
};

class MathsTeacher:public Teacher{
    private:
    string department="Maths";
    string coursename;
    string designation;

    public:
    string getdepartment(){
        return department;
    }

    void setcoursename(string c){
        coursename=c;
    }

    string getcoursename(){
        return coursename;
    }

    void setdesignation(string d){
        designation=d;
    }

    string getdesignation(){
        return designation;
    }

    void display(){
        cout<<"Name: "<<getname()<<endl;
        cout<<"Institute: "<<getinstitute()<<endl;
        cout<<"Age: "<<getage()<<endl;
        cout<<"Department: "<<getdepartment()<<endl;
        cout<<"Course Name: "<<getcoursename()<<endl;
        cout<<"Designation: "<<getdesignation()<<endl;
        cout<<endl;
    }
};

int main(){
    HumanitiesTeacher ht;

    string name,institute,coursename,designation;
    int age;

    cout<<"\nEnter Humanitiy Teacher Details"<<endl;
    cout<<"Enter Name: ";
    getline(cin, name);
    cout<<"Enter Institute: ";
    getline(cin,institute);
    cout<<"Enter Age: ";
    cin>>age;
    cin.ignore();
    cout<<"Enter Course Name: ";
    getline(cin,coursename);
    cout<<"Enter Designation: ";
    getline(cin,designation);
    cout<<endl;

    ht.setname(name);
    ht.setinstitute(institute);
    ht.setage(age);
    ht.setcoursename(coursename);
    ht.setdesignation(designation);
    ht.display();

    ScienceTeacher st;
    cout<<"\nEnter Science Teacher Details"<<endl;
    cout<<"Enter Name: "<<endl;
    getline(cin, name);
    cout<<"Enter Institute: "<<endl;
    getline(cin,institute);
    cout<<"Enter Age: "<<endl;
    cin>>age;
    cin.ignore();
    cout<<"Enter Course Name: "<<endl;
    getline(cin,coursename);
    cout<<"Enter Designation: "<<endl;
    getline(cin,designation);
    cout<<endl;

    st.setname(name);
    st.setinstitute(institute);
    st.setage(age);
    st.setcoursename(coursename);
    st.setdesignation(designation);
    st.display();

    MathsTeacher mt;
    cout<<"\nEnter Maths Teacher Details"<<endl;
    cout<<"Enter Name: "<<endl;
    getline(cin, name);
    cout<<"Enter Institute: "<<endl;
    getline(cin,institute);
    cout<<"Enter Age: "<<endl;
    cin>>age;
    cin.ignore();
    cout<<"Enter Course Name: "<<endl;
    getline(cin,coursename);
    cout<<"Enter Designation: "<<endl;
    getline(cin,designation);
    cout<<endl;

    mt.setname(name);
    mt.setinstitute(institute);
    mt.setage(age);
    mt.setcoursename(coursename);
    mt.setdesignation(designation);
    mt.display();

    return 0;
}
