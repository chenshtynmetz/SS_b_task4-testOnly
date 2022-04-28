#pragma once
#include <iostream>
#include <string>
#include <vector>


//add destructor
namespace coup{
    class Game{
        private:
            std::vector<std::string> game_players;
        public:
            Game();
            static std::string turn();
            static std::vector<std::string> players();
            static std::string winner();
            void add_player(std::string &str);
    };
}