//
// Created by a27stude on 02.04.19.
//

#ifndef DOJO4_PLAYER_H
#define DOJO4_PLAYER_H
#include "board.h"
#include <string>
#include "input.h"

class Player
{
private:
    std::string name;
    Board& myShipsBoard;
    Board& myShotsBoard;
    Input& input;

public:
    Player();
    Player(std::string myName, Board& newMyShipsBoard, Board& newMyShotsBoard, Input& newInput)
    : name(myName),myShipsBoard(newMyShipsBoard), myShotsBoard(newMyShotsBoard), input(newInput){}
     std::string getName() const;
     std::pair<unsigned, unsigned > getMove () const;

};


#endif //DOJO4_PLAYER_H
