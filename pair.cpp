#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int, string> s;
    s.first= 45;
    s.second ="sam";
    cout<<s.first<<endl;
    pair<int ,pair<int, double>>p;
    cout<<"enter 3 num:";
    cin>>p.first>>p.second.first>>p.second.second;
    cout<<p.first<<endl;
    cout<<p.second.second;
    // array to datatype pair
    pair<int,int> arr[]={{2,3},{4,6},{9,8}};
    cout<< arr[1].first;


}