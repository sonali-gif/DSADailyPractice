//check palindrome
#include<bits/stdc++.h>
using namespace std;
bool palindrone(int n){
    //time comp-O(d)
    int original=n;
    int rev =0;
    while(n>0){
        int digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    return original ==rev;
    
}
int main(){
    int n;
    cin>>n;
    cout<<palindrone(n);
    return 0;
}