#include <bits/stdc++.h>
using namespace std;
//better approach with TC -O(N^2)
int maxSubArray(int arr[],int n ) {
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j=i;j<n;j++){
        sum+=arr[j];
         maxi=max(maxi,sum);

        }
    }
        return maxi;

}
int main() {
    int n=9;
    int arr[n] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maxSubArray(arr,n) << endl;
    return 0;
}