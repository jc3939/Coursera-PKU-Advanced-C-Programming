#include<iostream>
#include<stdio.h>
using namespace std;

void fun(int a);
int main()
{
    int a;
    while(cin>>a){
    	fun(a);
    }
    return 0;
}

void fun(int a)
{
    if (a == 1) {
        cout << "End"<<endl;
    }
    else if (a % 2 == 1) {
        int result = a * 3 + 1;
        printf("%d*3+1=%d\n", a, result);
        fun(result);
    }
    else {
        int result = a / 2;
        printf("%d/2=%d\n", a, result);
        fun(result);
    } 
}