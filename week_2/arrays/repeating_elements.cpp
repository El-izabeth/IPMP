#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int arr[] = {4, 2, 4, 5, 2, 3, 1};
    int expected_sum = 15;
    int expected_prod = 120;
    int actual_sum = 0;
    int actual_prod = 1;
    for(int i = 0; i < 7; i++){
        actual_sum+=arr[i];
        actual_prod*=arr[i];
    }
    int sum;
    int prod;
    sum = actual_sum - expected_sum;
    prod = actual_prod/expected_prod;
    int sos = sum*sum - 2*prod;
    int diff = sqrt(abs(sos-2*prod));
    int x = (sum+diff)/2;
    int y = (sum-diff)/2;
    cout<<x<<endl<<y;
    return 0;
}