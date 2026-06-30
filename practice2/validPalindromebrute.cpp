#include<bits/stdc++.h>
using namespace std;
//brute force approach in this we first remove non alphanumeric char thn covert to lowercase thn store in new string thn reverse new string if new string = old thn its valid
//time comp =O(N) space =O(N)
bool checkpanindrome(string s){
    string temp="";
    for(char ch:s){
        if(isalnum(ch)){
            temp += tolower(ch);
        }
    }
    string rev =temp;
    reverse(rev.begin(),rev.end());
    return temp==rev;
}
int main(){
    string s1 ="A man, a plan, a canal: Panama";
    cout<<checkpanindrome(s1)<<" ";
    string s2 =" race a car";
    cout<<checkpanindrome(s2);
}
