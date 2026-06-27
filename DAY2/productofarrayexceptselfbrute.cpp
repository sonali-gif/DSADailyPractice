#include<bits/stdc++.h>
using namespace std;
//brute force approach
//time comp =O(N^2), space comp =O(1)
vector<int> productexceptSelf(vector<int>arr,int n){
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        int product=1;
        for(int j=0;j<n;j++){
            if(i!=j){
                product *= arr[j];
            }
        }
        ans[i]=product;
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