#include <iostream>
#include <fstream>
using namespace std;

class Expense {
    int id;
    string name;
    float amount;

public:
    void input() {
        cout << "Enter Expense ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Expense Name: ";
        getline(cin, name);

        cout << "Enter Amount: ";
        cin >> amount;
    }

    void display() {
        cout << "ID: " << id
             << " | Name: " << name
             << " | Amount: " << amount << endl;
    }

    int getId() { return id; }
    float getAmount() { return amount; }
};


// 🔹 Add Expense
void addExpense() {
    Expense e;
    ofstream file("expense.dat", ios::binary | ios::app);

    e.input();
    file.write((char*)&e, sizeof(e));

    file.close();
    cout << "Expense added!\n";
}


// 🔹 Display Expenses
void displayExpenses() {
    Expense e;
    ifstream file("expense.dat", ios::binary);

    float total = 0;

    while (file.read((char*)&e, sizeof(e))) {
        e.display();
        total += e.getAmount();
    }

    cout << "Total Spending: " << total << endl;

    file.close();
}


// 🔹 Main Menu
int main() {
    int choice;

    do {
        cout << "\n1. Add Expense\n";
        cout << "2. View Expenses\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addExpense(); break;
            case 2: displayExpenses(); break;
            case 3: cout << "Exit\n"; break;
            default: cout << "Invalid\n";
        }

    } while (choice != 3);

    return 0;
}