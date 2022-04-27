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
        Ambassador(Game g,string name): Player(g,name){}
        ~Ambassador();
        void transfer(Player from, Player to);
        void block(Player p);
    };
}