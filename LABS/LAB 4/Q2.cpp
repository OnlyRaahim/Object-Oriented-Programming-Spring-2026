#include <iostream>
using namespace std;

class DynamicArray{
    private:
    int *arr;
    int size;
    int count;
    
    public:
    DynamicArray(int s){
        size=s;
        count=0;
        
        arr=new int[size];
        for(int i=0;i<size;i++){
            arr[i]=0;
        }
    }
    
    ~DynamicArray(){
        delete[] arr;
    }
    
    void add(int value){
        if(count<size){
            arr[count]=value;
            count++;
        }
        
        else{
            cout<<"Array Is Full!! "<<endl;
        }
    } 
    
    int getsize(){
        return size;
    }
    
    void display(){
        cout<<"\nSize Of An Array: "<<getsize()<<endl;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
            
        }
    }
};
int main() {
    
    DynamicArray d1(5),d2(6);
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(40);
    d1.display();
    d2.add(0);
    d2.display();

    return 0;
}