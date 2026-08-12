#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low=0;
    int high=n-1;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(target==arr[mid]){
            cout<<mid;
            return 0;
        }else if(target<arr[mid]){
            high=mid-1;

        }else{
            low=mid+1;
        }
    }
    cout<<-1;
    
    return 0;
}