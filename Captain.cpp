#include <iostream>
#include <string>
#include "Player.hpp"
#include "Captain.hpp"

namespace coup{
    Captain::Captain(Game g, std::string str):Player(g, str){}
    void Captain::steal(Player &p){}
    void Captain::block(Player &p){}
}