#pragma once
#include <iostream>
#include <stdexcept>
#include <vector>
#include "Player.hpp"

using namespace std;
namespace coup
{
    class Game
    {
    public:
        string turn;
        vector<string> players;
        string winner;
        Game(){}
        ~Game()
        Player turn();
        string players();
        string winner();
    };
}