//Spy number-number where the sum of its digits is equal to the product of its digits
#include<bits/stdc++.h>
using namespace std;
int main(){
    //Time Comp: O(log₁₀N)
    int n;
    cin>>n;
    int sum=0;
    int product=1;
    while(n>0){
        int digit=n%10;
        sum += digit;
        product *=digit;
        n /=10;
    }
    if(sum==product){
        cout<<"Spy Number";
    }else{
        cout<<"Not Spy Number";
    }
    return 0;
}