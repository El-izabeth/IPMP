// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int arr[] = {1, 60, -10, 70, -80, 85};
    int n = 6;
   
    
    sort(arr,arr+n);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int l = 0;
    int r = 5;
    int min_sum = arr[l] + arr[r];
    while(l>r){
        if(min_sum > 0){
            r--;
        }    
        else if(min_sum < 0){
            l++;
        }
       
        if(abs(min_sum) > abs(arr[l]+arr[r])){
            min_sum = arr[l]+arr[r];
        }
            
    }
    cout<<min_sum;
    
   
    return 0;
}