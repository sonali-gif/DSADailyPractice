//Perfect Donation Amount — Check if perfect number
//Problem Statement:
// A company wants to donate an amount to charity. 
//The donation amount is considered perfect if the sum of all its proper divisors (excluding the number itself) is equal to the original donation amount.
// You are given a number N. Check whether N is a Perfect Number or not.
// If it is perfect → print "Perfect Number"
// Otherwise → print "Not Perfect Number"
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        cout<<"perfect num";
    }else{
        cout<<"not perfect";
    }
    return 0;
}