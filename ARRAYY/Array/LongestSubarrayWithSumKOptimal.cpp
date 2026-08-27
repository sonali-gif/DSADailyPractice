#include<bits/stdc++.h>
using namespace std;
//optimal for 0 n +ve elemnt array
int longestSubarray(int arr[], int n, int K) {
    int l = 0, r = 0;
    int sum = 0;
    int maxLen = 0;

    while(r < n) {
        sum += arr[r];
        // shrink window if sum > K
        while(l <= r && sum > K) {
            sum -= arr[l];
            l++;
        }

        // check condition
        if(sum == K) {
            maxLen = max(maxLen, r - l + 1);
        }

        r++;
    }

    return maxLen;
}

int main() {
    int arr[] = {1,2,3,1,1,1,1};
    int n = 7;
    int K = 6;
    cout << longestSubarray(arr, n, K);

    return 0;
}