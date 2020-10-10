#include <iostream>
#include <string>

using namespace std;

class Account {
public:
    // attributes
    string name;
    double balance;
    
    // methods
    bool deposit(double bal) {balance += bal; cout << "In deposit" << endl; }
    bool withdraw(double bal) {balance -= bal; cout << "In withdraw" << endl;  }
    
};

int main() {
    Account majid_account;
    majid_account.name = "Majid's Account";
    majid_account.balance = 1000.0;
    majid_account.deposit (10000.0);
    majid_account.withdraw (800.0);

    return 0;
}