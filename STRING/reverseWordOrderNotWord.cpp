//Reverse word order, keep words intact
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    vector<string> words;
    string word="";
    //extract words
    for(char ch :s){
        if(ch!=' '){
            word+=ch;
        }else{
            if(word!=""){
                words.push_back(word);
            }
        }
    }
}