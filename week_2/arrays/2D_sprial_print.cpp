// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int m = 4, n = 4;
    int  mat[m][n] =  { {10, 20, 30, 40}, 
                        {15, 25, 35, 45},
                        {27, 29, 37, 48},
                        {32, 33, 39, 50} };
    int r1 = 0;
    int c1 = 0;
    int r2 = m-1;
    int c2 = n-1;
    int t = 0;
    while(r2>=r1 && c2>=c1){
        if(t == 0){
            for(int i = c1; i < c2+1; i++){
                cout<<mat[m-r2-1][i]<<" ";
            }
            r1++;
            for(int i = r1; i < r2+1; i++){
                cout<<mat[i][n-c1-1]<<" ";
            }
            c2--;
            
            t = 1;
        }  
        else{
            for(int i = c2; i >= c1; i--){
                cout<<mat[r2][i]<<" ";
            }
            r2--;
            for(int i = r2; i >= r1; i--){
                cout<<mat[i][c1]<<" ";
            }
            c1++;
            
            t = 0;
        }
        
    }
    return 0;
}