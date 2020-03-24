//
// Created by BadaBoum on 22/03/2020.
//

#include "utils.h"
#include "StringBuilder.h"

bool utils::isUnique(std::string stringUnderTest)
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

bool utils::isPermutation(string first, string second)
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