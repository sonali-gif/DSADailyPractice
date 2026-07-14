//Abundant number-number where the sum of its proper divisors is greater than the number itself.
#include<bits/stdc++.h>
using namespace std;
int main(){
    //time comp-O(N)
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum>n){
        cout<<"abundant number";
    }else{
        cout<<"Not Abundant Number";
    }
    return 0;
}