//You are given a sorted array arr of distinct values and a target value m.
// You need to find the index of m in the array.
// If m is present in the array, return its index.
// If m is not present, return the index where m should be inserted to maintain the sorted order.

#include<bits/stdc++.h>
using namespace std;
int check(int n,vector<int>arr,int target){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]<target){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return low;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    cout<<check(n,arr,target);
    return 0;
}