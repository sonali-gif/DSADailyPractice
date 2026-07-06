#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(n==0){
        cout<<0;
        return 0;
    }
    int product=1;
    while(n>0){
        int digit =n%10;
        product*=digit;
        n=n/10;
    }
    cout<<product;
    return 0;
}