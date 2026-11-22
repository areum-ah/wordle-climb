#include <iostream>
#include<cctype>
#include "DFA.h"

using namespace std;

bool validateWithDFA(string input){
    int state =0;

    cout << "\n========== DFA PROCESSING ==========\n";
    cout << "Input: " << input << "\n\n";

    for(char c: input){
        c=toupper(static_cast<unsigned char>(c));

        if(c<'A'||c>'Z'){
            state=-1;
            break;
        }
        if(state<4){
              cout << "q" << state << " --" << c << "--> q" << state + 1 << "\n";
              state++;
        }
        else{
            cout << "q4 --" << c << "--> DEAD\n";
            state=-1;
            break;
        }
    }
   cout << "\n";

    if (state == 4) {
        cout << "Final State: q4\n";
        cout << "DFA Result: ACCEPTED\n";
        return true;
    }
    else {
        cout << "Final State: DEAD / NON-ACCEPTING\n";
        cout << "DFA Result: REJECTED\n";
        return false;
    }
}