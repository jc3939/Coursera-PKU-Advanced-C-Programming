#include <iostream>
#include <string>
using namespace std;

int n = 0;

int main(){
	cin >> n;
	int m;
	char rooms[100][100];

	for(int i = 0; i<n; i++){
		cin >> rooms[i];
	}
	cin >> m;

/*This is a good example of how to deal with square problems*/
	for(int k = 1; k<m; k++){
		for(int i = 0; i<n; i++){
			for(int j = 0; j<n; j++){
				if(rooms[i][j] == '@'){
                     if(i+1<n&&rooms[i+1][j]=='.')
                       rooms[i+1][j]='!';
                     if(j-1>=0&&rooms[i][j-1]=='.')
                       rooms[i][j-1]='!';
                     if(j+1<n&&rooms[i][j+1]=='.')
                       rooms[i][j+1]='!';
                     if(i-1>=0&&rooms[i-1][j]=='.')
                       rooms[i-1][j]='!';
				}
			}
		}
		
		for(int a = 0; a<n; a++){
			for(int b = 0; b<n; b++){
				/*cout << rooms[a][b];*/
				if (rooms[a][b] == '!'){
					rooms[a][b] = '@';
				}
			}
			/*cout << endl;*/
		}
		/*cout << endl;*/
	}
	int count = 0;
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			if(rooms[i][j] == '@'){
				count+=1;
			}
		}
	}	
	cout << count << endl;
	return 0;
}