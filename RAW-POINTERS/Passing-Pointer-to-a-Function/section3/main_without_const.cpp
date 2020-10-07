#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display( vector<string> * v) {
    (*v).at(0) = "Funny";
    for (auto str: *v)
        cout << str << " ";
    cout << endl;
  
    v= nullptr;
}

int main() {

   cout << "-----------------------------" << endl;
   vector<string> stooges {"Larry", "Moe", "Curly"};
   display(&stooges);

    cout  << endl;
    return 0;
}