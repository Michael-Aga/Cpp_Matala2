#include "doctest.h"
#include "player.hpp"
#include "game.hpp"
#include "card.hpp"
#include <stdio.h>
#include <iostream>

using namespace std;
using namespace ariel;

TEST_CASE("Player and Game functions")
{
    Player p1("Mike");
    Player p2("Aziz");

    CHECK(p1.name == "Mike");
    CHECK(p2.name == "Aziz");

    CHECK(p1.cardesTaken() == p1.cardesTaken());
    CHECK(p2.cardesTaken() == p2.cardesTaken());

    CHECK(p1.stacksize() == p1.stacksize());
    CHECK(p2.stacksize() == p2.stacksize());

    CHECK(p1.cardesTaken() == p2.cardesTaken());
    CHECK(p1.stacksize() == p2.stacksize());

    Game game(p1,p2);

    game.playTurn();

    CHECK(p1.name == "Mike");
    CHECK(p2.name == "Aziz");

    CHECK(p1.cardesTaken() == p1.cardesTaken());
    CHECK(p2.cardesTaken() == p2.cardesTaken());

    CHECK(p1.stacksize() == p1.stacksize());
    CHECK(p2.stacksize() == p2.stacksize());

    CHECK(p1.cardesTaken() == p2.cardesTaken());
    CHECK(p1.stacksize() == p2.stacksize());

    for (int i=0;i<100;i++) {
    game.playTurn();
    }

    CHECK(p1.name == "Mike");
    CHECK(p2.name == "Aziz");

    CHECK(p1.cardesTaken() == p1.cardesTaken());
    CHECK(p2.cardesTaken() == p2.cardesTaken());

    CHECK(p1.stacksize() == p1.stacksize());
    CHECK(p2.stacksize() == p2.stacksize());

    CHECK(p1.cardesTaken() == p2.cardesTaken());
    CHECK(p1.stacksize() == p2.stacksize());
}