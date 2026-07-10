#include<bits/stdc++.h>
using namespace std;
int container(vector<int>& height,int n){
   //optimal approach we use 2 pointer approoach
   //time comp-O(N), space-O(1)
    int ans=0;
    int l=0,r=n-1;
    while(l<r){
        int width=r-l;
            int h=min(height[r],height[l]);
            int a=width*h;
            ans=max(ans,a);
            if(height[l]<height[r]){
                l++;
            }else{
                r--;
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