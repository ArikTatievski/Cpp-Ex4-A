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
        void block(Player p);
    };
}