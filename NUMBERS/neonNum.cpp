//Neon number-number where the sum of digits of its square is equal to the original number.
#include<bits/stdc++.h>
using namespace std;
int main(){
    //time comp-O(log₁₀(N²))
    int n;
    cin>>n;
    int sq=n*n;
    int sum=0;
    while(sq>0){
        int digit=sq%10;
        sum+=digit;
        sq /=10;
    }
    if(sum==n){
        cout<<"Neon Number";
    }else{
        cout<<"Not Neon Number";
    }
    return 0;
}