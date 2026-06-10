#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;  
    // input string

    // hash array for 26 letters (a to z)
    int hash[26] = {0};

    // precompute frequency
    for(int i = 0; i < s.size(); i++){
        hash[s[i] - 'a']++;
        // convert character to index and increase count
    }

    int q;
    cin >> q;
    // number of queries

    while(q--){
        char ch;
        cin >> ch;
        // character whose frequency we want

        cout << hash[ch - 'a'] << endl;
        // fetch frequency in O(1)
    }
}