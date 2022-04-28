/**
 * AUTHORS: <chen>
 * 
 * Date: 04/2022
 */

#include "doctest.h"
#include "Game.hpp"
#include "Player.hpp"
#include "Assassin.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Duke.hpp"
#include "Ambassador.hpp"

using namespace coup;
#include <string>




// test example of the game.
TEST_CASE("game example") {
	Game game{};
	Duke duke{game, "p1"};
	Assassin assassin{game, "p2"};
	Ambassador ambassador{game, "p3"};
	Captain captain{game, "p4"};
	Contessa contessa{game, "p5"};
	CHECK(game.turn() == "p1");
	CHECK_NOTHROW(duke.income());
	CHECK_THROWS(duke.income());
	CHECK_NOTHROW(assassin.income());
	CHECK_THROWS(assassin.income()); 
	CHECK_NOTHROW(ambassador.income());
	CHECK_THROWS(ambassador.income());
	CHECK_NOTHROW(captain.income());
	CHECK_THROWS(captain.income());
	for(int i=0; i<3; i++){
		duke.income();
		assassin.income();
		ambassador.income();
		captain.income();
		contessa.income();
	}
	CHECK(assassin.coins() == 4);
	CHECK_THROWS(duke.coup(assassin));
	CHECK_NOTHROW(assassin.coup(duke));
	CHECK_THROWS(ambassador.coup(contessa));
	CHECK_THROWS(captain.coup(assassin));
	CHECK_THROWS(contessa.coup(assassin));
	CHECK(assassin.coins() == 1);
	for(int i=0; i<10; i++){
		assassin.income();
		ambassador.income();
		captain.income();
		contessa.income();
	}
	CHECK_THROWS(ambassador.coup(contessa));
	CHECK_THROWS(contessa.foreign_aid());
	CHECK_THROWS(ambassador.coup(duke));
	CHECK_THROWS(captain.income());
}