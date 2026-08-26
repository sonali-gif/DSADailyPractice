//Given an array of n integers, find the frequency of each distinct element in the array.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //if i use map -O(N log)
    //if unordered_map-O(N) at worst and O(1) at average 
    unordered_map<int,int>freq;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(auto it:freq){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}