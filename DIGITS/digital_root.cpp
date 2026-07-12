//Given N and R, sum digits of N, repeat R times, return single digit 
//here r times means ntg because in end we have to return single digit only
#include<bits/stdc++.h>
using namespace std;
int digitalroot(long long n,int r){
    //time comp-O(r*d)
    long long current =n; //strt with original num
    //step 1 : do digit sum exactly r times
    for(int i=0;i<r;i++){
        int sum=0;
        while(current>0){
            sum += current%10;
            current /=10;
        }
        current=sum;
    }
    //step 2: if still not single digit keep summing
    while(current>=10){
        if(current<10)break;
        int sum=0;
        while(current>0){
            sum +=current%10;
            current /= 10;
        }
        current=sum;
    }
    return current;//always return single value 
}

int main(){
    long long n;
    cin>>n;
    int r;
    cin>>r;
    cout<<digitalroot(n,r)<<endl;
    
    return 0;
}