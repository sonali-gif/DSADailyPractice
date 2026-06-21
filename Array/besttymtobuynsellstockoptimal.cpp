#include<bits/stdc++.h>
using namespace std;
// optimal TC- O(N)
int maxprofit(int arr[],int n){
    int profit=0 ,mini=arr[0];
    for(int i=1;i<n;i++){
        int cost=arr[i]-mini;
        profit=max(cost,profit);
        mini=min(mini,arr[i]);
    }
    return profit;

}
int main(){
    int n=6;
    int arr[n]={7,1,4,5,2,8};
    cout<<maxprofit(arr,n);
    return 0;
}