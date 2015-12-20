#include <iostream>

using namespace std;

int matrix[101][101] = {0};

int main(){
	int row, col;
	cin>>row>>col;

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>matrix[i][j];
		}
	}

	for(int k=0;k<row+col;k++){
		for(int i=0;i<=k;i++){
			int j=k-i;
			if(i<row && j<col){
				cout<<matrix[i][j]<<endl;	
			}
			
		}
	}
	return 0;
}