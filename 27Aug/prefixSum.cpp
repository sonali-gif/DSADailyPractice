//Prefix Sum — Range Sum
//Given an array of integers and multiple queries, where each query contains two indices L and R,
// find the sum of all elements from index L to index R, inclusive.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //brute force 
    //time comp-O(n),space -O(1)
    // int L,R;
    // cin>>L>>R;
    // int sum=0;
    // for(int i=L;i<=R;i++){
    //     sum+=arr[i];
    // }
    // cout<<sum;

    //optimized -using prefix sum array
    //time comp-O(N+Q),space-O(N)
    int prefix[n];
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    int L,R;
    cin>>L>>R;
    int sum;

    if(L==0){
        sum=prefix[R];
    }else{
        sum=prefix[R]-prefix[L-1];
    }
    cout<<sum;
    return 0;
}