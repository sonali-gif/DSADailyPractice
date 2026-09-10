#include<bits/stdc++.h>
using namespace std;
//time comp- O(logN)
int binarySearch(int n,vector<int> arr,int target){
    int high=arr.size()-1;
    int low=0;
    while(low<high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            return mid;
        }else if(target>mid){
            low=mid+1;
        }else{
            low=mid-1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    cout<<binarySearch(n,arr,target);
    return 0;
}