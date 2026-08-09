#include<bits/stdc++.h>
using namespace std;
// int main(){
//     //taking string input  eg-1 2 3 4 5
//     string s;
//     getline(cin,s);
//     stringstream ss(s);

//     vector<int>arr;
//     int num;
//     while(ss>>num) arr.push_back(num);

//     for(int x:arr) cout<<x<<" ";
//     return 0;
// }


//comma seprated eg- 1,2,3,4,5
// int main(){
//     string s;
//     getline(cin,s);
//     stringstream ss(s);

//     vector<int>arr;
//     string token;
//     while(getline(ss,token,',')){
//         arr.push_back(stoi(token));
//     }

//     for(int x:arr) cout<<x<<" ";
//     return 0;
// }

//bracket input eg-[1,2,3,4]
int main(){
    
    string s;
    getline(cin,s);
    s.erase(remove(s.begin(),s.end(),'['),s.end());
    s.erase(remove(s.begin(),s.end(),']'),s.end());
    stringstream ss(s);

    vector<int>arr;
    string token;
    while(getline(ss,token,',')){
        arr.push_back(stoi(token));
    }

    for(int x:arr) cout<<x<<" ";
    return 0;
}
