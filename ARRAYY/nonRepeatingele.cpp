//Non-repeating element (appears exactly once)
#include<bits/stdc++.h>
using namespace std;
//time & space comp-O(N)
void nonrepeat(vector<int>v, int n){
    //creating map to store key value pair it store freq of each element
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[v[i]]++;
    }
    //it will check tht which element have 1 count n print tht element
    for(auto it:mp){
        if(it.second==1){
            cout<<it.first<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    nonrepeat(v,n);
    return 0;
}