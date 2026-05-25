#include <iostream>
using namespace std;

class Car {
public:
    void showBrand();  // Function declaration inside class
};

// Function definition outside class
void Car::showBrand() {
    cout << "Car Brand: BMW" << endl;
}

int main() {
    Car c2;
    c2.showBrand();  // Calling member function
    return 0;
}