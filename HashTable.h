//
// Created by BadaBoum on 03/03/2020.
//

#ifndef TRAINING_HASHTABLE_H
#define TRAINING_HASHTABLE_H

#include <list>
#include <cstring>
#include "include.h"

template <class K> class HashTable {
public:
    void add(K key, int value);
    bool hasKey(K key);
    int getValue(K key);
    void incrementValue(K key);
    typename std::vector<std::list<std::pair<K, int>>>::iterator begin();
    typename std::vector<std::list<std::pair<K, int>>>::iterator end();

private:
    std::vector<std::list<std::pair<K, int>>> table;

    int hashCode(K key);
    bool isEqual(K keyUnderTest, K referenceKey);
};

template <typename K>
void HashTable<K>::add(K key, int value)
{
    table[hashCode(key)].push_back(std::pair<K,int>(key,value));
}

template <typename K>
int HashTable<K>::getValue(K key)
{
    std::list<std::pair<K, int>> indexList = table[hashCode(key)];
    for(std::pair<K, int>  pair: indexList)
    {
        if(pair.first == key)
            return pair.second;
    }
    return 0;
}

template<typename K>
void HashTable<K>::incrementValue(K key)
{
    std::list<std::pair<K, int>> indexList = table[hashCode(key)];
    for(std::pair<K, int>  pair: indexList)
    {
        if(isEqual(pair.first, key))
        {
            pair.second++;
            return;
        }
    }
}

template<class K>
bool HashTable<K>::hasKey(K key)
{
    for(std::pair<K,int> pair : table)
    {
        if(isEqual(pair.first, key))
            return true;
    }
    return false;
}

template<class K>
typename std::vector<std::list<std::pair<K, int>>>::iterator HashTable<K>::begin() {
    return table.begin();
}

template<class K>
typename std::vector<std::list<std::pair<K, int>>>::iterator HashTable<K>::end() {
    return table.end();
}

#endif //TRAINING_HASHTABLE_H
