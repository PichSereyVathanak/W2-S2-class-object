#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    private:
    string accountNumber;
    string accountholder;
    float balance;

    public:
    BankAccount (string accountNumber, string accountholder, float balance) {
        this->accountNumber = accountNumber;
        this->accountholder = accountholder;
        this->balance = balance;
    }
    void deposit (float amount) {
        if (amount > 0) {
            balance += amount;
        } else {
            cout <<"Deposit amount should be positive." <<endl;
        }
    }
    bool withdraw (float amount) {
        if ((0 < amount) && (amount <= balance)) {
            balance -= amount;
            return true;
        } else {
            cout <<"You don't have enough balances for Windraw."<< endl;
            return false;
        }
    }

    string toString() const {
        return "Number: " + accountNumber + ", Holder: " + accountholder + ", Balance: " + to_string(balance);
    }

};

int main() {

    // Create an account with 0$
    BankAccount myAccount("ABC", "ronan", 0);
    cout<< myAccount.toString() << endl;

    // Deposite 100$
    myAccount.deposit(100);
    cout<< myAccount.toString() << endl;

    // Withdraw 80$ - Should success
    myAccount.withdraw(80);
    cout<< myAccount.toString() << endl;

    // Withdraw 30$ - Should fail
    myAccount.withdraw(30);
    cout<< myAccount.toString() << endl;

    return 0;
}