#include<bits/stdc++.h>
using namespace std;
//optimal approach with TC-O(N)
void rearrange(int arr[], int n) {
    int ans[n];
    int pos = 0;
    int neg = 1;
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
            ans[pos] = arr[i];
            pos += 2;
        }
        else {
            ans[neg] = arr[i];
            neg += 2;
        }
    }
    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
}
int main() {
    int arr[] = {3,1,-2,-5,2,-4};
    int n = 6;
    rearrange(arr,n);
}