#include <stdio.h>
#include "player.hpp"
#include "card.hpp"

namespace ariel
{
    class Game
    {
    public:
        Game(ariel::Player & player1, ariel::Player & player2) {}
        void playTurn();
        void printLastTurn();
        void playAll();
        void printWiner();
        void printLog();
        void printStats();
    };
}
