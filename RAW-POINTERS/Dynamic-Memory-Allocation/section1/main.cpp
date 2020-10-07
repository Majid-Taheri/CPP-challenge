#include <iostream>

using namespace std;

int main() {

    int *int_ptr {nullptr};
    int_ptr = new int;               // allocate the int on the heap
    cout << int_ptr << endl;    // use it
    delete int_ptr;                    // release it

    return 0;
}
