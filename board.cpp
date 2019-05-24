//
// Created by a27stude on 02.04.19.
//

#include <iostream>
#include "board.h"

Board::Board(unsigned newSize) : gameBoard(newSize * newSize, Field()), size(newSize)
{}

FieldState Board::at(unsigned x, unsigned y)
{
    if (x < size && y < size)
    {
        return gameBoard[(y * size) + x].getState();
    } else
    {
        return FieldState::OutOfBounds;
    }
}

bool Board::setFieldState(FieldState newState, unsigned x, unsigned y)
{

    if (at(x, y) != FieldState::OutOfBounds)
    {
        gameBoard[(y * size) + x].setState(newState);
        return true;
    }
    return false;
}

unsigned Board::getSize()
{
    return size;
}

void Board::printBoard()

{
    for(int i = 0; i < size*size ; i++){
        if(i%size == 0){
            std::cout << std::endl;
        }

        switch(gameBoard[i].getState()){
            case FieldState::Free: std::cout<< ".";
            break;
            case FieldState::IsShip: std::cout << ">";
            break;
            case FieldState::Hit: std::cout << "x";
            break;
        }
    }
    std::cout << std::endl;
}
