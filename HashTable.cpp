//
// Created by BadaBoum on 03/03/2020.
//

#include <cstring>
#include "HashTable.h"

typedef std::pair<std::string, int> keyValue;

int HashTable::hashCode(std::string str)
{
    std::hash<std::string> hash_fn;
    return hash_fn(str);
}

void HashTable::add(std::string name, int age)
{
    table[hashCode(name)].push_back(keyValue(name, age));
}

int HashTable::getValue(std::string name)
{
    std::list<keyValue> indexList = table[hashCode(name)];
    for(keyValue pair: indexList)
    {
        if(0 == std::strcmp(pair.first.c_str(), name.c_str()))
            return pair.second;
    }
}
