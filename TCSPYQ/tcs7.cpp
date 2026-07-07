//Given a string S (input consisting) of '*' and '#'. 
//The length of the string is variable. 
//The task is to find the minimum number of '*' or '#' to make it a valid string. 
//The string is considered valid if the number of '*' and '#' are equal. The '*' and '#' can be at any position in the string.
// Note: The output will be a positive or negative integer based on number of '*' and '#' in the input string.
// (*>#): positive integer
// (#>*): negative integer
// (#=*): 0

#include<bits/stdc++.h>
using namespace std;
int main(){
    //input string
    string s;
    getline(cin,s); 
    //count star n hash  
    int cntst=0;
    int cnthash=0;
    for(int i=0;i<s.length();i++) {
        if(s[i]=='#'){
            cnthash++;
        }else{
            cntst++;
        }
    }  
    // print (*>#): positive integer
    //(#>*): negative integer
    //(#=*): 0
    cout<<cntst-cnthash;
    return 0;              
}
