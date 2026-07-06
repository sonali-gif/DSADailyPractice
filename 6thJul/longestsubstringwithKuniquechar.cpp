#include<bits/stdc++.h>
using namespace std;
int longestsubstringkchar(int n,string s,int k){
    //brute force using two pointer n checking there freq
    //time-O(n^2) space-O(n)
    int ans=-1;
    for(int i=0;i<n;i++){
        unordered_map<char,int>freq;
        for(int j=i;j<n;j++){
            freq[s[j]]++;
            if(freq.size()==k){
                ans=max(ans,j-i+1);
            }
        }
    }
    return ans;
}

int longestsubstringkcharop(int n, string s, int k)
{
    //optimal approach we use sliding window
    //time-O(n) space-O(k)
    int ans = -1;
    int l = 0;
    unordered_map<char,int> freq;
    for(int r = 0; r < n; r++)
    {
        freq[s[r]]++;
        while(freq.size() > k)
        {
            freq[s[l]]--;
            if(freq[s[l]] == 0)
                freq.erase(s[l]);
            l++;
        }
        if(freq.size() == k)
            ans = max(ans, r - l + 1);
    }
    return ans;
}
int main(){
    string s="aabacbebebe";
    int n=11;
    int k=3;
    cout<<longestsubstringkchar(n,s,k)<<endl;
    cout<<longestsubstringkcharop(n,s,k);
    return 0;
}