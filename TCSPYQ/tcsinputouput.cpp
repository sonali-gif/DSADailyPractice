#include<bits/stdc++.h>
using namespace std;
//when we dont know size
// int main(){
// vector<int>v;
// int n;
// while(cin>>n){
//     v.push_back(n);
// }
// for(int a:v){
//     cout<<a<<" ";
// }
// return 0;
// }
//taking input when we know size

// int main(){
    
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int a:arr){
//         cout<<a<<" ";
//     }
//     return 0;
// }
// when we have to take space sprerated  value
// int main(){
//     string s;//create string to store whole input line
//     getline(cin,s);//read entire line including space
//     stringstream ss(s);//convert string into stream(like cin)
//     int x;
//     vector<int>v;
//     while(ss>>x){//work exactly like cin>>x but input come from string
//         v.push_back(x);
//     }
//     for(int a: v){
//         cout<<a<<" ";
//     }
//     return 0;
// }
//if we want to take comma separated values
int main(){
    string s;//create string to store whole input line
    getline(cin,s);//read entire line including space
    stringstream ss(s);//convert string into stream(like cin)
    
    vector<int>v;
    string temp;
    while(getline(ss,temp,',')){
        v.push_back(stoi(temp));//stoi is function which convert string to integer
    }
    for(int a: v){
        cout<<a<<" ";
    }
}