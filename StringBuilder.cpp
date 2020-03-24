//
// Created by BadaBoum on 03/03/2020.
//

#include <vector>
#include "StringBuilder.h"

void StringBuilder::append(std::string str) {
    for(char c : str)
    {
        charArray.push_back(c);
    }
}

void StringBuilder::append(char character) {
    charArray.push_back(character);
}

void StringBuilder::appendLine(std::string text) {
    append(text);
    charArray.push_back('\n');
}

void StringBuilder::replace(char charInPlace, char newChar) {
    for(std::vector<char>::iterator it = charArray.begin(); it != charArray.end(); it++)
    {
        if(*it == charInPlace)
            *it = newChar;
    }
}

void StringBuilder::remove(unsigned int position, int length)
{
    std::vector<char>::iterator it = charArray.begin();
    charArray.erase(it+position);
}

std::string StringBuilder::toString() {
    char finalArray[charArray.size()];
    int i = 0;
    for (auto charAtIndex = charArray.begin(); charAtIndex != charArray.end(); ++charAtIndex)
    {
        finalArray[i] = *charAtIndex;
    }
    return finalArray;
}

bool StringBuilder::isEmpty() {
    return charArray.empty();
}

size_t StringBuilder::size() {
    return charArray.size();
}

char StringBuilder::at(unsigned int position) {
    return charArray.at(position);
}
