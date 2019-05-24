//
// Created by a27stude on 02.04.19.
//

#ifndef DOJO4_GAME_H
#define DOJO4_GAME_H


#include "board.h"
#include "Player.h"

class Game
{
//    Board& player1Board;
//    Board& player2Board;
//    Player& player1;
//    Player& player2;
    std::pair<Player&, Board&> pair1;
    std::pair<Player&, Board&> pair2;
    const unsigned ShipsN = 5;

public:
    Game(Board& board1, Board& board2, Player& player1st, Player& player2nd)
    : pair1(player1st, board1)
    , pair2(player2nd, board2)
    {
//        pair1.first = player1st;
        //{player1st, board1};
        //pair2{player2nd, board2};
//        std::string name;
//        std::cout<< "First player name: ";
//        std::cin >> name;
//        std::cout<< "Second player name: ";
//        std::cin >> name;
    }

    void run();
    void placeShips(const std::pair<Player&, Board&>& playerPair);

    bool canShipBePlaced(Board& board, unsigned x, unsigned y);
    bool isGameFinished();
};


#endif //DOJO4_GAME_H
