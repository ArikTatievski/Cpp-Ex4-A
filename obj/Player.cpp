#include <iostream>
#include <stdexcept>
#include <vector>
#include "Player.hpp"

using namespace std;
namespace coup
{
    Player(Game g,string name){
        this->name = name;
        this->coins = 0;
        this->game = g;
    }
    ~Player(){}
    void income(){}
    void foreign_aid(){}
    void coup(Player p){}
}