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


    return 0;
}