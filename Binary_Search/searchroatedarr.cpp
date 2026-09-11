#include<bits/stdc++.h>
using namespace std;
int search(vector<int> arr,int n,int x){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){
            return true;
        }
        //cannot determine which side is sorted
        if(arr[low]==arr[mid]&&arr[mid]==arr[high]){
            low++;
            high--;
        }
        //left half sorted
        else if(arr[low]<=arr[mid]){
            if(arr[low]<=x&& x<arr[mid]){
                high=mid-1;
            }else{
                low=mid+1;
            }
            //right half sorted
        }else{
            if(arr[mid]<x&&x<=arr[high]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    cout<<search(arr,n,x);
    return 0;
}