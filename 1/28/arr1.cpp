// Given an array of integers, find the second largest element without sorting.
//time complexity of this will be O(Ng)
#include<bits/stdc++.h>
using namespace std;
int main(){
    //taking i/p
    int n;
    cout<<"size of arr: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //logic
    int largest =arr[0],secLar=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secLar=largest;
            largest=arr[i];
    }else if(arr[i]<largest&&arr[i]>secLar){
        secLar=arr[i];
    }
    }
    //retruning second largest 
    cout<< secLar;
}