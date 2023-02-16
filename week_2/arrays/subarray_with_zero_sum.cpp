// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int arr[] = {-3, 2, 3, 1, 6};
    int n = 5;
    int sum = 0;
    int flag = 0;
    vector<int>sums={0};
    for(int i = 0; i < n; i++){
        sum+=arr[i];
        for(int j = 0; j < sums.size(); j++){
            //could've done binary search since sums vector is going to be sorted obviously. better time complexity thence.
            if(sums[j]==sum){
                cout<<"true: "<<i<<" is the final index of the subarray";
                flag = 1;
                break;
            }
        }
        if(flag==1)break;
        sums.push_back(sum);
            
    }
    if(flag==0)cout<<"false";
   
    return 0;
}