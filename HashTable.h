//
// Created by BadaBoum on 03/03/2020.
//

#ifndef TRAINING_HASHTABLE_H
#define TRAINING_HASHTABLE_H

#include <list>
#include "include.h"

template <class K> class HashTable {
public:
    void add(K key, int value);
    int getValue(K key);
    int str2IntHashCode(std::string str);
    void incrementValue(K key);

private:
    std::vector<std::list<std::pair<K, int>>> table;
};

#endif //TRAINING_HASHTABLE_H
