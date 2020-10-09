#include <iostream>
#include <vector>

using namespace std;

int *apply_all (size_t size_array1, vector<int> &v1 , size_t size_array2,  vector<int> &v2) {
   int *new_storage {nullptr};
   new_storage = new int[size_array1 * size_array2];   
   for (size_t i{0}; i <  size_array2 ; ++i){
       for (size_t j{0}; j <  size_array2 ; ++j) {
             *(new_storage + i) = v1[i]*v2[j];
       }
   }
   return new_storage;
}