//Harshad number-It is a positive integer that is divisible by the sum of its digits
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int original=n;
    int sum=0;
    while (n>0){
        int digit=n%10;
        sum += digit;
        n=n/10;
    }
    if(original %sum==0){
        cout<<"Harshad number";
    }else{
        cout<<"Not harshad number";
    }
    return 0;
    
}