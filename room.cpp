#include "room.h"

void room::setExits(room *north, room *south, room *east, room *west){
    this->exits["North"] = north;
    this->exits["South"] = south;
    this->exits["East"] = east;
    this->exits["West"] = west;
}

void room::setPageNumber(int pn){
    this->pageNumber = pn;
}

int room::getPageNumber() const{
    return this->pageNumber;
}

map<string, room *> room::getExits(){
    return this->exits;
}

void room::setPuzzle(puzzle* obj){
    this->roomPuzzle = obj;
}

puzzle* room::getPuzzle() {
    return roomPuzzle;
}
