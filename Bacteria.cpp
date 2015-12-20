#include <iostream>
using namespace std;

void bubbleSort(float bact[], int indices[], int n){
    int temp1, temp2;
    for (int i = 0; i < n-1;i++){
        for (int j = i+1;j<n;j++){
            if (bact[i] > bact[j]){
                temp1 = bact[i];
                bact[i] = bact[j];
                bact[j] = temp1;
                temp2 = indices[i];
                indices[i] = indices[j];
                indices[j] = temp2;
            }
        }
    }
}

int main(){
    int n;
    float bact[100] = {0.0};
    int indices[100] = {0};
    cin >> n;
    int before, after;

    for (int i = 0; i < n; i++){
        cin >> indices[i] >>before >> after;
        bact[i] = after*1.0/before;
    }

    bubbleSort(bact, indices, n);
    // 记录最大的差
    double maxDiff = 0;
    // 和最大差的下标
    int maxDiffIndex = 0;
    for(int i = 0; i<n; i++){
        double diff = -(bact[i] - bact[i + 1]);
        if (maxDiff < diff) {
            maxDiff = diff;
            maxDiffIndex = i;
        }
    }

    cout << n-maxDiffIndex-1 << endl;

    for(int j = maxDiffIndex+1; j<n;j++){
        cout << indices[j] << endl;
    }

    cout << maxDiffIndex+1 << endl;
    for(int j = 0; j<=maxDiffIndex;j++){
        cout << indices[j] << endl;
    }

    return 0;

}