#include<bits/stdc++.h>
using namespace std;
//brute force with TC-O(n) + O(n/2)
void rearrange(int arr[], int n) {

    int pos[n/2];
    int neg[n/2];
    int p = 0, q = 0;
    // Separate positive and negative
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0)
            pos[p++] = arr[i];
        else
            neg[q++] = arr[i];
    }
    // Put alternately
    for(int i = 0; i < n/2; i++) {
        arr[2*i] = pos[i];
        arr[2*i + 1] = neg[i];
    }
}

int main() {
    int arr[] = {3,1,-2,-5,2,-4};
    int n = 6;

    rearrange(arr,n);

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}