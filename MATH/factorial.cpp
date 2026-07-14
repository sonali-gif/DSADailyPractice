//Factorial
#include<bits/stdc++.h>
using namespace std;
int main(){
    //time comp-O(n)
    int a;
    cin>>a;
    int fact=1;
    for(int i=1;i<=a;i++){
        fact *=i;
    }
    cout<<fact;
    return 0;
}