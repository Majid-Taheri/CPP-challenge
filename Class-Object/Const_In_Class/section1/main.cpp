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
    std::string get_name() {
        return name;
    }
    void set_name(std::string name_val)   {
        name = name_val;
    }
// Overloaded Constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};

Player::Player() 
    : Player {"None",0,0} {
}

Player::Player(std::string name_val) 
   : Player {name_val,0, 0}  {
}