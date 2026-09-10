//Given a sorted array and a target value x, find:
// Floor of x: The largest element in the array that is less than or equal to x.
// Ceil of x: The smallest element in the array that is greater than or equal to x.
// If the floor or ceil does not exist, return -1.
#include<bits/stdc++.h>
using namespace std;
pair <int,int>floorCeil(int n,vector<int>arr,int x){
    int low=0;
    int high=n-1;
    int floor=-1;
    int ceil=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){
            floor=arr[mid];
            ceil=arr[mid];
            return{floor,ceil};
        }else if(arr[mid]<x){
            floor=arr[mid];
            low=mid+1;
        }else{
            ceil=arr[mid];
            high=mid-1;
        }

    }
    return {floor,ceil};
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    pair<int,int> ans=floorCeil(n,arr,x);
    cout<<"floor "<<ans.first<<endl;
    cout<<"ceil "<<ans.second<<endl;
}