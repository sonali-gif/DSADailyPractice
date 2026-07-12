//Count digits in number
#include<bits/stdc++.h>
using namespace std;
int countdig(int n){
    //time comp-O(d)
    int cnt=0;
    if(n==0){
        return 1;
    }
    while(n>0){
        
        cnt++;
        n=n/10;
    }
    
    return cnt;
}
int main(){
    int n;
    cin>>n;
    cout<<countdig(n);
    return 0;
}