//Problem: Given an array of n integers, find and print the minimum
// and maximum element present in the array.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    //time comp-O(N)
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi=INT_MIN;
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
         if(arr[i]<mini){
            mini=arr[i];
        }
    }
    cout<<"minimum element in array: "<<mini<<endl;
    cout<<"maximum element in array: "<<maxi<<endl;
    return 0;
}