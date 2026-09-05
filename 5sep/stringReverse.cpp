#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    //this will only print in reverse not actually reverse string
    // for(int i=s.length();i>=0;i--){
    //     cout<<s[i];
    // }

    //2 pointer - time comp-O(n) space -O(1)
    int i=0,j=s.length()-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    cout<<s;
    return 0;
}