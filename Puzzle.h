#ifndef PUZZLE_H
#define PUZZLE_H

#include <string>
using namespace std;

struct Puzzle {
    string word;
    string clue;
    int wordLength;
    int points;
};

void displayPuzzle(const Puzzle& puzzle, int level);
bool checkAnswer(const Puzzle& puzzle, string answer);
string toUpperCase(string answer);

#endif
