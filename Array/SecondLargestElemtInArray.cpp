#include<bits/stdc++.h>
using namespace std;
 int secondLargest(vector<int> &arr,int n){
    int large=arr[0];
    int slarge = -1;
    for(int i=0;i<n;i++){
        if(arr[i]>large){
            slarge=large;
            large= arr[i];
        }
        else if(arr[i]>slarge && arr[i]<large){
            slarge=arr[i];
        }
    }
   return slarge;
 }
 int main(){
    int n;
    cout<<"enter size:";
    cin>>n;
    vector<int> arr(n);
    cout<<"element:";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"second largest number is; "<<secondLargest(arr,n);
    return 0;
 }
