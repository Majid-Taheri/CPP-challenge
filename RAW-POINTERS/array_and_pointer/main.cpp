#include <iostream>


using namespace std;

int main (){

   int scores[] {100,95,89};

   cout << "value of scores" << scores << endl;

   int *score_ptr {scores};

   cout << "Value of score_ptr" << scores << endl;

    cout << "\nArray offset notation"  << endl;

    cout << *score_ptr << endl;      //100

    cout << *(score_ptr + 1) << endl;      //95

    cout << *(score_ptr + 2) << endl;      //98

    cout << endl;
    return 0;
}