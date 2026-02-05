#include <iostream>
using namespace std;

class BankAccount {
private:  
    int balance = 1000;  // Private: Not accessible outside class

public:
    void showBalance() {  // Public: Can be accessed outside
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount myAccount;
    myAccount.showBalance();  // Allowed 
    
    // myAccount.balance = 5000;  // Error: balance is private

    return 0;
}