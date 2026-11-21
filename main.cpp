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

    return 0;
}