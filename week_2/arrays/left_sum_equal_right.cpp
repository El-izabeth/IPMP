// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int arr[] = {1,4,2,5,0};
    int n = 5;
    int sum_R = 0;
    int sum_L = 0;
    for(int i = 1; i < n; i++){
        sum_R+=arr[i];
    }
    sum_L = 0;
    int p_el = arr[0];
    for(int i = 1; i < n; i++){
        if(sum_L==sum_R){
            cout<<p_el;
            break;
        }
        else{
            sum_L += p_el;
            sum_R -= arr[i];
        }
        p_el = arr[i];
    }
    
    
   
    return 0;
}