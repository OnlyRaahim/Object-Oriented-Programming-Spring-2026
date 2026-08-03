#include<iostream>
#include<string>
using namespace std;

class ComputerScientist{

private:
    int csId;
    string csname;
    int age;
    string address;
    float workExperience;
    long long contactNum;
    string email;

public:
    static int computerscientists;
    static string skillset;

ComputerScientist(int id,string name,int a,string ad,float we,long long contact,string e){
    csId=id;
    csname=name;
    age=a;
    address=ad;
    workExperience=we;
    contactNum=contact;
    email=e;
    computerscientists++;
}

static void setskillset(string skill){
    if(skill== "SQA"|| skill=="Web Developer"||skill == "Mobile App Developer" ||
    skill == "Intern"){

        skillset=skill;
    }
    else{
        skillset="Intern";
    }
}

void display(){
    cout<<"Cs ID: "<<csId<<endl;
    cout<<"Name: "<<csname<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"Work Experience: "<<workExperience<<endl;
    cout<<"Contact Number: "<<contactNum<<endl;
    cout<<"Email: "<<email<<endl;
    cout<<"skill Set: "<<skillset<<endl;
}

};

int ComputerScientist::computerscientists=0;
string ComputerScientist::skillset="Intern";

int main(){

    ComputerScientist cs1(25191,"Raahim",20,"Karachi",2,03221762033,"raahimali290@gmail.com");
    ComputerScientist cs2(25192,"Ali",19,"Lahore",2,0322111111,"ali12@gmail.com");
    ComputerScientist cs3(25193,"Fahad",18,"Islamabad",2,03112211344,"fahad@gmail.com");
    ComputerScientist cs4(25194,"Mohib",21,"Afghanistan",2,03332162071,"Mohib@gmail.com");
    ComputerScientist::setskillset("SQA");

    cs1.display();
    cout<<endl;
    cs2.display();
    cout<<endl;
    cs3.display();
    cout<<endl;
    cs4.display();
    
    
    cout<<"Total Computer Scientist: "<< ComputerScientist::computerscientists<<endl;

    return 0;

}
