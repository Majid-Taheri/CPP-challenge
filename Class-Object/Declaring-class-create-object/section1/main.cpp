#include <iostream>
#include <string>

class Player {
    // attributes
    string name {"Player"};
    int health {100};
    int xp {3};
    
    // methods
    void talk(string);
    bool is_dead();
};

int main() {

    Player frank;

    return 0;
}