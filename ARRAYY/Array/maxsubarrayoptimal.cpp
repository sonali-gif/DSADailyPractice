#include <bits/stdc++.h>
using namespace std;
//optimal it uses kadane's algo TC -O(N)
int maxSubArray(int arr[], int n) {
    int currentSum = arr[0];
    int maxSum = arr[0];

    for(int i = 1; i < n; i++) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}
int main() {
     int n=9;
    int arr[n] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maxSubArray(arr,n) << endl;
    return 0;
}