//Longest Common Prefix
#include<bits/stdc++.h>
using namespace std;
//time comp-O(n*m)
int main(){
    int n;
    cin>>n;
    vector<string> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    if(s.size()==0){
        return 0;
    }
    
    for(int i=0;i<s[0].length();i++){
        char ch=s[0][i];
        for(int j=1;j<s.size();j++){
            if( i==s[j].length()||s[j][i]!=ch ){
                cout<< s[0].substr(0,i);
            return 0;
            }
        }
    }
    return 0;
}