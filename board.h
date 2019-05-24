//
// Created by a27stude on 02.04.19.
//

#ifndef DOJO4_BOARD_H
#define DOJO4_BOARD_H

#include <vector>
#include "field.h"

class Board
{
private:
    unsigned size;
    std::vector<Field> gameBoard;
public:
    Board(unsigned newSize);
    FieldState at(unsigned x, unsigned y);
    bool setFieldState(FieldState newState, unsigned x, unsigned y);
    unsigned getSize();
    void printBoard();
};


#endif //DOJO4_BOARD_H
