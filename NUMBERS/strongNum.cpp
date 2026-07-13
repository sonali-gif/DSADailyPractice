//Strong number
//number is called a Strong Number if the sum of the factorials of its digits is equal to the original number.
//145 
//1! = 1
// 4! = 4×3×2×1 = 24
// 5! = 5×4×3×2×1 = 120 sum=120+24+1 =145 soo strong num
#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
             fact=i*fact;
        }
        return fact;
}
//time comp-O(logN)
int main(){
    int n;
    cin>>n;
    int original=n;
    int sum=0;
    while(n>0){
        int digit=n%10;
        sum += fact(digit);
        n=n/10;
    }
    if(sum==original){
        cout<<"strong num";
    }else{
        cout<<"not strong";
    }
    return 0;
}
