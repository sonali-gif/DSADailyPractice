#include<bits/stdc++.h>
using namespace std;
int firstOc(vector<int>arr,int n,int x){
    int low=0;
    int high=n-1;
    int first=-1;
    while(low<=high){
        int mid= low +(high-low)/2;
        if(arr[mid]==x){
            first=mid;
            high=mid-1;
        }else if(arr[mid]<x){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return first;
}
int lastOc(vector<int>arr,int n,int x){
     int low=0;
    int high=n-1;
    int last=-1;
    while(low<=high){
    int mid= low +(high-low)/2;
    if(arr[mid]==x){
        last=mid;
        low=mid+1;
    }else if(arr[mid]<x){
        low=mid+1;
    }else{
        high=mid-1;
    }
    }
    return last;
}

int count(vector<int>arr,int n,int x){
   int first =firstOc(arr,n,x);
   if(first==-1) return 0;
   int last= lastOc(arr,n,x);
   return last-first+1;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    cout<<count(arr,n,x);
    return 0;
}