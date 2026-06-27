#include<bits/stdc++.h>
using namespace std;
//brute force with TC -O(N^2)
void leader(int arr[],int n){
    for(int i=0;i<n;i++){
        bool leader=true;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                leader=false;
            }
        }
        if(leader==true){
            cout<<arr[i]<<" ";
        }
    }
}
int main(){
    int n=6;
    int arr[n]={10,22,12,3,0,6};
    leader(arr,n);
    return 0; 
}