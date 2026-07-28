//): Given a string, print the frequency of each distinct character,
// in the order each character first appears (not alphabetical order).
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int freq[256]={0};
    for(char ch :s){
        freq[(unsigned char)ch]++;
    }

    for(char ch:s){
        if(freq[(unsigned char)ch]>0){
            cout<<ch<<" "<<freq[(unsigned char)ch]<<endl;
            freq[(unsigned char)ch] = 0;
        }
    }
    return 0;
}