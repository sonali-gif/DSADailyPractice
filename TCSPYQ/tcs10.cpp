#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
     string arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     sort(arr,arr+n);
     string ans="";
     string first=arr[0];
     string end=arr[n-1];
     for(int i=0;i<min(first.length(),end.size());i++){
        if(first[i]!=end[i]){
            break;
        }
        ans+=first[i];
     }
     cout<<ans<<endl;
     return 0;
}