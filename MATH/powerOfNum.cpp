// Power of a number
#include<bits/stdc++.h>
using namespace std;
int main(){
    //time comp-O(b)
    int a,b;
    cin>>a>>b;
    int result=1;
    for(int i=1;i<=b;i++){
        result *=a;
    }
    cout<<result;
    return 0;
}