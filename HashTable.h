//
// Created by BadaBoum on 03/03/2020.
//

#ifndef TRAINING_HASHTABLE_H
#define TRAINING_HASHTABLE_H

#include <list>
#include "include.h"

class HashTable {
public:
    void add(std::string name, int age);
    int getValue(std::string name);

private:
    int hashCode(std::string str);
    std::vector<std::list<std::pair<std::string, int>>> table;
};

#endif //TRAINING_HASHTABLE_H
