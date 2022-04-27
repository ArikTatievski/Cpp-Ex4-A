#pragma once
#include "Player.hpp"
#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;
namespace coup
{
    class Ambassador : public Player
    {
    public:
        string role = "Ambassador";
        void trasnfer(Player from, Player to);
        void block(Player p);
    };
}