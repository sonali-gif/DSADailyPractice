//Reverse an array in-place without using extra space.
//time complexity -O(N)
#include<bits/stdc++.h>
using namespace std;
int main(){
    //i/p
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //logic
    reverse(arr,arr+n);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}