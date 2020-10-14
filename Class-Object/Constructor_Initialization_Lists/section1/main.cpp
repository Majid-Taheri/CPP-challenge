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