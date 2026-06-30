#include <bits/stdc++.h>
using namespace std;
//brute force 
// time comp ,space -O(N) 
void reversestring(string &s){
    string temp="";
    for(int i=s.size()-1;i>=0;i--){
        temp.push_back(s[i]);
    }
    s=temp;
}
int main(){
    string s ="abcd";
    reversestring(s);
    cout<<s;
}
