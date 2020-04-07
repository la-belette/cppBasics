//
// Created by BadaBoum on 22/03/2020.
//

#include "utils.h"
#include "StringBuilder.h"
#include "HashTable.h"
#include <map>

bool isUnique(std::string stringUnderTest)
{
    //int i = 0;
    //for(char c : stringUnderTest)
    int stringSize = stringUnderTest.size();
    char c;
    char caseShift = 'A' - 'a';
    for(int  i = 0 ; i < stringSize ; i++)
    {
        c = stringUnderTest[i];
        for (int j = i+1 ; j < stringSize ; ++j)
        {
            if ((stringUnderTest[j] == c) || (stringUnderTest[j] == c+caseShift) || (stringUnderTest[j] == c-caseShift))
                return false;
        }
    }
    return true;
}

bool isPermutation(string first, string second)
{
    StringBuilder sb1;
    StringBuilder sb2;
    sb1.append(first);
    sb2.append(second);

    for(int i = 0 ; i < sb1.size() ; i++)
    {
        for(int j = 0 ; j < sb2.size() ; j++)
        {
            if(sb1.at(i) == sb2.at(j))
            {
                sb1.remove(i, 1);
                sb2.remove(j, 1);
                i--;
                break;
            }
        }
    }

    return(sb1.isEmpty() && sb2.isEmpty());
}

string toURL(string targetString)
{
    StringBuilder url;
    bool firstNonSpaceFound = false;
    bool spaceFound = false;
    for (char c: targetString)
    {
        if (c == ' ')
        {
            if (firstNonSpaceFound)
            {
                spaceFound = true;
            }
        }
        else
        {
            if (!firstNonSpaceFound)
            {
                firstNonSpaceFound = true;
            }
            if(spaceFound)
            {
                url.append("%20");
                spaceFound = false;
            }
            url.append(c);
        }
    }
    string result = url.toString();
    return result;
}

bool isPalindromePermutation(string targetString)
{
    std::map<char,int> charactersOccurence;
    size_t length = targetString.size();
    for (char c : targetString)
    {
        if(charactersOccurence.at(c) == 0)
            charactersOccurence.emplace(c, 1);
        else
            charactersOccurence.at(c)++;
    }

    int oddOccurenceCharAmount = 0;
    for(std::pair<const char, int> pair : charactersOccurence)
    {
        if(0 != (pair.second % 2))
            oddOccurenceCharAmount++;
    }
    return oddOccurenceCharAmount <= 1;
}
