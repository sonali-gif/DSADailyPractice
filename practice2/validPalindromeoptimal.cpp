#include<bits/stdc++.h>
using namespace std;
//optimal approach in this we use 2 pointer approach
//time comp -O(N) space -O(1)
bool checkpanindrome(string s){
    int l=0;
    int r=s.size()-1;
    while(l<r){
        while(l<r && !(isalnum(s[l]))){
            l++;
        }
        while(l<r && !(isalnum(s[r]))){
            r--;
        }
        if(tolower(s[l])!=tolower(s[r])){
            return 0;
        }
        l++;
        r--;
    }
    return 1;

}
int main(){
    string s1 ="A man, a plan, a canal: Panama";
    cout<<checkpanindrome(s1)<<" ";
    string s2 =" race a car";
    cout<<checkpanindrome(s2);
}
