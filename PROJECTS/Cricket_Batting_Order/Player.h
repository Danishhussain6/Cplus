#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
using namespace std;

// Player class
class Player {

private:

    string name;
    int runs;
    int balls;

public:

    // Functions
    void input();
    void display(int position);

    // Getter functions
    int getRuns();
    string getName();
};

#endif