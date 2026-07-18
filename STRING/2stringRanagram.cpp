//Check if two strings are anagrams
#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s1, string s2){
    //time comp-O(N) space-O(1)
    if(s1.length()!=s2.length()){
        return false;
    }
    int freq[256]={0};
    //increase freq of s1
    for(char ch:s1){
        freq[(unsigned char)ch]++;
    }
    //decrease freq of s2
    for(char ch:s2){
        freq[(unsigned char)ch]--;
    }
    //check all freq
    for(int i=0;i<256;i++){
        if(freq[i]!=0){
            return false;
        }
    }
    return true;
}
int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    cout<<isAnagram(s1,s2);
    return 0;
}