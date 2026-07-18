// Check if a string is a palindrome (all edge cases)
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
    // Time Compl: O(n) space -O(1)
    int i = 0;
    int j = s.length() - 1;
    while(i <= j){
        // Skip non-alphanumeric characters from left
        while(i < j && !isalnum(s[i])){
            i++;
        }
        // Skip non-alphanumeric characters from right
        while(i < j && !isalnum(s[j])){
            j--;
        }
        // Convert to lowercase and compare
        if(tolower(s[i]) != tolower(s[j])){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main(){
    string s;
    getline(cin, s);   // takes input with spaces
    cout << isPalindrome(s);
    return 0;
}