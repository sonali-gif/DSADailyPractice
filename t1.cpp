#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter marks:"<<"\n";
    cin>>n;
    if(n<=25){
        cout<<"F";
    }else if(n>25 && n<=44){
        cout<<"E";
    }
}