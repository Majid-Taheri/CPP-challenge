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
    Player(std::string name_val ="None", int health_val = 0, int xp_val = 0);
};