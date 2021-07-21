#include <iostream>


using namespace std;

int main (){

   int scores[] {100,95,89,68,-1};
   int *score_ptr {scores};

    while (*score_ptr !=-1) {
        cout << *score_ptr << endl;
        score_ptr ++;
    }
    

    //same as above but in one line derefrence and increment
    cout << "\n----------------------" << endl;
    score_ptr = scores;

    while (*score_ptr != -1) {

        cout << *score_ptr++ << endl;
    }
    

    cout << endl;
    return 0;
}