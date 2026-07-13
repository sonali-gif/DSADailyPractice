//Primes in range (use Sieve of Eratosthenes for large N)
#include<bits/stdc++.h>
using namespace std;
//this work if range is small like 10^5
bool isprime(int n){
    if(n<2) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n,k;
    cin>>n>>k;
    // for(int i=n;i<=k;i++){//for small range
    //     if(isprime(i)){
    //         cout<<i<<" ";
    //     }
    // }

    // sieve approach for large range 
    vector<bool> isprime(k+1,true);
    isprime[0]=false;
    isprime[1]=false;

    for(int i=2;i*i<=k;i++){
        if(isprime[i]){
            //marking all multiple of i as non prime
            for(int j=i*i;j<=k;j+=i){
                isprime[j]=false;
            }
        }
    }
    //printing all prime
    for(int i=n;i<=k;i++){
        if(isprime[i]){
            cout<<i<<" ";
        }
    }
    return 0;
}