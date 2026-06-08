#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter any number:";
    cin>>n;
    int count=0;
    while(n>0){
        int lastDig = n%10;
        cout<< lastDig<<endl;
        n=n/10;
        count++;
    }
    cout<<count;

}