//Fibonacci up to N terms
#include<bits/stdc++.h>
using namespace std;
int main(){
    //time comp-O(N)
    int n;
    cin>>n;
    int a=0,b=1;
    for(int i=0;i<n;i++){
        cout<<a<<" ";
        int nxt=a+b;
        a=b;
        b=nxt;
    }
    return 0;
}