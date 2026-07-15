//Frequency count of each element
#include<bits/stdc++.h>
using namespace std;
//time & space comp-O(N)
void freqCount(int arr[],int n){
    //creating map to store element n its freq
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    //printing elements with its count
    for(auto it:mp){
        cout<<it.first<<"--"<<it.second<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    freqCount(arr,n);
    return 0;
}