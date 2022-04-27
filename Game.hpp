#pragma once
#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;
namespace coup
{
    class Game
    {
    public:
        string curret;
        vector<string> active;
        string champ;
        Game();
        ~Game();
        string turn();
        vector<string> players();
        string winner();
    };
}