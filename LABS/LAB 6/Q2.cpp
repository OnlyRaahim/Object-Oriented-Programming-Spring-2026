#include <iostream>
using namespace std;

class Calculator
{
private:
    int Num1, Num2, Num3;

public:
    Calculator(int a, int b, int c)
    {
        Num1 = a;
        Num2 = b;
        Num3 = c;
    }

    
    int add(int a, int b)
    {
        return a + b;
    }

    
    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    
    int multiply(int a, int b)
    {
        return a * b;
    }

    
    int multiply(int a, int b, int c)
    {
        return a * b * c;
    }

    
    int subtract(int a, int b)
    {
        return a - b;
    }

    
    float divide(int a, int b)
    {
        return (float)a / b;
    }
};

int main()
{
    int n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    Calculator c(n1, n2, n3);

    cout << "Addition (2 numbers): " << c.add(n1, n2) << endl;
    cout << "Addition (3 numbers): " << c.add(n1, n2, n3) << endl;

    cout << "Multiplication (2 numbers): " << c.multiply(n1, n2) << endl;
    cout << "Multiplication (3 numbers): " << c.multiply(n1, n2, n3) << endl;

    cout << "Subtraction: " << c.subtract(n1, n2) << endl;

    cout << "Division: " << c.divide(n1, n2) << endl;

    return 0;
}