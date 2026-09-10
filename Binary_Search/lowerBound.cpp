#include<bits/stdc++.h>
using namespace std;
int lowerBound(int n,vector<int>arr,int target){
    int high=n-1;
    int low=0;
    int ans=n;
    while(low<high){
        int mid=low+(high-low)/2;
        if(arr[mid]>=target){
            ans= mid;
            high=mid-1;
        }else {
            low=mid+1;
        }
    }
    return ans;
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
    cout<<lowerBound(n,arr,target);
    return 0;
}