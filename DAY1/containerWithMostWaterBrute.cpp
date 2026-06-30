#include<bits/stdc++.h>
using namespace std;
int container(vector<int>& height,int n){
    //brute force approach we find all possible pairs
    //time comp-O(N^2) space-O(1)
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=i-1;j<n;j++){
            int width=j-i;
            int h=min(height[j],height[i]);
            int a=width*h;
            ans=max(ans,a);
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<container(arr,n);
    return 0;
}