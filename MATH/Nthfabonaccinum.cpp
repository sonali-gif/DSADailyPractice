//Nth Fibonacci number
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    //time comp-O(n)
    cin>>n;
    int a=0,b=1;
    if(n==0){
        cout<<0;
        return 0;
    }

    if(n==1){
        cout<<1;
        return 0;
    }
    for(int i=2;i<=n;i++){
        int c=a+b;
        a=b;
        b=c;
    }
    cout <<b;
    return 0;
}