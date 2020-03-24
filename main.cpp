#include <iostream>
#include "StringBuilder.h"
#include "HashTable.h"
#include "utils.h"

using namespace std;

void testStringBuilder()
{
    cout << "Hi! Please tell me something" << endl;
    string userString;
    getline(cin, userString);
    StringBuilder finalString;
    finalString.append(userString);
    cout << "Anything else?" << endl;
    getline(cin, userString);
    finalString.append(userString);
    cout << "OK I got: " << finalString.toString();
}

void testHashTable()
{
    HashTable family;
    string name;
    int age;
    char answer = ' ';

    cout << "What's your name?" << endl;
    getline(cin, name);
    cout << "How old are you?" << endl;
    cin >> age;

    family.add(name, age);

    cout << "What's your mother's name?" << endl;
    getline(cin, name);
    cout << "How old is she?" << endl;
    cin >> age;

    family.add(name, age);

    cout << "What's your girlfriend's name?" << endl;
    getline(cin, name);
    cout << "How old is she?" << endl;
    cin >> age;

    family.add(name, age);

    while(true)
    {
        cout << "I'm ready! Who's age do you need?" << endl;
        getline(cin, name);
        cout << name << " is " << family.getValue(name) << " years old." << endl;

        cout << "Do you still need someone's age? y/n" << endl;
        cin >> answer;

        if(answer == 'n')
            break;

        answer = ' ';
    }
}

void testStringUniqueness()
{
    string stringUnderTest;
    cout << "Type in the text to check:\n";
    getline(cin, stringUnderTest);

    if(utils::isUnique(stringUnderTest))
        cout << "true\n";
    else
        cout << "false\n";
}

void testPermutation()
{
    string firstWord;
    string secondWord;

    cout << "Type the first word:\n";
    getline(cin, firstWord);
    cout << "Enter the second word:\n";
    getline(cin, secondWord);

    if(utils::isPermutation(firstWord, secondWord))
        cout << "Those words are a permutation of each other\n";
    else
        cout << "Those words are not a permutation of each other\n";
}

int main() {
    string keyboardInput;
    int choice = 0;
    char answer = ' ';

    while(true)
    {
        cout << "Choose 1 for string builder\n"
        << "\t 2 for hash table builder\n"
        << "\t 3 for string uniqueness\n"
        << "\t 4 for permutation check\n"
        << "\t 0 to exit\n";
        cin >> keyboardInput;
        cin.ignore();

        if(isdigit(keyboardInput[0]))
        {
            int choice = keyboardInput[0] - '0';

            if (0 == choice)
                break;
            else if (1 == choice)
                testStringBuilder();
            else if (2 == choice)
                testHashTable();
            else if (3 == choice)
                testStringUniqueness();
            else if (4 == choice)
                testPermutation();
            else
                cout << "Sorry I didn't understand, could you retype please?" << endl;

            cout << "Do you still want to play? y/n" << endl;
            cin >> answer;

        if(answer == 'n')
            break;
        }
        answer = ' ';
    }
    return 0;
}