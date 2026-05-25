#include "Player.h"

// Function to input player details
void Player::input() {

    cout << "Enter Player Name: ";
    cin >> name;

    cout << "Enter Runs Scored: ";
    cin >> runs;

    cout << "Enter Balls Played: ";
    cin >> balls;
}

// Function to display details
void Player::display(int position) {

    cout << "\nBatting Position: " << position + 1 << endl;

    cout << "Player Name: " << name << endl;

    cout << "Runs: " << runs << endl;

    cout << "Balls: " << balls << endl;

    // Strike Rate Formula
    float strikeRate = 0;

    if(balls != 0) {

        strikeRate = (runs * 100.0) / balls;
    }

    cout << "Strike Rate: " << strikeRate << endl;
}

// Getter for runs
int Player::getRuns() {

    return runs;
}

// Getter for player name
string Player::getName() {

    return name;
}