#include<bits/stdc++.h>
using namespace std;
//better approach it is for positive n negative both for negative its optimal
int longestSubarray(int arr[], int n, int K) {
    unordered_map<int, int> preSumMap;
    int sum = 0;
    int maxLen = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        if(sum == K) {
            maxLen = i + 1;
        }
        int rem = sum - K;
        if(preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        // store first occurrence only
        if(preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }
    return maxLen;
}
int main() {
    int arr[] = {1, 2, 3, 1, 1, 1, 1};
    int n = 7;
    int K = 6;

    cout << longestSubarray(arr, n, K);
    return 0;
}