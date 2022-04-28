#include <iostream>
#include <string>
#include "Player.hpp"
#include "Assassin.hpp"

namespace coup{
    Assassin::Assassin(Game g, std::string str):Player(g, str){}
    void Assassin:: coup(Player &p){}
}