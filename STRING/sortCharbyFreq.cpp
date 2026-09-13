#include<bits/stdc++.h>
using namespace std;
vector<char> freq(string s){
    //freq count
    map<char,int>mp;
    for(char ch :s){
       mp[ch]++;
    }
    //store char + freq
    vector<pair<char,int>>v;
    for(auto x:mp){
        v.push_back({x.first,x.second});
    }
    sort(v.begin(), v.end(), [](pair<char, int> a, pair<char, int> b) {
        if(a.second != b.second) {
        return a.second > b.second;   // higher frequency first
        }
        return a.first < b.first;          // alphabetic order
    });
    vector<char> ans;

    for(auto x : v) {
        ans.push_back(x.first);
    }
    return ans;
}
int main(){
    string s;
    getline(cin,s);
    vector<char> ans = freq(s);

    for(char ch : ans) {
        cout << ch << " ";
    }
    return 0;
}