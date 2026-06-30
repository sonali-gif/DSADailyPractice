#include<bits/stdc++.h>
using namespace std;
 vector<int> runnungSum(vector<int>arr,int n){
    //brute force time compl-O(N^2) space -O(N)
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<=i;j++){
            sum += arr[j];
        }
        ans[i]=sum;
    }
    return ans;
 }

  vector<int> runnungSumbetter(vector<int>arr,int n){
    //better approach in this we use prev sun value 
    //time comp-O(N) space -O(N)
    vector<int>ans(n);
    ans[0]=arr[0];
    for(int i=1;i<n;i++){
        ans[i]=ans[i-1]+arr[i];
    }
    return ans;
 }

  vector<int> runnungSumoptimal(vector<int>arr,int n){
    //optimal approach in this we directly use arr
    //time comp-O(N) space -O(1)
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    return arr;
 }
 int main(){
    int n=5;
    vector<int>arr={1,1,1,1,1};
    vector<int>ans=runnungSum(arr,n);
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<" "<<endl;

    vector<int>ans1=runnungSumbetter(arr,n);
    for(auto it:ans1){
        cout<<it<<" ";
    }
    cout<<" "<<endl;

    vector<int>ans2=runnungSumoptimal(arr,n);
    for(auto it:ans2){
        cout<<it<<" ";
    }
    return 0;
 }