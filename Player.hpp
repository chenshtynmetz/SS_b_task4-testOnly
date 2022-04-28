#pragma once
#include <iostream>
#include <string>
#include "Game.hpp"


namespace coup{
    class Player{
        protected:
            std::string name;
            Game game;
            int my_coins;
            std::string my_role;
            bool status; //the player in play?      ??
        public:
            Player(Game& g, std::string& str);
            void income();
            void foreign_aid();
            virtual void coup(Player& p);
            static std::string role();
            static int coins();
    };
}
