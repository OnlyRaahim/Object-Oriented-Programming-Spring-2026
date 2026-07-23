#include<iostream>
using namespace std;

class Shape{
    protected:
    int noOfSides;
    float area;

    public:
    Shape(int n){
       noOfSides=n;
        area=0;
    }

    void setnoOfSides(int n){
        noOfSides=n;
    }

    int getnoOfSides(){
        return noOfSides;
    }

    void setarea(float a){
        area=a;
    }

    float getarea(){
        return area;
    }
};

class Rectangle:public Shape{
    protected:
    float length;
    float width;

    public:
    Rectangle(float l,float w):Shape(4){
        length=l;
        width=w;
    }

    void generateArea(){
        area=length*width;

    }
};

class Circle:public Shape{
    protected:
    float radius;
    
    public:
    Circle(float r):Shape(0){
        radius=r;
    }

    void  generateArea(){
        area= 3.14 * radius *radius;
    
    }
};

class Triangle:public Shape{
    protected:
    float height;
    float base;
    
    public:
    Triangle(float h,float b):Shape(3){
        height=h;
        base=b;
    }

    void generateArea(){
        area = (height*base)/2;
        
    }
};

class Square:public Rectangle{
    public:
    Square(float sides):Rectangle(sides,sides){

    }

    void checksides(){
        if(length==width){
            cout<<"Both Sides Are Equal. "<<endl;
        }

        else{
            cout<<"Sides Are Not Equal. "<<endl;
        }
    }

    void generateArea(){
        area=length*length;
    }
};

int main(){
    Rectangle r(10,5);
    r.generateArea();
    cout<<"Rectangle Area: "<<r.getarea()<<endl;

    Circle c(10);
    c.generateArea();
    cout<<"Circle Area: "<<c.getarea()<<endl;

    Triangle t(12,5);
    t.generateArea();
    cout<<"Triangle Area: "<<t.getarea()<<endl;
    
    Square s(5);
    s.checksides();
    s.generateArea();
    cout<<"Sqaure Area: "<<s.getarea()<<endl;

    return 0;
}



