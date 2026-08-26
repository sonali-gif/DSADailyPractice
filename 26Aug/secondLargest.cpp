//Find the Second Largest Element
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //time comp-O(N)
    int maxi=INT_MIN;
    int sec_max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            sec_max=maxi;
            maxi=arr[i];
        }
        else if(arr[i]>sec_max&&arr[i]<maxi){
            sec_max=arr[i];
        }
    }
    if(sec_max==INT_MIN){
        cout<<"no largest element";
    }else{
    cout<<sec_max;}
    return 0;
}