#include<bits/stdc++.h>
using namespace std;
bool palindrome(string s,int n){
    int l=0,r=n-1;
    while(l<r){
        while(l<r && !isalnum(s[l])){
            l++;
        }
        while(l<r && !isalnum(s[r])){
            r--;
        }
        if(tolower(s[l]!=s[r])){
            return false;
        }
        l++;
        r--;
    }
    return true;
}
int main(){
    int n=5;
    string s="madam";
    cout<<palindrome(s,n);
}