//Second maximum element
#include<bits/stdc++.h>
using namespace std;
int secmax(int arr[],int n){
    //time comp-O(n),space-O(1)
    
    int maxi=INT_MIN;
    int secMax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi ){
            secMax=maxi;
            maxi=arr[i];
        }
        else if(arr[i]!=maxi&&arr[i]>secMax){
            secMax=arr[i];
        }
    }
    return secMax;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<secmax(arr,n);
    return 0;
}