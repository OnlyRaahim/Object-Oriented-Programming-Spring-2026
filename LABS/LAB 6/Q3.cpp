#include <iostream>
using namespace std;

class Vector {
private:
    int x, y;

public:
    
    Vector(int xVal = 0, int yVal = 0) {
        x = xVal;
        y = yVal;
    }

    
    Vector operator+(const Vector &v) {
        return Vector(x + v.x, y + v.y);
    }

    
    Vector operator-(const Vector &v) {
        return Vector(x - v.x, y - v.y);
    }

    
    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Vector v1(4, 6);
    Vector v2(2, 3);

    Vector sum = v1 + v2;
    Vector diff = v1 - v2;

    cout << "Vector 1: ";
    v1.display();

    cout << "Vector 2: ";
    v2.display();

    cout << "Sum: ";
    sum.display();

    cout << "Difference: ";
    diff.display();

    return 0;
}