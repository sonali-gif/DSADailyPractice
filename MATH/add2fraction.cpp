//Add two fractions
#include<bits/stdc++.h>
using namespace std;
int main(){
    //time comp-O(log(min(num,deno)))
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int num=(a*d)+(b*c);
    int deno=b*d;

    int gcd= __gcd(num,deno);

    num /=gcd;
    deno /=gcd;

    cout<<num<<"/"<<deno;
    return 0;
}