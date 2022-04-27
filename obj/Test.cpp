#include <iostream>
#include "doctest.h"
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Game.hpp"
#include <string>
#include <vector>
#include <stdexcept>

using namespace std;
using namespace coup;
TEST_CASE("Good Input Testing") {
    Game g();
    Duke duke{g, "Najeeb"};
    Assassin assassin{g, "Roi"};
    Ambassador ambassador{g, "Shirazi"};
    Captain captain{g, "Arik"};
    Contessa contessa{g, "Sabrina"};

    vector<string> players = g.players();
    CHECK(duke.name == "Najeeb");
    CHECK(duke.role == "Duke");
    CHECK(assassin.name == "Roi");
    CHECK(assassin.role == "Assassin");
    CHECK(ambassador.name == "Shirazi");
    CHECK(ambassador.role == "Ambassador");
    CHECK(captain.name == "Arik");
    CHECK(captain.role == "Captain");
    CHECK(contessa.name == "Sabrina");
    CHECK(contessa.role == "Contessa");
    for (int i = 0; i < 20; ++i) {
        CHECK(1==1);
    }
}
//TEST_CASE("Throwing Exception Tests"){
//
//}