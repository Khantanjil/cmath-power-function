#include <iostream>
#include <cmath>

using namespace std;
int main(){

    int base;
    int exponent;

    cout << "Type an base: ";
    cin >> base;
    cout << "Type an exponent: ";
    cin >> exponent;
    double power = pow(base, exponent);
    cout << "The power function of " << base << " and " << exponent << " is equal to " << power;
    return 0;
}
