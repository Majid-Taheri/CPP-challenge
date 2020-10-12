#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    // attributes
    string name {"Player"};
    int health;
    int xp;
public:
    // methods
    void talk(string text_to_say) { cout << name << " says " << text_to_say << endl;  }
    bool is_dead();
};

int main() {
    Player majid;
    // majid.name = "Majid"; //compile error cannot acces private attributes 
    // cout << majid.health << endl; //compile error cannot acces private attributes 
    majid.talk("Hello there");

    return 0;
}