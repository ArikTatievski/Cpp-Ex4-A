#pragma once
#include "Player.hpp"
#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;
namespace coup
{
    class Assassin : public Player
    {
    public:
        string role = "Assassin";
        void coup(Player p);
    };
}