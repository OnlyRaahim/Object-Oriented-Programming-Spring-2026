#include <iostream>
using namespace std;

int main() {
    float F, C;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> F;

    C = (F - 32) / 1.8;

    cout << "Temperature in Celsius = " << C << " °C" << endl;

    return 0;
}