#include <iostream>
#include <string>

using namespace std;

class Account {
    // attributes
    string name {"Account"};
    double balance {0.0};
    
    // methods
    bool deposit(double);
    bool withdraw(double);
    
};


int main() {
    Account frank_account;
    Account jim_account;

    return 0;
}