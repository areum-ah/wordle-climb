#include <iostream>
#include "Ladder.h"

using namespace std;
bool isOneLetterApart(string word1, string word2)
{
    if (word1.length() != word2.length())
        return false;

    int difference = 0;

    for (int i = 0; i < word1.length(); i++)
    {
        if (word1[i] != word2[i])
            difference++;
    }
    return difference == 1;
}