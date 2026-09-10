#include<bits/stdc++.h>
using namespace std;
//time comp- O(logN)
int binarySearch(vector<int> arr,int low,int high,int target){
    if(low>high)
    return -1;
    int mid= low+(high-low)/2;
    if(arr[mid]==target)
    return mid;
    else if (arr[mid]<target)
    return binarySearch(arr,mid+1,high,target);
    else
    return binarySearch(arr,mid-1,high,target);
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
    
    cout<<binarySearch(arr,0,n-1,target);
    return 0;
}