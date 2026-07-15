//Minimum element in array
#include<bits/stdc++.h>
using namespace std;
int minele(vector<int>v,int n){
    //time comp-O(N), space -O(1)
    //logic
    int mini= INT_MAX;
    for(int i=0;i<n;i++){
        if(v[i]<mini){
            mini=v[i];
        }
    }
    return mini;
}
int main(){
    //i/p size of vector n vector
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<minele(v,n);
    return 0;
}