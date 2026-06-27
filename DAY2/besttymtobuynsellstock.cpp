#include<bits/stdc++.h>
using namespace std;
// time complexity -O(N) space complexity -O(1)
 int bestTime(int arr[],int n){
    int mini= arr[0], profit=0;
    for(int i=1;i<n;i++){
        int cost =arr[i]-mini;
        profit=max(profit,cost);
        mini=min(mini,arr[i]);
    }
    // cout<<"best time to buy: "<<mini<<endl;
    // cout<<"Profit: ";
    return profit;
 }
 int main(){
    int n=6;
    int arr[n]={7,1,5,3,6,4};
    cout<<bestTime(arr,n);
    return 0;
 }