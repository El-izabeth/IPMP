#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int arr[4][4] = {
        {0,0,1,1},{0,0,0,1},{0,1,1,1},{0,0,0,0}
    };
    int m = 4, n = 4;
    int c;
    int min = 0;
    int min_c = 4;
    int j;
    int i;
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            if(arr[i][j]==1){
                break;
            }
            c++;
        }
        if(c<min_c){
            min = i;
            min_c = c;
        }
        c=0;
    }
    cout<<min;
    
    return 0;
}