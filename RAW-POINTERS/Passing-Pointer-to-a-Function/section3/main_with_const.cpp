#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display( const vector<string> *const v) {
    // (*v).at(0) = "Funny"; //first const would not allow this to compile
    for (auto str: *v)
        cout << str << " ";
    cout << endl; //last const would not allow this to compile
  
    // v= nullptr;
}
int main() {

   cout << "-----------------------------" << endl;
   vector<string> stooges {"Larry", "Moe", "Curly"};
   display(&stooges);

    cout  << endl;
    return 0;
}