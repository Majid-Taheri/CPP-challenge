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
    Player hero;

    Player *enemy {nullptr};
    enemy = new Player;


    Player *good = new Player();


    delete enemy;
    delete good;

    return 0;
}