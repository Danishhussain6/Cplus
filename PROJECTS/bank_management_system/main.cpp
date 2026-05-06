#include <iostream>
#include <fstream>
using namespace std;

class Account {
    int accNo;
    string name;
    float balance;

public:
    void create() {
        cout << "Enter Account Number: ";
        cin >> accNo;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void display() {
        cout << "Acc No: " << accNo
             << " | Name: " << name
             << " | Balance: " << balance << endl;
    }

    int getAccNo() { return accNo; }

    void deposit(float amt) {
        balance += amt;
    }

    bool withdraw(float amt) {
        if (amt <= balance) {
            balance -= amt;
            return true;
        }
        return false;
    }
};


// 🔹 Create Account
void createAccount() {
    Account a;
    ofstream file("bank.dat", ios::binary | ios::app);

    a.create();
    file.write((char*)&a, sizeof(a));

    file.close();
    cout << "Account created!\n";
}


// 🔹 Display Accounts
void displayAccounts() {
    Account a;
    ifstream file("bank.dat", ios::binary);

    while (file.read((char*)&a, sizeof(a))) {
        a.display();
    }

    file.close();
}


// 🔹 Deposit
void depositMoney() {
    int acc;
    float amt;
    cout << "Enter Account No: ";
    cin >> acc;
    cout << "Enter Amount: ";
    cin >> amt;

    fstream file("bank.dat", ios::binary | ios::in | ios::out);
    Account a;

    while (file.read((char*)&a, sizeof(a))) {
        if (a.getAccNo() == acc) {
            a.deposit(amt);
            file.seekp(-sizeof(a), ios::cur);
            file.write((char*)&a, sizeof(a));
            cout << "Deposited!\n";
            file.close();
            return;
        }
    }

    cout << "Account not found\n";
    file.close();
}


// 🔹 Withdraw
void withdrawMoney() {
    int acc;
    float amt;
    cout << "Enter Account No: ";
    cin >> acc;
    cout << "Enter Amount: ";
    cin >> amt;

    fstream file("bank.dat", ios::binary | ios::in | ios::out);
    Account a;

    while (file.read((char*)&a, sizeof(a))) {
        if (a.getAccNo() == acc) {
            if (a.withdraw(amt)) {
                file.seekp(-sizeof(a), ios::cur);
                file.write((char*)&a, sizeof(a));
                cout << "Withdraw successful\n";
            } else {
                cout << "Insufficient balance\n";
            }
            file.close();
            return;
        }
    }

    cout << "Account not found\n";
    file.close();
}


// 🔹 Main Menu
int main() {
    int choice;

    do {
        cout << "\n1. Create Account\n";
        cout << "2. Display Accounts\n";
        cout << "3. Deposit\n";
        cout << "4. Withdraw\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: createAccount(); break;
            case 2: displayAccounts(); break;
            case 3: depositMoney(); break;
            case 4: withdrawMoney(); break;
            case 5: cout << "Exit\n"; break;
            default: cout << "Invalid choice\n";
        }

    } while (choice != 5);

    return 0;
}