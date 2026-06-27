#include<bits/stdc++.h>
using namespace std;
int secondSmallest(vector<int> &arr, int n) {
    int small = arr[0];
    int ssmall = INT_MAX;
    for(int i = 1; i < n; i++) {
        if(arr[i] < small) {
            ssmall = small;
            small = arr[i];
        }
        else if(arr[i] < ssmall && arr[i] != small) {
            ssmall = arr[i];
        }
    }
    if(ssmall == INT_MAX)
        return -1;
    return ssmall;
}
 int main(){
    int n;
    cout<<"enter size:";
    cin>>n;
    vector<int> arr(n);
    cout<<"element:";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"second smallest number is; "<<secondSmallest(arr,n);
    return 0;
 }
