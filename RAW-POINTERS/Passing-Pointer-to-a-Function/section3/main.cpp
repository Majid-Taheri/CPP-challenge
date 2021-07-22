#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display( vector<string> * v) {
    for (auto str: *v)
        cout << str << " ";
    cout << endl;

    //changing the vector
    (*v).at(0) = "Funny"; //we can change this vector because it doesn't have any const qualifier
    // v = nullptr;
    for (auto str: *v)
        cout << str << " ";
    cout << endl;
}

int main() {

   cout << "-----------------------------" << endl;
   vector<string> stooges {"Larry", "Moe", "Curly"};
   display(&stooges);

    cout  << endl;
    return 0;
}