#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main (){

    int score {100};
    int *score_ptr {&score};

    cout << *score_ptr  << endl;
    
    *score_ptr = 200;
    
    cout << score  << endl;

    cout << *score_ptr  << endl;

    cout << "\n-----------------" << endl;

    double high_temp {100.7};
    double low_temp {37.4};

    double *temp_ptr {&high_temp};

    cout << *temp_ptr  << endl;

    temp_ptr = &low_temp;

    cout << *temp_ptr << endl;
    cout << high_temp << endl;
    cout << low_temp  << endl;

    cout <<"\n---------------" << endl;

    string name {"Majid"};
    string *name_ptr {&name};

    cout << *name_ptr << endl;

    name = "Sean";

    cout << *name_ptr << endl;

    cout <<"\n---------------"<<endl;

    vector<string> stooges {"Larry", "Moe", "Curly"};
    // vector<string> *vector_ptr {nullptr};

    // vector_ptr = &stooges;
    vector<string> *vector_ptr {&stooges};


    cout << "First stooges : " <<(*vector_ptr).at(0)  << endl; //Larry

    cout << "stooges : " << endl;

    for (auto stooge : *vector_ptr) 
        cout << stooge << " " ;
    cout<<endl;

    cout << endl;
    return 0;
}