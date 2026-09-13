#include<bits/stdc++.h>
using namespace std;
int singleEle(vector<int>arr,int n){
    if(n==1) return arr[0];//if there is single element
    if(arr[0]!=arr[1]) return arr[0];//checking for first element
    if(arr[n-1]!=arr[n-2]) return arr[n-1];//checking for last element

    int low=1;
    int high=n-2;
    while(low<=high){
        int mid =low+(high-low)/2;
        if(arr[mid]!=arr[mid+1]&&arr[mid]!=arr[mid-1]){
            return arr[mid];
        }

        if((mid%2==1 &arr[mid-1]==arr[mid]) || (mid%2==0 &arr[mid]==arr[mid+1])){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<singleEle(arr,n);
    return 0;
}