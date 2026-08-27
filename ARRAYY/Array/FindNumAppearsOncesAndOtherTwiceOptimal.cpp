#include<bits/stdc++.h>
using namespace std;
//optimal approch using xor
int findOnce(int arr[], int n){
    int xorr = 0;
    for(int i = 0; i < n; i++){
        xorr ^= arr[i];
    }
    return xorr;
}
int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Number that appears once: " << findOnce(arr, n);
    return 0;
}