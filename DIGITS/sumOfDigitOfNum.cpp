//Sum of digits of number
#include<iostream>
using namespace std;
int main(){
    //time comp-O(d)
    int n;
    cin>>n;
    int sum=0;
    while(n>0){
        int digit=n%10;
        sum +=digit;
        n=n/10;
    }
    cout<<sum;
    return 0;
}
