#include <iostream>
#include <string>
#include "Player.hpp"
#include "Contessa.hpp"

namespace coup{
    Contessa::Contessa(Game g, std::string str):Player(g, str){}
    void Contessa::block(Player &p){}
}