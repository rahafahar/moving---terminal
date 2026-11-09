#ifndef PLAYER_H
#define PLAYER_H

class Room;

class Player{
    private:
        //Inventory inventory;
        int x;
        int y;
        

    public:
        Player();
        ~Player();
        int getX();
        int getY();
        bool move(char direction, Room * room);

};

#endif