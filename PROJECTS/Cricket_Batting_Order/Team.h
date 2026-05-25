#ifndef TEAM_H
#define TEAM_H

#include "Player.h"

// Team class
class Team {

private:

    Player players[11];

public:

    // Functions
    void addPlayers();

    void displayPlayers();

    void highestScorer();

    void teamTotal();
};

#endif