//Check if a string is a palindrome 
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s){
    //time comp-O(N), space -O(1)
    int i=0,j=s.length()-1;
    while(i<=j){
        if(s[i]!=s[j]){
        return false;
        }
        i++;
        j--;
    }
    return true;
}
int main(){
    string s;
    cin>>s;
    cout<<isPalindrome(s);
    return 0;
}