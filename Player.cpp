#include "Player.h"
#include "Room.h"
#include <iostream>

using namespace std;

Player::Player(){
    this->x = 3;
    this->y = 3;
}
Player::~Player(){

}
int Player::getX(){
    return this->x;
}
int Player::getY(){
    return this->y;
}
bool Player::move(char direction, Room * room){
    //take in direction, check direction, check if can move in room, if can move change player x,y
    if(direction == 'w'){
        //check if blocked at intended pos
        if(room->canMove(this->x, this->y - 1)) {
            this->y -= 1;
            return true;
        }

    } else if(direction == 'a'){
        if(room->canMove(this->x - 1, this->y)) {
            this->x -= 1;
            return true;
        }
    } else if(direction == 'd'){
        if(room->canMove(this->x + 1, this->y )) {
            this->x += 1;
            return true;
        }
    } else if(direction == 's'){
        if(room->canMove(this->x, this->y + 1)) {
            this->y += 1;
            return true;
        }
    } 
    //return true is player moves
    return false;
}
