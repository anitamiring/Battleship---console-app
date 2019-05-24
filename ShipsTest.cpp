//
// Created by a27stude on 02.04.19.
//


#include <gtest/gtest.h>
#include "field.h"
#include "board.h"
#include "input.h"
#include "Player.h"
#include "InputMock.h"

using namespace testing;

class ShipsTest : public ::testing::Test
{
public:
    ::Field testField;
    Board gameBoard{5u};
    Board gameBoard2{5u};

    StrictMock<InputMock> input;

    Player player{"kreatywne imie", gameBoard, gameBoard2, input};

};

TEST_F(ShipsTest, isFieldFree)
{
    ASSERT_EQ(FieldState::Free, testField.getState());
}

TEST_F(ShipsTest, isFirstFieldOfEmptyBoardFree)
{
    ASSERT_EQ(FieldState::Free, gameBoard.at(0, 0));
}

TEST_F(ShipsTest, isFieldStateSetOK)
{
    ASSERT_TRUE(gameBoard.setFieldState(FieldState::Hit,1,1));
}

TEST_F(ShipsTest, isInputMockWorking)
{
    auto move = std::pair<unsigned, unsigned> (2u, 1u);
    EXPECT_CALL(input, getInput()).WillOnce(Return(move));
    EXPECT_EQ(move, player.getMove());
}
