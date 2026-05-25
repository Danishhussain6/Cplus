#include <iostream>
using namespace std;

class Person {
public:
    void displayName() {
        cout << "Name: Danish" << endl;
    }
};

class Student : public Person {
public:
    void displayRoll() {
        cout << "Roll No: 101" << endl;
    }
};

int main() {

    Student s;

    s.displayName();
    s.displayRoll();

    return 0;
}