#include<bits/stdc++.h>
using namespace std;
//optimal approach if we have to tell sum exiist or not , not optimal if we want to tell index
// we will use 2 pointer approach
bool TwoSum(int arr[],int n,int target){
    int l =0;
    int r = n-1;
    sort(arr,arr-n);
    while(l<r){
        int sum=arr[l]+arr[r];
        if(sum==target){
            return 1;
        }else if(sum<target){
            l++;
        }
        else{
            r++;
        }
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