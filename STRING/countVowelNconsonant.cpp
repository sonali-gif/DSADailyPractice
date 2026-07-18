//Count vowels and consonants
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int vow_cnt=0;
    int cons_cnt=0;
    //time comp-O(N) space-O(1)
    for(int i=0;i<s.length();i++){
        char ch=tolower(s[i]);
        if(ch>='a' && ch<='z'){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            vow_cnt++;
        }else{
            cons_cnt++;
        }
        }
    }
    cout<<"Vowels: "<<vow_cnt<<endl;
    cout<<"Consonents: "<<cons_cnt<<endl;
    return 0;
} 
