#ifndef ROOMCONTROLLER_H
#define ROOMCONTROLLER_H
#include "room.h"
#include "object.h"
#include"mathpuzzle.h"
#include "riddlepuzzle.h"
#include "character.h"
#include "player.h"
using namespace std;
class roomController{
private:
    room* currentRoom;
    player* currentPlayer;

public:
    roomController();
    room* getCurrentRoom();
    player getPlayer();
    void setCurrentRoom(room *r);
    int switchRoom(string *direction);
    void createRooms();
    void addToCharacterInventory(Item i);
    void removeFromCharacterInventory(Item i);

};

#endif // ROOMCONTROLLER_H
