#include <iostream>
using namespace std;

void addmatrix(int a[3][3],int b[3][3],int sum[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum[i][j]=a[i][j]+b[i][j];
            
        }
    }
}

void multiplymatrix(int a[3][3],int b[3][3],int product[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            product[i][j]=0;
            
            for(int k=0;k<3;k++){
              product[i][j]+=a[i][k]*b[k][j];  
            }
        }
    }
}

void displaymatrix(int M[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<M[i][j]<<"\t";
        }
        cout<<endl;
    }
}


int main() {
    int a[3][3],b[3][3],sum[3][3],product[3][3];
    
    cout<<"Enter the element of matrix A"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    
    cout<<"Enter the element of matrix B"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>b[i][j];
        }
    }
    
    addmatrix(a,b,sum);
    multiplymatrix(a,b,product);
    
    cout << "\nSum of Matrices:" << endl;
    displaymatrix(sum);

    cout << "\nProduct of Matrices:" << endl;
    displaymatrix(product);

    return 0;
}