#include <iostream>
#include <stdexcept>
#include <vector>
#include "Game.hpp"

using namespace std;
namespace coup
{
    coup::Game::Game(){}
    coup::Game::~Game(){}
    string coup::Game::turn(){return "a";}
    vector<string> coup::Game::players(){vector<string> a;return a;}
    string coup::Game::winner(){return "a";}
}