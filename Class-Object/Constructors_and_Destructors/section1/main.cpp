#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
   std::string name;
   int health;
   int xp;
public:
    void set_name(std::string name_val) { 
        name = name_val; 
    }
    Player() { 
        cout << "No args constructor called"<< endl;
    }
    Player(std::string name) { 
        cout << "String arg constructor called"<< endl;
    }
    Player(std::string name, int health, int xp) {
        cout << "Three args constructor called"<< endl; 
    }
    ~Player() { 
        cout << "Destructor called for " << name << endl; 
    }
};

int main() {
    {
        Player majid;
        majid.set_name("Majid");
    }

    {
        Player ronaldo;
        ronaldo.set_name("Ronaldo");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villain("Villain", 100, 12);
        villain.set_name("Villain");
    }

    Player pepe;
    Player *enemy =&pepe;
    (*enemy).set_name("Enemy");

    Player *friends = new Player;
    friends -> set_name("Friends");

    Player *level_boss = new Player("Level Boss", 1000, 300);
    level_boss->set_name("Level Boss");

    delete level_boss;
    delete friends;

    return 0;
}