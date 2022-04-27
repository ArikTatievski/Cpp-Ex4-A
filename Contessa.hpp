#pragma once
#include "Player.hpp"
#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;
namespace coup
{
    class Contessa : public Player
    {
    public:
        string role = "Contessa";
        Contessa(Game g,string name): Player(g,name){}
        ~Contessa();
        void block(Player p);
    };
}