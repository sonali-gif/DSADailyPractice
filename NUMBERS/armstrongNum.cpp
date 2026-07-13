//Armstrong number
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int original=n;//store original num 
    //count digit in num
    int cnt=1;
    int temp=n;
    while(temp>0){
        cnt++;
        temp=temp/10;
    }
    //claculating armstrong num
    int sum=0;
     temp=n;
    while(temp>0){
        int digit=temp%10;
        sum +=pow(digit,cnt);
        temp=temp/10;
    }
    //checking armstrong
    if(sum==original){
        cout<<"armstrong num";
    }else{
        cout<<"not armstrong num";
    }
    return 0;
}