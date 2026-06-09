#include<iostream>
using namespace std;
void sumNum(int i,int n,int sum){
    if(i>n){
        cout<<sum;
        return;
    }
    sumNum(i+1,n,sum+i);
}
int main(){
    sumNum(1,5,0);
}