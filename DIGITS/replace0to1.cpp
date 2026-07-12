#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0,place=1;
    while(n>0){
        int digit=n%10;
        if(digit==0){
            digit=1;
        }
        ans=digit*place+ans;
        place=place*10;
        n=n/10;
    }
    cout<< ans;
    return 0;
}