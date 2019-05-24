//
// Created by a27stude on 02.04.19.
//

#ifndef DOJO4_FIELD_H
#define DOJO4_FIELD_H

enum class FieldState
{
    Free,
    IsShip,
    Hit,
    Missed,
    OutOfBounds
};

class Field
{
private:
    FieldState state;
public:
    Field() : state(FieldState::Free){}
    void setState(FieldState newState);
    FieldState getState();
};


#endif //DOJO4_FIELD_H
