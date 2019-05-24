//
// Created by a27stude on 02.04.19.
//

#ifndef DOJO4_INPUT_H
#define DOJO4_INPUT_H

#include <iostream>
#include <utility>
#include <ctime>

class Input
{
public:
    virtual std::pair<unsigned, unsigned> getInput() = 0;

};

class HumanInput : public Input
{
public:
    std::pair<unsigned, unsigned> getInput() override;

};

class AIInput : public Input
{
private:
    unsigned sizeOfBoard;
public:
    std::pair<unsigned, unsigned> getInput() override;
    AIInput(unsigned bounds);

};


#endif //DOJO4_INPUT_H
