#include <iostream>
#include "Account.h"

using namespace std;

int main() {
    Account majid_account;
    majid_account.set_name("Majid's account");
    majid_account.set_balance(1000.0);
    
    if (majid_account.deposit(200.0))
        cout << "Deposit OK" << endl;
    else 
        cout << "Deposit Not allowed" << endl;
        
    if (majid_account.withdraw(500.0))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Not sufficient funds" << endl;
        
    if (majid_account.withdraw(1500.0))
        cout << "Withdraw OK" << endl;
    else
        cout << "Not sufficient funds" << endl; 
    
    return 0;
}
