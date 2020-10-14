#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    std::string name {"XXXXXX"};
    int health;
    int xp;
public:
    Player();
    Player (std::string name_val);
    Player (std::string name_val, int health_val, int xp_val);
}; 

// Player::Player (){
//     name ="None";
//     xp = 0;
//     health = 0;
// }

// Player::Player () 
//     : name {"None"}, health {0}, xp {0} {

//     }

Player::Player () 
    :Player {"None" , 0 , 0 } {
        cout <<"No-args constructor" << endl;
}


// Player::Player (std::string name_val) {
//     name = name_val;
//     xp = 0;
//     health = 0;
// }

// Player::Player (std::string name_val) 
//     : name {name_val} , health {0} , xp {0}{

// }

Player::Player (std::string name_val) :
    Player {name_val , 0 ,0 } {
        cout << "One-arg constructor" << endl;
}

// Player::Player (std::string name_val , int health_val, int xp_val) {
//     name = name_val;
//     xp = xp_val;
//     health = health_val;
// }

Player::Player (std::string name_val, int health_val, int xp_val)
    : name {name_val} , health {health_val} , xp {xp_val} {

}

int main () {
    Player empty;
    Player majid {"Majid"};
    Player hero {"Hero", 100, 11};

    return 0;
}