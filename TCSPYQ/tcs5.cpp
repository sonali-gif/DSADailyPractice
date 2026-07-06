//Given an integer array Arr of size N the task is to find the count of elements whose value is greater than all of its prior elements.
//Note : 1st element of the array should be considered in the count of the result.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=1;
    int maxsofar=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>maxsofar){
            count++;
            maxsofar=arr[i];
        }
    }
    cout<<count;
    return 0;
}