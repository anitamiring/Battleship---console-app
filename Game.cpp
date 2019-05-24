//
// Created by a27stude on 02.04.19.
//

#include "Game.h"

void Game::run()
{
    placeShips(pair1);
    placeShips(pair2);

}

void Game::placeShips(const std::pair<Player&, Board&>& playerPair)
{
    std::cout<<"Player "<<playerPair.first.getName() << " your turn!";

    int placedShip = 0;
    while(placedShip < ShipsN)
    {
        std::cout<<"Place your ship "<<playerPair.first.getName() << std::endl;
        auto myMove =  playerPair.first.getMove();
        if (playerPair.second.at(myMove.first, myMove.second) == FieldState::Free)
        {
            if(canShipBePlaced(playerPair.second, myMove.first, myMove.second))
            {
                playerPair.second.setFieldState(FieldState::IsShip, myMove.first, myMove.second);
                ++placedShip;
                playerPair.second.printBoard();
            }
        }
    }

}

bool Game::canShipBePlaced(Board &board, unsigned x, unsigned y)
{
    int sx = static_cast<int>(x);
    int sy = static_cast<int>(y);
    for (int i = sx-1; i <= sx+1; ++i)
    {
        for (int j = sy-1; j <= sy+1; ++j)
        {
            if (board.at(i, j) == FieldState::IsShip) {
                return false;
            }
        }
    }
    return true;
}

bool Game::isGameFinished()
{
    for(int i = 0; i < size*size; )
    return false;
}

