//Second minimum element
#include<bits/stdc++.h>
using namespace std;
int secmin(vector<int>v,int n){
    //time comp-O(N), space-O(1)
    int mini =INT_MAX;
    int secmini=INT_MAX;
    for(int i=0;i<n;i++){
        if(v[i]<mini){
            secmini=mini;
            mini=v[i];
        }else if(v[i]<secmini && v[i]!=mini){
            secmini=v[i];
        }
    }
    return secmini;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<secmin(v,n);
    return 0;
}