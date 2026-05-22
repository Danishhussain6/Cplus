#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal can eat" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog can bark" << endl;
    }
};

class Puppy : public Dog {
public:
    void weep() {
        cout << "Puppy weeps" << endl;
    }
};

int main() {

    Puppy p;

    p.eat();
    p.bark();
    p.weep();

    return 0;
}