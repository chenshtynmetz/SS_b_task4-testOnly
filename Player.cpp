#include <iostream>
#include <string>
#include "Game.hpp"
#include "Player.hpp"

namespace coup{
    Player::Player(Game &g, std::string& str){
        this->game = g;
        this->name = str;
        my_coins = 0;
        my_role = "h";
        status = true;
    }
    void Player::income(){}
    void Player::foreign_aid(){}
    void Player::coup(Player& p){} //check if need write virtual
    std::string Player::role(){
        return "hi";
    }
    int Player::coins(){
        return 1;
    }
}