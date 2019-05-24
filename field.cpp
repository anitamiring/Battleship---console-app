//
// Created by a27stude on 02.04.19.
//

#include "field.h"


void Field::setState(FieldState newState)
{
    state = newState;
}

FieldState Field::getState()
{
    return state;
}
