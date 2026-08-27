//Given an array of integers nums and an integer target,
// find two different elements in the array whose sum is equal to target.
//Return the indices of those two elements.
#include<bits/stdc++.h>
using namespace std;
void TwoSum(int target,int n,int arr[]){
    //using 2 pointer -O(N) only if array is sorted
    int low=0;
    int high =n-1;
    while(low<high){
        int sum=arr[low]+arr[high];
        if(target==sum){
            cout<<low<<" "<<high;
            return;
        }else if(target>sum){
            low++;
        }else{
            high--;
        }
    }
    cout<<"no pair found";
}

void TwoSumUnsorted(int target,int n,int arr[]){
    //using hashing for unsorted array-O(n)
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        int need= target-arr[i];
        if(mp.find(need)!=mp.end()){
            cout<<mp[need]<<" "<<i;
            return;
        }
        mp[arr[i]]=i;
    }
}
int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // TwoSum(target,n,arr);
    TwoSumUnsorted(target,n,arr);
    return 0;
}