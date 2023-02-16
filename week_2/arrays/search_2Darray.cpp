#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int m = 4, n = 4;
     int  mat[4][4] = { {10, 20, 30, 40}, 
                {15, 25, 35, 45},
                {27, 29, 37, 48},
                {32, 33, 39, 50}};
     int x = 35;
     int flag = 0;
     if(x < mat[0][0])cout<<"not found";
     else if(x > mat[m-1][n-1])cout<<"not found";
     else{
         for(int i = 0; i < m; i++){
         
         if(x >= mat[i][0] && x <= mat[i][n-1]){
             
             int ub = n-1;
             int lb = 0;
             int mb = (ub + lb) / 2;
             while(ub >= lb){
                 if(x==mat[i][mb]){
                     cout<<"found at row "<<i+1<<" column "<<mb+1<<endl;
                     flag = 1;
                     break;
                 }
                 else if(x<mat[i][mb]){
                     ub = mb-1;
                 }
                 else{
                     lb = mb+1;
                 }
                 mb = (ub + lb) / 2;
             }
             if(flag==1)break;
         }
        }
        if(flag == 0)cout<<"not found";
     }
     
     
    return 0;
}