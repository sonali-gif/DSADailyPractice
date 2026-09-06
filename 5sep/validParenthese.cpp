#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> st;
    for(char c : s) {
        // Opening brackets
        if(c == '(' || c == '{' || c == '[') {
            st.push(c);
        }
        // Closing brackets
        else {

            if(st.empty()) {
                cout << "Invalid";
                return 0;
            }

            if(c == ')' && st.top() != '(') {
                cout << "Invalid";
                return 0;
            }

            if(c == '}' && st.top() != '{') {
                cout << "Invalid";
                return 0;
            }

            if(c == ']' && st.top() != '[') {
                cout << "Invalid";
                return 0;
            }

            st.pop();
        }
    }
    if(st.empty())
        cout << "Valid";
    else
        cout << "Invalid";
    return 0;
}