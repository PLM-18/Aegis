#pragma once

#include <iostream>

enum class TokenType{
    IDENTIFIER, NUMBER, STRING, KEYWORD, OPERATOR //I'll add more stuff
};

struct Token {
    TokenType type;
    std::string lexeme;
    int line;
    int column;
};