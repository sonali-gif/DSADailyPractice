//reverse integer
#include<bits/stdc++.h>
using namespace std;
int revnum(long long n){
    //time comp-O(d) where d is num of digits
    int sign=1;
    //store sign
    if(n<0){
        sign=-1;
        n=abs(n);
    }
    long long rev=0;
    while(n>0){
        int digit =n%10;//get last digit
        rev=rev*10+digit;//buil reverse
        n=n/10;//remove last digit
    }
    return sign*rev;
}
int main(){
    long long n;
    cin>>n;
    cout<<revnum(n);
    return 0;
}