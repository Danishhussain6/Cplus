#include <iostream>
using namespace std;

class Car {  // Class definition
public:
    string brand;
};

int main() {
    Car myCar;  // Object creation
    myCar.brand = "Toyota";  // Assign value

    cout << "Car Brand: " << myCar.brand << endl;  // Access object data

    return 0;
}