//
// Created by a27stude on 02.04.19.
//

#ifndef DOJO4_INPUTMOCK_H
#define DOJO4_INPUTMOCK_H

#include "input.h"
#include <gmock/gmock.h>

class InputMock : public Input
{
public:
    MOCK_METHOD0(getInput, std::pair<unsigned, unsigned>());
};


#endif //DOJO4_INPUTMOCK_H
