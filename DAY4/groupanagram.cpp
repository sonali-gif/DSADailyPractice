#include<bits/stdc++.h>
using namespace std;

vector<vector<string>>grpanagram(vector<string>& s, int n){
    //brute force in this we take first string sort it thn comapre to all other after sorting thm thn store in vector string
    //time comp -O(N^2 * KlogK) space-O(N)
    vector<bool>visited(n,false);
    vector<vector<string>>ans;
    for(int i=0;i<n;i++){
        if(visited[i]) continue;
        vector<string>grp;
        grp.push_back(s[i]);
         visited[i]=true;
        string s1=s[i];
        sort(s1.begin(),s1.end());
        for(int j=i+1;j<n;j++){
            if(visited[j]) continue;
            string s2=s[j];
            sort(s2.begin(),s2.end());
            if(s1==s2){
                grp.push_back(s[j]);
                visited[j]=true;
            }
        }
        ans.push_back(grp);

    }
    return ans;
}

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    //better approch in these we use hashing key value pair 
    //time comp-O(N*KlogK) space -O(N*K)
    unordered_map<string, vector<string>> mp;
    for(string &s : strs) {
        string key = s;
        sort(key.begin(), key.end());
        mp[key].push_back(s);
    }
    vector<vector<string>> ans;
    for(auto &it : mp) {
        ans.push_back(it.second);
    }
    return ans;
}

vector<vector<string>> groupAnagram(vector<string>& strs) {
//optimal approach in this we use freq 
//time comp=O(N × K) Space: O(N × K)
    unordered_map<string, vector<string>> mp;
    for(string &s : strs) {
        int freq[26] = {0};
        // Step 1: count characters
        for(char c : s) {
            freq[c - 'a']++;
        }
        // Step 2: convert freq array into a unique key
        string key = "";
        for(int i = 0; i < 26; i++) {
            key += to_string(freq[i]) + "#";
        }
        // Step 3: group using key
        mp[key].push_back(s);
    }
    vector<vector<string>> ans;
    for(auto &it : mp) {
        ans.push_back(it.second);
    }

    return ans;
}
int main() {
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    int n=6;

    vector<vector<string>> ans = grpanagram(strs,n);

    for(auto group : ans) {
        for(auto word : group) {
            cout << word << " ";
        }
        cout << endl;
    }

    vector<vector<string>> ans1 = groupAnagrams(strs);

    for(auto group : ans1) {
        for(auto word : group) {
            cout << word << " ";
        }
        cout << endl;
    }

     vector<vector<string>> ans11 = groupAnagram(strs);

    for(auto group : ans11) {
        for(auto word : group) {
            cout << word << " ";
        }
        cout << endl;
    }
}