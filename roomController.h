#ifndef ROOMCONTROLLER_H
#define ROOMCONTROLLER_H
#include "room.h"
#include "object.h"
#include"mathpuzzle.h"
#include "riddlepuzzle.h"
#include "character.h"
using namespace std;

class roomController{
private:
    room currentRoom;
public:
    roomController();
    room getCurrentRoom();
    void setCurrentRoom(room *r);
    int switchRoom(string *direction);
    void createRooms();

};

#endif // ROOMCONTROLLER_H
