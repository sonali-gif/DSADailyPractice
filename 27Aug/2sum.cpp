//Given a sorted array of n integers and an integer target, 
//find whether there exists a pair of elements whose sum is equal to target.
//Return the indices of the two elements if such a pair exists.

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
    int target;
    cout<<"enter target sum: ";
    cin>>target;
    int high=n-1;
    int low=0;
    bool found=0;
    while(low<high){
        int sum=arr[low]+arr[high];
        if(sum==target){
            cout<<low<<","<<high;
            found=1;
            break;
        }else if(sum>target){
            high--;
        }else{
            low++;
        }
    }
    if(!found){
        cout<<"Not found";
    }
    
    return 0;
}