#include <iostream>
#include <stdio.h>
using namespace std;

bool isSolar(int m){
    int solarMonths[7] = {1, 3, 5, 7, 8, 10, 12};
    for (int i = 0; i<7; i++){
        if (m == solarMonths[i]) return 1;
    }
    return 0;
}

bool isLeap(int y){
    if(y % 4 != 0 || (y % 100 == 0 && y % 400 != 0) || y % 3200 == 0){
        return 0;
    }
    return 1;
}


int main(){
    int y, m, d;
    scanf("%d-%d-%d",&y,&m,&d);
    if (isSolar(m)){
        if (d == 31 and m == 12){
            d = 1;
            m = 1;
            y += 1;
        } else if (d == 31){
            d = 1;
            m = m + 1;
        } else {
            d += 1;
        }
    } else if (!isSolar(m)){
        if (isLeap(y) and m == 2){
            if (d == 29){
                d = 1;
                m += 1;
            } else {
                d += 1;
            }
        } else if (!isLeap(y) and m==2){
            if (d == 28){
                d = 1;
                m += 1;
            } else {
                d += 1;
            }
        } else {
            if (d == 30){
                d = 1;
                m += 1;
            } else {
                d += 1;
            }
        }
    }
    printf("%d-%02d-%02d\n",y,m,d);
    return 0;
}