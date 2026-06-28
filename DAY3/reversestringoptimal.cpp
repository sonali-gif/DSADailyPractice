#include <bits/stdc++.h>
using namespace std;
//optimal approach uses 2 pointer approach 
//time comp -O(N) space -O(1)
void reversestring(string &s){
   int l=0,r=s.size()-1;
   while(l<r){
    swap(s[l],s[r]);
    l++;
    r--;
   }
}
int main(){
    string s ="abcd";
    reversestring(s);
    cout<<s;
}
