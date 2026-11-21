#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <vector>
#include <limits>
#include "Puzzle.h"
using namespace std;

void typeWriter(string text, int speed)
{
    for (char c : text)
    {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(speed));
    }
}

void blinkText(string text, int times, int speed)
{
    for (int i = 0; i < times; i++)
    {
        // hide text
        cout << "\r" << string(text.length(), ' ') << flush;
        this_thread::sleep_for(chrono::milliseconds(speed));
        // reveal text
        cout << "\r" << text << flush;
        this_thread::sleep_for(chrono::milliseconds(speed));
    }
}

void startGame()
{
    vector<Puzzle> puzzles = {
        {"COLD", "Having a low temperature.", 4, 100},

        {"CORD", "A thin rope or string.", 4, 100},

        {"CARD", "A piece of paper used for greetings or playing.", 4, 100},

        {"WARD", "A section of a hospital.", 4, 100},

        {"WARM", "Having a comfortably high temperature.", 4, 100}};
    int score = 0;
    string answer;

    for (int i = 0; i < puzzles.size(); i++)
    {

        bool correct = false;

        while (!correct)
        {

            displayPuzzle(puzzles[i], i + 1);

            cin >> answer;

            if (checkAnswer(puzzles[i], answer))
            {
                cout << "\nCorrect answer!\n";
                score += puzzles[i].points;

                cout << "+" << puzzles[i].points << " points!\n";

                correct = true;
            }

            else
            {

                cout << "\nIncorrect answer! Try again.\n";
            }
        }

        cout << "\nCurrent Score: " << score << endl;
    }

    cout << "\n====================================\n";
    cout << "          LADDER COMPLETED!\n";
    cout << "====================================\n";

    cout << "Final Score: " << score << endl;

    cout << "\nCongratulations! You completed WordleClimb!\n";

    cout << "\nPress ENTER to return to the menu...";

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

void showInstructions()
{
    cout << "\n====================================\n";
    cout << "           HOW TO PLAY\n";
    cout << "====================================\n";

    cout << "1. Solve the word clues displayed.\n";
    cout << "2. Enter your answers to progress.\n";
    cout << "3. Follow the word ladder rules.\n";
    cout << "4. Earn points for correct answers.\n";
    cout << "5. Complete the entire word ladder to win!\n";

    cout << "\nPress ENTER to return to the menu...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

int main()
{
    cout << "====================================" << endl;
    string title = "          WORDLECLIMB GAME";
    typeWriter(title, 100);
    blinkText(title, 3, 350);
    cout << "\n";
    cout << "====================================" << endl;
    typeWriter("Welcome to WordleClimb!", 60);
    typeWriter("\nSolve the clues and climb the word ladder!", 60);
    cout << endl;

    int choice;
    do
    {
        cout << "\n";

        cout << "\n             MAIN MENU\n";
        cout << "\n1. Start Game";
        cout << "\n2. Instructions";
        cout << "\n3. Exit";

        cout << "\n\nEnter your choice: ";

        cin >> choice;

        if (cin.fail())
        {
            cout << "\nInvalid input! Please enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        switch (choice)
        {
        case 1:
            startGame();
            break;

        case 2:
            showInstructions();
            break;

        case 3:
            cout << "\nThank you for playing WordleClimb!\n";
            cout << "Goodbye for now!\n";
            break;

        default:
            cout << "\nInvalid choice! Please select 1, 2 or 3.\n";
        }

    } while (choice != 3);

    return 0;
}