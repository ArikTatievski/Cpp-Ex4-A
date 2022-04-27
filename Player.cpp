#include <iostream>
#include <stdexcept>
#include <vector>
#include "Player.hpp"

using namespace std;
namespace coup
{
    coup::Player::Player(Game g,string name){
        this->name = name;
        this->bank = 0;
        this->game = g;
    }
    coup::Player::~Player(){}
    int coup::Player::coins(){return 0;}
    void coup::Player::income(){}
    void coup::Player::foreign_aid(){}
    void coup::Player::coup(Player p){}
}