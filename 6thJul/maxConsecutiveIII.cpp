#include<bits/stdc++.h>
using namespace std;
int maxConsecutive(int k, int arr[],int n){
    //brute force in this we generate all subaaray n for all subarray wwe check how many 0 are inside if valid thn take max leng subarray
    //time comp-O(n^2) space -O(1)
    int ans=0;
    for(int i=0;i<n;i++){
        int zero=0;
        for(int j=i;j<n;j++){
            if(arr[j]==0){
                zero++;
            }
            if(zero<=k){
                ans=max(ans,j-i+1);

            }else{
                break;
            }

        }
    }
    return ans;
}
int maxConsecutiveop(int k, int arr[],int n){
    //optimal approach in this we use sliding window
    //time comp-O(n) space -O(1)
    int ans=0,l=0,zero=0;
    for(int r=0;r<n;r++){
       if(arr[r]==0){
        zero++;
       }
       while(zero>k){
        if(arr[l]==0){
            zero--;
        }
        l++;
       }
       ans=max(ans,r-l+1);
    }
    return ans;
}
int main(){
    int n=11;
    int arr[n]={1,1,1,0,0,0,1,1,1,1,0};
    int k=2;
    cout<<maxConsecutive(k,arr,n)<<endl;
    cout<<maxConsecutiveop(k,arr,n)<<endl;
    return 0;
}