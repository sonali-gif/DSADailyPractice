#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin ,s);
    //time comp-O(n) space-O(1)
    
    int i=0,j=s.length()-1;
    while(i<j){
        if(s[i]!=s[j]){
            cout<<"Not";
            return 0;
        }
        i++;
        j--;
    }
        cout<<"Palindrome";
    return 0;
}