//A chocolate factory is packing chocolates into packets. The chocolate packets are represented as an array of N integer values.
// The task is to find the empty packets (represented as 0) and push them to the end of the conveyor belt (array), 
//while preserving the relative order of the non-zero elements.
// Input Format First line: an integer N — the number of packets.
// Second line: N space-separated integers denoting the number of chocolates in each packet (0 = empty packet)
#include<bits/stdc++.h>
using namespace std;
vector<int> movezero(vector<int>v ,int n){
    //time comp,space comp-O(N)
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(v[i]!=0){
            ans.push_back(v[i]);
        }
    }
    int rem=n-ans.size();
    for(int i=0;i<rem;i++){
      ans.push_back(0);
    }
    return ans;
}
void movezeroo(vector<int>& v ,int n){
    //optimal approach uses 2 pointer 
    //time comp-O(n) space comp_O(1)
    int j=0;
    for(int i=0;i<n;i++){
        if(v[i]!=0){
            swap(v[i],v[j]);
            j++;
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
    vector<int>ans=movezero(v,n);
    for(auto it:ans){
        cout<<it<<" ";
    }
    //for optimal approach
    // movezeroo(v,n);
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }
    return 0;
}