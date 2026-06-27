#include<bits/stdc++.h>
using namespace std;
//optimal force approach
//time comp =O(N), space comp =O(1)
vector<int> productexceptSelf(vector<int>arr,int n){
    vector<int>ans(n);
    for (int i = 1; i < n; i++)
    {
        ans[i]=ans[i-1] * arr[i-1];
    }
   int suffix =1;
    for (int i = n-1; i>=0; i--)
    {
        ans[i]=suffix;
        suffix *= arr[i];
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