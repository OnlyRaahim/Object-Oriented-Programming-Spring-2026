#include<iostream>
using namespace std;

float surfaceArea(float r){
	float surface;
	surface = 4 *3.14 *r *r;
	return surface;
}

float volSphere(float r){
	float vol;
	vol = (4.0/3.0) *(3.14) *r *r *r;
	return vol;
}

int main(){
	float radius;
	cout<<"Enter the radius of sphere: "<<endl;
	cin>>radius;
	
	surfaceArea(radius);
	volSphere(radius);
	
	cout<<"Surface Area of Sphere = "<<surfaceArea(radius)<<endl;
	cout<<"Volume of Sphere = "<<volSphere(radius)<<endl;
	
	return 0;
}
