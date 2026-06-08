#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(90);
    v.push_back(34);
    v.push_back(56);
    v.push_back(80);
    vector<int>:: iterator it ;
    for(it=v.begin(); it != v.end();it++){
        cout<<*(it)<<" ";
    }

}