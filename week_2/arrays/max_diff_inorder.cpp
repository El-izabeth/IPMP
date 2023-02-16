// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int arr[] = {7, 9, 5, 6, 3, 2};
    int n = 6;
    int min = 0;
    int max = 1;
    
    while(arr[min]>arr[max]){
        max++;
        if(arr[max]<arr[min])min++;
    }
    int max_diff = arr[max] - arr[min];
    for(int i = 1; i < n; i++){
        
        if(arr[i] > arr[max]){
            if(i>min){
                max = i;
            }
            
        }
        else if(arr[i] < arr[min]){
            if(i<max){
                min = i;
            }
            
        }
        if(arr[max] - arr[min] > max_diff){
            max_diff = arr[max] - arr[min];
        }
    }
    cout<<max_diff;
    return 0;
}