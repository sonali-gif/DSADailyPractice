//Minimum digit in number
#include<bits/stdc++.h>
using namespace std;
int minnum(int n){
    //time comp-O(d)
    int mini=INT_MAX;
    while(n>0){
        int digit=n%10;
        if(digit<mini){
            mini=digit;
        }
        n=n/10;
    }
    return mini;
}
int main(){
    int n;
    cin>>n;
    cout<<minnum(n);
    return 0;
}