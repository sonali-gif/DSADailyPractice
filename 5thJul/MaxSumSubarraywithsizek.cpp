#include<bits/stdc++.h>
using namespace std;
int maxsumsubarray(int arr[],int n, int k){
    //brute force time comp-O(n*k) space-O(1)
    int ans=INT_MIN;
    for(int i=0;i<=n-k;i++){
        int sum=0;
        for(int j=i;j<i+k;j++){
            sum +=arr[j];
        }
         ans=max(ans,sum);
    }
    return ans;
}
int maxsumsubarrayop(int arr[],int n, int k){
    //optimal approach sliding window time-O(N) space-O(1)
    int ans=INT_MIN;
    int l=0,sum=0;
    for(int r=0;r<n;r++){
        sum+=arr[r];
        if(r-l+1==k){
            ans=max(ans,sum);
            sum -=arr[l];
            l++;
        }

    }
    return ans;
}
int main(){
    int n=5;
    int k=3;
    int arr[n]={3,5,6,8,2};
    cout<<maxsumsubarray(arr,n,k)<<endl;
    cout<<maxsumsubarrayop(arr,n,k);
    return 0;
}