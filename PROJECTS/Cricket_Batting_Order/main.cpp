#include "Team.h"

int main() {

    // Create team object
    Team t;

    int choice;

    do {

        // Menu
        cout << "\n===== CRICKET BATTING ORDER SYSTEM =====\n";

        cout << "1. Add Players\n";
        cout << "2. Display Batting Order\n";
        cout << "3. Highest Scorer\n";
        cout << "4. Team Total Runs\n";
        cout << "5. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                t.addPlayers();
                break;

            case 2:
                t.displayPlayers();
                break;

            case 3:
                t.highestScorer();
                break;

            case 4:
                t.teamTotal();
                break;

            case 5:
                cout << "\nProgram Ended...\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}