#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    int year;

public:
    Car(string b, int y) {
        brand = b;
        year = y;
    }

    void display() {
        cout << brand << " - " << year << endl;
    }
};

int main() {
    Car c1("Tesla", 2023);
    c1.display();
}