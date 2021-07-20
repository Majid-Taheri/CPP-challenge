#include <iostream>


using namespace std;

int main (){

    int *int_ptr {nullptr};
    int_ptr = new int;

    cout << int_ptr << endl;
    cout << *int_ptr << endl;

   delete int_ptr;
    cout << endl;
    return 0;
}