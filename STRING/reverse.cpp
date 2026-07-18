//Reverse a string without built-in function
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    //2 pointer approach
    //time comp-O(n) space-O(1)
    int i=0;
    int j=s.length()-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    cout<<s;
    return 0;
}