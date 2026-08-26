//Given an array of n integers, reverse the array in-place without using another array.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // reverse(arr,arr+n); -O(N)

    //this will only print array in reverse not actually reverse it
    // for(int i=n-1;i>=0;i--){
    //     cout<<arr[i]<<" ";
    // }

    //2 pointer approach
    //time comp-O(N)
    int low=0;
    int high=n-1;
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}