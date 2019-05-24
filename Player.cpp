//
// Created by a27stude on 02.04.19.
//

#include "Player.h"

 std::string Player::getName() const
{
    return name;
}

 std::pair<unsigned, unsigned > Player::getMove() const
{
    input.getInput();
}

