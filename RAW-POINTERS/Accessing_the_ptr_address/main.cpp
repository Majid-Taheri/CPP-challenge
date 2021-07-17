
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int num {10};
    cout<<"Value of num is "<< num << endl;
    cout << "sizeof num is" << sizeof num << endl;
    cout << "Address of num is" << &num  << endl;

    ///

    int *p;
    cout << "\nValue of p is : " << p << endl;
    cout << "Address of p is" << &p <<endl;
    cout << "Size of p is" << sizeof p << endl;

  ///
  int *p1 {nullptr};
  double *p2 {nullptr};
  unsigned long long *p3 {nullptr};
  vector<string> *p4 {nullptr};
  string *p5 {nullptr};

  cout << "\n Size of P1 is " << sizeof p1 << endl;
  cout << "\n Size of P2 is " << sizeof p2 << endl;
  cout << "\n Size of P3 is " << sizeof p3 << endl;
  cout << "\n Size of P4 is " << sizeof p4 << endl;
  cout << "\n Size of P5 is " << sizeof p5 << endl;

}