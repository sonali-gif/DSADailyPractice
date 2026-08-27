#include<bits/stdc++.h>
using namespace std;
//better approach using hashing
int findOnce(int arr[], int n){
    unordered_map<int,int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    for(auto it : mp){
        if(it.second == 1){
            return it.first;
        }
    }
    return -1;
}

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Number that appears once: " << findOnce(arr, n);

    return 0;
}