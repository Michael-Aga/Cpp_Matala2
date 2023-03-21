#pragma once
#include <stdio.h>
#include <string>

namespace ariel
{
    class Player
    {
    public:
        std::string name;
        
        Player(const std::string &name){};

        int stacksize();

        int cardesTaken();
    };

}