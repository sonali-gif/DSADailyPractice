#include<bits/stdc++.h>
using namespace std;
//better approach in which we use hashing
bool TwoSum(int arr[],int n,int target){
    map<int,int>mpp;
    for(int i =0;i<n;i++){
        int num=arr[i];
        int rem =target-num;
        if(mpp.find(rem)!=mpp.end()){
            return 1;
        }
        mpp[num] = i;
    }
    return 0;
}
int main(){
    int n , target ;
    cout<<"enter size of array";
    cin>>n;
    cout<<"enter target:";
    cin>>target;
    int arr[n];
    cout<<"elements: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<TwoSum(arr,n,target);
    return 0;
}