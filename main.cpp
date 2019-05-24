#include <iostream>
#include <gtest/gtest.h>
#include "Player.h"
#include "Game.h"


int main(int argc, char **argv) {
//    testing::InitGoogleTest(&argc, argv);
//    return RUN_ALL_TESTS();
        Board board1(5u);
        Board board2(5u);
        AIInput ai(5u);
        Player player1("Przemek", board1, board2, ai);
        Player player2("Wojtek", board2, board1, ai);
        Game game(board1, board2, player1, player2);
        game.run();
}