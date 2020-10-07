#include <iostream>

using namespace std;

int main() {

    size_t size{0};
    double *temp_ptr {nullptr};
    
    cout << "How many temps? ";
    cin >> size;
    
    temp_ptr = new double[size];    // allocate the storage on the heap
    cout << temp_ptr << endl;       // use it
    delete [] temp_ptr;                     // release it
    
    cout << endl;
    return 0;
}
