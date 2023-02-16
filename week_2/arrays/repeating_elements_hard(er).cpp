// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int arr[] = {1, 2, 3, 6, 3, 6, 1};
    int n = 7;
    for(int i = 0; i < n; i++){
        arr[arr[i]%n] += n;
    }
    for(int i = 0; i < n; i++){
        arr[i]/=n;
        if(arr[i]>1){
            cout<<i<<endl;
        }
    }
    
   
    return 0;
}