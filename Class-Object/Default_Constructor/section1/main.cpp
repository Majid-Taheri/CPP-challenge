#include <iostream>
#include <string>

using namespace std;

class Player {
private :
    std::string name;
    int health;
    int xp;
public :
    void set_name (std::string name_val) {
        name = name_val;
    }
    std::string get_name () {
        return name;
    }
    Player() {
        name = "None";
        health = 100;
        xp = 3;
    }
};

int main () {
    Player majid;
    Player hero {"Hero", 100, 13};
    hero.set_name("Hero");
    cout << hero.get_name() << endl;
    return 0;
}