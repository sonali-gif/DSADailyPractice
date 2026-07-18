//Count frequency of each character
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    //time comp-O(N) space-O(1)
    int freq[256]={0};
    //counting freq
    for(char ch:s){
        freq[(unsigned char)ch]++;
    }
    //print freq
    for(int i = 0; i < 256; i++){
        if(freq[i] > 0){
            cout << char(i) << " : " << freq[i] << endl;
        }
    }
    return 0;
    }
