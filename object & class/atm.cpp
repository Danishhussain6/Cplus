#include <iostream>
using namespace std;

class ATM {
private:
    int balance = 10000;

public:
    void deposit(int amount) {
        balance += amount;
    }

    void withdraw(int amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient funds\n";
    }

    void checkBalance() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    ATM user;
    user.deposit(2000);
    user.withdraw(3000);
    user.checkBalance();
}