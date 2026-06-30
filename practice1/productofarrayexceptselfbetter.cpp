#include<bits/stdc++.h>
using namespace std;
//better force approach
//time comp =O(N), space comp =O(N)
vector<int> productexceptSelf(vector<int>arr,int n){
    vector<int>ans(n);
    vector<int>suffix(n);
    vector<int>prefix(n);
    prefix[0]=1;
    for (int i = 1; i < n; i++)
    {
        prefix[i]=prefix[i-1] * arr[i-1];
    }
    suffix[n-1]=1;
    for (int i = n-2; i>=0; i--)
    {
        suffix[i]=suffix[i+1] * arr[i+1];
    }
    for(int i=0;i<n;i++){
        ans[i]=suffix[i]*prefix[i];
    }
    return ans;
}
 int main(){
    int n=4;
    vector <int> arr;
    arr={1,2,3,4};
    vector<int> result = productexceptSelf(arr, n);

    for(int x : result) {
        cout << x << " ";
    }
    return 0;
 }