#include <iostream>
using namespace std;

int main(){
    for (int i = 1; i <= 4; i++){
        for (int j = 1; j <= 4; j++){
            if (i!=j){
                for (int k = 1; k <= 4; k++){
                    if (k != i && k != j){
                        int l = 10 - i - j - k;
                        if ((i==3) + (j == 1) + (l == 4) == 1 && (i==2)+(j==4)+(k==3)+(l==1)==1 && ((j==3) + (l==4))==1 && (i == 1) + (j==3) + (k==4) + (l==2) == 1 ){
                            cout << i << endl;
                            cout << j << endl;
                            cout << k << endl;
                            cout << l << endl;
                        }
                        }
                    }
                }   
            }
        }
    return 0;
}