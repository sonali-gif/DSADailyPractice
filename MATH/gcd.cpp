//GCD (Euclidean) GCD(a,b)=GCD(b,a%b)
//Find GCD of 48 and 18
// 48 % 18 = 12
// 18 % 12 = 6
// 12 % 6  = 0 GCD=6
#include<bits/stdc++.h>
using namespace std;
int main(){
    //time comp-O(log(min(a,b)))
    int a,b;
    cin>>a>>b;
    while(b>0){
       int rem= a%b;
       a=b;
       b=rem;
    }
    cout<<"GCD= "<<a;
    return 0;
}