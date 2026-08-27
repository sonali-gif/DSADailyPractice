//Missing Number- Problem:
// Given an array containing n distinct numbers taken from the range [0, n], 
//find the one number that is missing.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //time comp-O(N)
    // int sum;
    // sum=n*(n+1)/2;
    // int s2=0;
    // for(int i=0;i<n;i++){
    //     s2+=arr[i];
    // }
    // cout<<sum-s2;
    int ans = n;
    for(int i = 0; i < n; i++) {
    ans = ans ^ i ^ arr[i];
    }
    cout << ans;
    return 0;
}