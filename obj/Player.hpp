#pragma once
#include <iostream>
#include <stdexcept>
#include <vector>
#include "Game.hpp"

using namespace std;
namespace coup
{
    class Player
    {
    public:
        string name;
        int coins;
        Game game;
        Player(Game g,string name);
        ~Player()
        void income();
        void foreign_aid();
        void coup(Player p);
    };
}