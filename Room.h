 #ifndef ROOM_H
 #define ROOM_H

//#include "Player.h"
class Player;

class Room{
    private:
        Player * player;
        int width;
        int height;
        char ** map;

    public:
        Room(int x, int y, Player * player); //allocates map
        ~Room();    // deallocates map
        void draw();
        //char tileAt(int x, int y);
        bool canMove(int x, int y);
      //  void placeItem(Item i);
        //Item takeItem(int x, int y);
 

};

#endif