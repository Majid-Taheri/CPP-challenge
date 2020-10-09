#include <iostream>


using namespace std;
// I was unable to pass an array by value or by reference has to use pointer
int *apply_all (size_t size_array1, const int const *array1 , size_t size_array2, const int const *array2) {
   int *new_storage {nullptr};
   new_storage = new int[size_array1 * size_array2];
    int position {0};
   for (size_t i{0}; i <  size_array2 ; ++i){
       for (size_t j{0}; j <  size_array1 ; ++j) {
             *(new_storage + i) = array2[i] * array1[j];
             ++ position;
       }
   }
   return new_storage;
}


void print (const int *const array, const size_t &size) {
    for (size_t i{0}; i < size; ++i)
        cout << array[i] << " ";
    cout << endl;
}

