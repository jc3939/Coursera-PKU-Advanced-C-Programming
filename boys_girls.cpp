#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

char boy, girl;
char c[105] = {};

int bg(int n){
    if(c[n] == girl){
        return n;
    }
    if(c[n] == '\0'){
        return n;
    }
    int r = n+1;

    while(c[r]!='\0' && c[r]!=girl){
        r = bg(r);
    }
    if (c[r] == girl){
        cout << n << " "<< r<< endl;
        return r+1;//return to the next person of the girl
    }
    else{
        return r;
    }
    
}

int main(){
    cin >> c;
    //find out char which can represent boy. 
    boy  = c[0];
    int n = strlen(c);
    for(int i=0; i<n;i++){
        if(c[i]!= boy){
            girl = c[i];
            break;
        }
    }
    int i = 0;
    //start our recursion
    while(i<n){
        i = bg(i);
    }
    return 0;
}