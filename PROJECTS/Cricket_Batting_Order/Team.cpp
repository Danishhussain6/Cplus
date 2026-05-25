#include "Team.h"

// Add all players
void Team::addPlayers() {

    cout << "\n===== ENTER PLAYER DETAILS =====\n";

    // Loop for 11 players
    for(int i = 0; i < 11; i++) {

        cout << "\nPlayer " << i + 1 << endl;

        players[i].input();
    }
}

// Display all players
void Team::displayPlayers() {

    cout << "\n===== TEAM BATTING ORDER =====\n";

    for(int i = 0; i < 11; i++) {

        players[i].display(i);
    }
}

// Find highest scorer
void Team::highestScorer() {

    int maxRuns = players[0].getRuns();

    string topPlayer = players[0].getName();

    // Compare all players
    for(int i = 1; i < 11; i++) {

        if(players[i].getRuns() > maxRuns) {

            maxRuns = players[i].getRuns();

            topPlayer = players[i].getName();
        }
    }

    cout << "\n===== HIGHEST SCORER =====\n";

    cout << "Player: " << topPlayer << endl;

    cout << "Runs: " << maxRuns << endl;
}

// Calculate total team runs
void Team::teamTotal() {

    int total = 0;

    for(int i = 0; i < 11; i++) {

        total += players[i].getRuns();
    }

    cout << "\n===== TEAM TOTAL =====\n";

    cout << "Total Runs: " << total << endl;
}