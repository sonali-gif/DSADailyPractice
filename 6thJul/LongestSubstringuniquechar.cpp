#include<bits/stdc++.h>
using namespace std;
int longestSubsutringUni(int n, string s){
    //brute force in this we generate all substring n for all substring check its char is yunique or not
    //time comp-O(N^2) space -O(N)
    int ans=0;
    for(int i=0;i<n;i++){
        unordered_set<char>st;
        for(int j=i;j<n;j++){
            if(st.count(s[j])) break;
            st.insert(s[j]);
            ans=max(ans,j-i+1);
        }
    }
    return ans;
}
int longestSubsutringUniop(int n, string s){
// optimal approach in this we use sliding window n check check in freq
//time comp-O(N) space -O(256)
    int ans=0,l=0;
    unordered_map<char,int>freq;
    for(int r=0;r<n;r++){
        freq[s[l]]++;
        while( freq[s[r]]>1){
             freq[s[l]]--;
             l++;
        }
        ans=max(ans,r-l+1);
    }
    return ans;
}
int main(){
    int n=8;
    string s="abcabcbb";
    cout<<longestSubsutringUni(n,s)<<endl;
    cout<<longestSubsutringUniop(n,s);
    return 0;
}