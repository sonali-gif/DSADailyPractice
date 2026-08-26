//Remove Duplicates from Sorted Array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //time comp-O(n) space-O(K)
    // unordered_map<int,int>mp;
    // for(int i=0;i<n;i++){
    //     mp[arr[i]]++;
    // }
    // for(auto it:mp){
    //     cout<<it.first<<" ";
    // }

    
    //2 pointer approacg -O(n) space -O(1)
    int j=0;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[j]){
            j++;
            arr[j]=arr[i];
        }
    }
    for(int i=0;i<=j;i++){
        cout<<arr[i];
    }
    return 0;
}