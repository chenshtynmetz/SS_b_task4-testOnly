#include <iostream>
#include <string>
#include "Player.hpp"

namespace coup{
    class Assassin : public Player{
        private:

        public:
            Assassin(Game g, std::string str);
            void coup(Player &p);
    };
}