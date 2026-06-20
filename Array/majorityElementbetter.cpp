#include<bits/stdc++.h>
using namespace std;
//better approch in this we use hashing-map
int majorityElement(int arr[],int n){
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;

    }
    for(auto it:mpp){
        if(it.second>n/2){
            int a =it.first;
            return a;
        }
    }
    return -1;
}
int main(){
    int n ;
    cout<<"enter size of array";
    cin>>n;
    
    int arr[n];
    cout<<"elements: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<< majorityElement(arr,n);
    
    return 0;
}