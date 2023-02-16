// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int arr[] = {100, -3, -10, -6, 500, 8, 1};
    int n = 7;
    int j = 0;
    int k = 1;
    
    sort(arr,arr+n);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int min_diff = abs(arr[j]-arr[k]);
     for(int i = 2; i < n; i++){
        if(abs(arr[i]-arr[i-1]) < min_diff){
            min_diff = abs(arr[i] - arr[i-1]);
        }
        
    }
    cout<<min_diff;
    
   
    return 0;
}