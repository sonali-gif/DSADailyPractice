#include<bits/stdc++.h>
using namespace std;
//brute force in this we will check one element will all element 
bool TwoSum(int arr[],int n,int target){
    for(int i =0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if(arr[i]+ arr[j] == target){
                return true;
            }
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
    for (int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    cout<<TwoSum(arr,n,target);
    return 0;
}