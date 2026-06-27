#include<bits/stdc++.h>
using namespace std;
//optimal approach in this we use 2 pointer approach
//time comp-O(N),space -O(1)
void movezero(int arr[],int n){
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1){
        return;
    }
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
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