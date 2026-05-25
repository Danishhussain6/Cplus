#include <iostream>
using namespace std;

class Shape {
public:
    void show() {
        cout << "This is shape class" << endl;
    }
};

class Circle : public Shape {
public:
    void areaCircle() {
        cout << "Area of Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void areaRectangle() {
        cout << "Area of Rectangle" << endl;
    }
};

int main() {

    Circle c;
    Rectangle r;

    c.show();
    c.areaCircle();

    r.show();
    r.areaRectangle();

    return 0;
}