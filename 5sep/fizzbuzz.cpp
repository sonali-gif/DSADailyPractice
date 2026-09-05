//The basic FizzBuzz rule is:
// If divisible by 3 → Fizz
// If divisible by 5 → Buzz
// If divisible by both → FizzBuzz
// Otherwise → number
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    if(i%3==0 && i%5==0){
        cout<<"FizzBuzz";
    }else if(i%3==0){
        cout<<"Fizz";
    }else if(i%5==0){
        cout<<"Buzz";
    }else{
        cout<<i;
    }
    cout<<" ";
}
    return 0;
}