#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    float balance;

public:
    void createAccount(int accNo, float bal) {
        accountNumber = accNo;
        balance = bal;
    }

    void deposit(float amount) {
        balance += amount;
    }

    void withdraw(float amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient Balance\n";
    }

    void showBalance() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    acc.createAccount(12345, 1000);
    acc.deposit(500);
    acc.withdraw(300);
    acc.showBalance();
}