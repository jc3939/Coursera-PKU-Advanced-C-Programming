#include <iostream>
#include <string>
#include <stdio.h>
#include <cstring>

using namespace std;

char line[85]={'\0'};
char word[45] = {'\0'};

int main(){
    string s;
    int n;
    cin>>n;
    cin.ignore(10000, '\n');
    int countLen = 0;
    while(n--){
        scanf("%s",word);
        int lenW = strlen(word);
        if(countLen+lenW+1<79){
            if (countLen>0){
                strcat(line, " ");
            }
            strcat(line, word);
            countLen = strlen(line);
        } else if(countLen+lenW+1==80||countLen+lenW+1==79){
            printf("%s %s\n",line,word);
            countLen=0;
            line[0] = '\0';
        } else{
            printf("%s\n", line);
            strcpy(line, word);
            countLen = strlen(line);
        }
    }
    printf("%s\n",line);
    return 0;
}