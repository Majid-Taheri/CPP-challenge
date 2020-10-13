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
};

int main () {

    return 0;
}