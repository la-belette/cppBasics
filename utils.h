//
// Created by BadaBoum on 22/03/2020.
//

#ifndef TRAINING_UTILS_H
#define TRAINING_UTILS_H

#include <string>

using namespace std;

/* Check if the string has all unique characters.
 * Returns true or false. */
bool isUnique(string stringUnderTest);

/* Check if the two given strings are a permutation of one another.
 * Returns true or false */
bool isPermutation(string first, string second);

/* Deletes beginning and ending spaces.
 * Replaces in-between spaces with %20.
 * Returns new string*/
string toURL(string targetString);

/* Check if string given is a permutation of a palindrome.
 * Doesn't check if palindrome is composed of existing words.
 * Returns true or false.*/
bool isPalindromePermutation(string targetString);

#endif //TRAINING_UTILS_H
