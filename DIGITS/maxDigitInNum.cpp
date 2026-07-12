//Maximum digit in number
#include<iostream>
using namespace std;
int maxnum(int n){
    //time comp-O(d)
    int maxi=0;
    while(n>0){
        int digit=n%10;
        if(digit>maxi){
            maxi=digit;
        }
        n=n/10;
    }
    return maxi;
}
int main(){
    int n;
    cin>>n;
    cout<<maxnum(n);
    return 0;
}