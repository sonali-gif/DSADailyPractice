// Write a function to find the longest common prefix string amongst an array of strings.
// If there is no common prefix, return an empty string "".
// Example 1:
// Input: strs = ["flower","flow","flight"]
// Output: "fl"
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
     //we will check last n first if they matvh it mean in b/w char is also same
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