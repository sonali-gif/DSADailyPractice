#include<bits/stdc++.h>
using namespace std;
//brute force in this we are checking zero n moving all non zero to left n in end placing zero
//time comp=O(N^2) space=O(1)
void movezero(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            for(int j=i+1;j<n;j++){
                arr[j-1]=arr[j];
            }
            arr[n-1]=0;
            i--;
            n--;
        }
    }
}
int main(){
    int n=6;
    int arr[n]={1,2,0,7,0,3};
    movezero(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}