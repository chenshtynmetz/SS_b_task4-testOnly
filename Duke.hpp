#include <iostream>
#include <string>
#include "Player.hpp"

namespace coup{
    class Duke : public Player{
        private:

        public:
            Duke(Game g, std::string str);
            void tax();
            void block(Player &p);
    };
}