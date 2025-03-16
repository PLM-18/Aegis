#pragma once

#include "token.h"
class Lexer{
    public:
        std::string source;
        int position = 0;
        int line = 1;
        int column = 1;

        char getNext();
        Token scanToken();
};