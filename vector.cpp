#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(10);
    v.push_back(14);
    v.emplace_back(90);
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    vector <pair<int,int>> w;
    w.push_back({1,2});
    w.emplace_back(8,9);
    cout<< w[1].first;
    //same element multiple time in vector
    vector <int>k(5,100);
    cout<<k[1];
}
