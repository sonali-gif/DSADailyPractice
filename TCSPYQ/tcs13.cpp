//  – Given a string S(input consisting) of ‘*’ and ‘#’. The length of the string is variable.
// The task is to find the minimum number of ‘*’ or ‘#’ to make it a valid string.
// The string is considered valid if the number of ‘*’ and ‘#’ are equal.
// The ‘*’ and ‘#’ can be at any position in the string.
// Note : The output will be a positive or negative integer based on number of ‘*’ and ‘#’ in the input string.
// (*>#): positive integer
// (#>*): negative integer
// (#=*): 0:
// Input 1:
// ###***   -> Value of S
// Output : 0   → number of * and # are equal
#include<bits/stdc++.h>
using namespace std;
int main(){
    //time comp-O(n)
    string s;
    cin>>s;
    int cntstr=0;
    int cnthash=0;
    for(int  i=0;i<s.length();i++){
        if(s[i]=='*'){
            cntstr++;
        }else{
            cnthash++;
        }
    }
    cout<<cntstr-cnthash;
    return 0;
}