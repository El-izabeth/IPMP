#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int arr[] = {0,-10,1,3,-20}; 
    
    int n = 5;
    sort(arr,arr+n);
    int k = arr[n-1];
    int flag = 0;
    //int c = -1;
    for(int i = 0 ; i < n; i++){
        if(arr[i]>0){
           
            //c = i;
            for(int j = 1; j < k; ){
                 //printf("hii");
                if(i==n){
                    
                    //cout<<(k+1);
                    break;   
                }
                else if(arr[i]!=j){
                    cout<<j<<endl;
                    flag = 1;
                    break;   
                }
                else if(i!=(n-1)&&arr[i]==arr[i+1]){
                    i++;
                    
                }
                else{
                    
                    i++;j++;
                }
            }
            if(flag==0)cout<<(k+1)<<endl;
            break;
            
        }
    }
    
    return 0;
}