//
// Created by BadaBoum on 03/03/2020.
//

#include <cstring>
#include "HashTable.h"


template <>
int HashTable<std::string>::str2IntHashCode(std::string str)
{
    std::hash<std::string> hash_fn;
    return hash_fn(str);
}

template <typename K>
void HashTable<K>::add(K key, int value)
{
    table[hashCode(key)].push_back(keyValue(key, value));
}

template <typename K>
int HashTable<K>::getValue(K key)
{
    std::list<std::pair<K, int>> indexList = table[hashCode(key)];
    for(std::pair<K, int>  pair: indexList)
    {
        if(0 == std::strcmp(pair.first.c_str(), key.c_str()))
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
        if(0 == std::strcmp(pair.first.c_str(), key.c_str()))
            pair.second++;
    }
}
