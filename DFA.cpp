#include <iostream>
#include<cctype>
#include "DFA.h"

using namespace std;

bool validateWithDFA(string input){
    int state =0;

    for(char c: input){
        c=toupper(static_cast<unsigned char>(c));

        if(c<'A'||c>'Z'){
            state=-1;
            break;
        }
        if(state<4){
            state++;
        }
        else{
            state=-1;
            break;
        }
    }
    return state==4;
}