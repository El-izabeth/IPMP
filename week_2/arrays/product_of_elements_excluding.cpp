// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int n = 5;
    int arr[] = {10, 3, 5, 6, 2};
    int arr_prod[n];
    int pre[n];
    int suf[n];
    for(int i = 0; i < n; i++){
        arr_prod[i] = 1;
        pre[i] = 1;
        suf[i] = 1;
    }
    for(int i = 1; i < n; i++){
        pre[i] = pre[i-1]*arr[i-1];
        
    }
    for(int i = n-2; i >= 0; i--){
        suf[i] = suf[i+1]*arr[i+1];
    }
    for(int i = 0; i < n; i++){
        arr_prod[i] = pre[i]*suf[i];
        cout<<arr_prod[i]<<endl;
    }
    
    return 0;
}