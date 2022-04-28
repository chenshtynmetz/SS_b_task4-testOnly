#include <iostream>
#include <string>
#include "Player.hpp"
#include "Duke.hpp"

namespace coup{
    Duke::Duke(Game g, std::string str):Player(g, str){}
    void Duke::tax(){}
    void Duke::block(Player &p){}
}