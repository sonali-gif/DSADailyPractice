#include<bits/stdc++.h>
using namespace std;
// brute force TC- O(2N)
int maxprofit(int arr[],int n){
    int maxprofit=0;
    for(int i=0;i<n;i++){//for buying
        for(int j=1;j<n;j++){//for selling
            int profit= arr[j]-arr[i];
            maxprofit=max(profit,maxprofit);
        }
    }
    return maxprofit;
}
int main(){
    int n=6;
    int arr[n]={7,1,4,5,2,8};
    cout<<maxprofit(arr,n);
    return 0;
}