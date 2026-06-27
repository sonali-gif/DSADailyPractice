#include<bits/stdc++.h>
using namespace std;
//
int productsubarry(int arr[],int n){
    int minp =arr[0],maxp =arr[0],ans =arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<0){
            swap(minp,maxp);
        }
        maxp=max(arr[i],maxp*arr[i]);
        minp=min(arr[i],minp*arr[i]);
        ans=max(ans,maxp);
    }
    return ans;
}
int main(){
    int n=4;
    int arr[n] ={2,3,-2,4};
    cout<< productsubarry(arr,n);
    return 0;
}