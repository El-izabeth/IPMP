#include <bits/stdc++.h>
using namespace std;
//weird output bro
//i think O(n^3logn)
int main() {
    // Write C++ code here
    int arr[] = {1, 7, 1, 3, 9};
    int n = 5;
    int y = 20;
    int ub = n-1;
    int lb = 0;
    int mb = (ub+lb)/2;
    sort(arr,arr+n);
    for(int i = 0; i < n; i++)printf("%d ",arr[i]);
        printf("\n");
        int flag = 0;
        int el;
        int x;
        int z;
        for(int k = 0; k < n; k++){
            z = y - arr[k];
            for(int j = 0; j < n; j++){
                if(j==k)continue;
                x = z - arr[j];
                for(int i = 0; i < n; i++){
                    if(i==j||i==k)continue;
                    el = x - arr[i];
                    ub = n-1;
                    lb = 0;
                    mb = (ub+lb)/2;
                    while(ub>=lb){
                        
                        if(el>arr[mb]){
                            lb = mb+1;
                        }
                        else if(el<arr[mb]){
                            ub = mb-1;
                        }
                        
                        else{
                            if(mb==i || mb==j || mb==k)break;
                            cout<<"quadraplet exists!"<<endl;
                            flag = 1;
                            break;
                        }
                        mb = (ub+lb)/2;
                        
                        
                    }
                    if(flag==1)break;
                }
            if(flag==1)break;
        }
        if(flag==1)break;
        }
        
    
    if(flag==0){
        cout<<"no such quadraplet exists!"<<endl;
    }
    return 0;
}
