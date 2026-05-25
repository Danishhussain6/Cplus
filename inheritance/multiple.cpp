#include <iostream>
using namespace std;

class Engine {
public:
    void engineType() {
        cout << "Petrol Engine" << endl;
    }
};

class MusicSystem {
public:
    void music() {
        cout << "Music System ON" << endl;
    }
};

class Car : public Engine, public MusicSystem {
};

int main() {

    Car c;

    c.engineType();
    c.music();

    return 0;
}