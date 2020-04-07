//
// Created by BadaBoum on 07/04/2020.
//

#include "HashTable.h"

template<>
bool HashTable<std::string>::isEqual(std::string keyUnderTest, std::string referenceKey) {
    return (0 == std::strcmp(keyUnderTest.c_str(), referenceKey.c_str()));
}

template<>
bool HashTable<char>::isEqual(char keyUnderTest, char referenceKey) {
    return (keyUnderTest == referenceKey);
}

template <>
int HashTable<std::string>::hashCode(std::string str)
{
    std::hash<std::string> hash_fn;
    return hash_fn(str);
}

template<>
int HashTable<char>::hashCode(char c) {
    return static_cast<int>(c);
}