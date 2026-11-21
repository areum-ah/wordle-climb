#include<iostream>
#include<thread>
#include<chrono>
#include<string>
using namespace std;

void typeWriter(string text, int speed){
    for(char c : text){
        cout<<c<<flush;
        this_thread::sleep_for(chrono::milliseconds(speed));
    }
}

void blinkText(string text, int times, int speed){
    for(int i = 0; i < times; i++){
        //hide text
        cout << "\r"<<string(text.length(),' ')<<flush;
        this_thread::sleep_for(chrono::milliseconds(speed));
        //reveal text
        cout << "\r" << text << flush;
         this_thread::sleep_for(chrono::milliseconds(speed));
    }
}

void showInstructions(){
    cout << "\n====================================\n";
    cout << "           HOW TO PLAY\n";
    cout << "====================================\n";

    cout << "1. Solve the word clues displayed.\n";
    cout << "2. Enter your answers to progress.\n";
    cout << "3. Follow the word ladder rules.\n";
    cout << "4. Earn points for correct answers.\n";
    cout << "5. Complete the entire word ladder to win!\n";

    cout << "\nPress ENTER to return to the menu...";
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cin.get();
    }

void startGame() {
    cout << "\n====================================\n";
    cout << "           STARTING GAME\n";
    cout << "====================================\n";

    cout << "Your first puzzle will appear here soon!\n";

    cout << "\nPress ENTER to return to the menu...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

int main() {
    cout << "====================================" << endl;
    string title = "          WORDLECLIMB GAME";
    typeWriter(title,100);
    blinkText(title,3,350);
    cout << "\n";
    cout << "====================================" << endl;
    typeWriter("Welcome to WordleClimb!", 60);
    typeWriter("\nSolve the clues and climb the word ladder!", 60);
    cout << endl;

    int choice;
    do{
        cout << "\n";

        cout << "\n             MAIN MENU\n";
        cout << "\n1. Start Game";
        cout << "\n2. Instructions";
        cout << "\n3. Exit";

        cout << "\n\nEnter your choice: ";

        cin >> choice;

        if(cin.fail()){
            cout << "\nInvalid input! Please enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        switch (choice){
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

    } while (choice!=3);
   
    return 0;
}