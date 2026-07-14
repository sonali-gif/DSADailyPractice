// factor of given number
#include<bits/stdc++.h>
using namespace std;
//time ciomp-O(n)
int main(){
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        if(n%i==0){     
            cout<<i<<" ";
           }
    }
    return 0;
}