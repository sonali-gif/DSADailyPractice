#include<bits/stdc++.h>
using namespace std;
int longestSubarray(int arr[],int n,int k){
    int maxLen=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for (int j=i;j<n;j++){
            sum += arr[j];
            if(sum == k){
                maxLen=max(maxLen,j-i+1);
            }
        }
    }
    return maxLen;
}
int main() {
    int n=7;
   int arr[n] = {1,2,3,1,1,1,1};
    int K = 6;

    cout << longestSubarray(arr, n,K);

    return 0;
}