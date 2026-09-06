#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high- low)/2;
        if(arr[mid]==target){
            cout<<"found";
            return 0;
        }else if(arr[mid]<target){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    cout<<"not found";
    return 0;
}