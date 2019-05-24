//
// Created by a27stude on 02.04.19.
//


#include "input.h"

std::pair<unsigned, unsigned> HumanInput::getInput()
{
    unsigned x,y;
    std::cout << "Podaj koordynaty x i y: ";
    std::cin >> x >> y;
    return std::make_pair(x,y);
}

std::pair<unsigned, unsigned> AIInput::getInput()
{
    unsigned x,y;
    x = rand()%sizeOfBoard;
    y = rand()%sizeOfBoard;
    return std::make_pair(x,y);
}

AIInput::AIInput(unsigned bounds): sizeOfBoard(bounds)
{
    srand(time(NULL));
}

