#include <iostream>
#include <algorithm>
#include <cctype>
#include "Puzzle.h"

using namespace std;

string toUpperCase(string answer) {
    transform(answer.begin(), answer.end(), answer.begin(),
              [](unsigned char c) {
                  return toupper(c);
              });

    return answer;
}

    void displayPuzzle(const Puzzle& puzzle, int level) {

    cout << "\n====================================\n";
    cout << "             LEVEL " << level << "\n";
    cout << "====================================\n";

    cout << "\nClue: " << puzzle.clue << endl;
    cout << "Word length: " << puzzle.wordLength << endl;

    cout << "\nEnter your answer: ";
}

bool checkAnswer(const Puzzle& puzzle, string answer) {

    answer = toUpperCase(answer);

    return answer == puzzle.word;
}

