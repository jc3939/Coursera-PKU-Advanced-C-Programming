#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	int array[100] = {0};

	for (int i = 0; i<n;i++){
		cin >> array[i];
		if (array[i] == i){
			cout << i << endl;
			return 0;
		}
	}
	cout << "N" << endl;
	return 0;
}