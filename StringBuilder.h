//
// Created by BadaBoum on 03/03/2020.
//

#ifndef TRAINING_STRINGBUILDER_H
#define TRAINING_STRINGBUILDER_H

#include "include.h"

class StringBuilder {
public:
    void append(std::string string);
    void append(char character);
    void appendLine(std::string text);
    void replace(char charInPlace, char newChar);
    void remove(unsigned int position, int length);
    bool isEmpty();
    size_t size();
    char at(unsigned int position);
    std::string toString();

private:
    std::vector<char> charArray;
};

#endif //TRAINING_STRINGBUILDER_H
