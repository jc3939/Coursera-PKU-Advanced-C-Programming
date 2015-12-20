#include <iostream>
using namespace std;

const int maxn = 100 + 5;
int matrix[maxn][maxn];

int main(){
    int k, m, n;
    cin >> k;
    
    while(k--){
        cin>>m>>n;
        for(int i=0;i<m;i++){
            for(int j=0; j<n;j++){
                cin>>matrix[i][j];
            }
        }
        int s = 0;
        if(m!=1){
            for(int y=0;y<n;y++){
                s+=matrix[0][y];
            }
            for(int y=0;y<n;y++){
                s+=matrix[m-1][y];
            } 
        } else{
            for(int y=0;y<n;y++){
                s+=matrix[0][y];
            } 
        }
        if(n!=1){
            for(int y=1;y<m-1;y++){
                s+=matrix[y][0];
            }
            for(int y=1;y<m-1;y++){
                s+=matrix[y][n-1];
            }
        } else {
            for(int y=1;y<m-1;y++){
                s+=matrix[y][0];
            }
        }
        cout<<s<<endl;
    }
    return 0;
}