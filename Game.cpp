#include <iostream>
#include <string>
#include <vector>
#include "Game.hpp"

// #pragma once

namespace coup{
    Game::Game(){}
    std::string Game::turn(){
        return "hi";
    }
    std::vector<std::string> Game::players(){
        std::vector<std::string> vec = {"hi"};
        return vec;
    }
    std::string Game::winner(){
        return "hi";
    }
    void add_player(std::string& str){

    }
}