#include<bits/stdc++.h>
using namespace std;
 bool anagrambrute(string s, string t){
    //brute force directly using sort fun thn comparing
    //time =O(NlogN) space=O(1)
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){
        return true;
    }
    return false;
 }
 bool anagramoptimal(string s, string t){
    //optimal approach in this we use freq[] to check
    //time comp -O(N) space-O(1)
    if(s.size()!=t.size()) return false;
    int fre[26]={0};
    for(int i=0;i<s.size();i++){
        char c1=tolower(s[i]);
        char c2=tolower(t[i]);
        fre[c1-'a']++;
        fre[c2-'a']--;
    }
    for(int i=0;i<26;i++){
        if(fre[i]!=0) return false;
    }
    return true;
 }

 int main(){
    string s="anagram";
    string t="nagaram";
    cout<<anagrambrute(s,t)<<endl;
    cout<<anagramoptimal(s,t);
 }