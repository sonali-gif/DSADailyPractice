//Count vowels and consonants in a string
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    
  int cntv=0;
  int cntc=0;
    for(int i=0;i<s.length();i++){
        char ch= tolower(s[i]);
        if(ch>='a' &&ch<='z'){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            cntv++;
        }else{
            cntc++;
        }
    }}
    cout<<"vowel: "<<cntv<<endl;
    cout<<"Consonants "<<cntc<<endl;
    return 0;
}