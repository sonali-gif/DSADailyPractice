#include<bits/stdc++.h>
using namespace std;
//optimal
void leader(int arr[],int n){
    
    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--){
       if(arr[i]>maxi){
        cout<<arr[i]<<" ";
        maxi=arr[i];
       }
    }
}
int main(){
    int n=6;
    int arr[n]={10,22,12,3,0,6};
    leader(arr,n);
    return 0; 
}