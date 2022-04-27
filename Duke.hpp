#pragma once
#include "Player.hpp"
#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;
namespace coup
{
    class Duke : public Player
    {
    public:
        string role = "Duke";
        Duke(Game g,string name) : Player(g,name){}
        ~Duke();
        void tax();
        void block(Player p);
    };
}