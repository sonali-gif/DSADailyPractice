#include<bits/stdc++.h>
using namespace std;
int main(){
    string day;
    int n;
    cin>>day>>n;
    unordered_map<string,int>mp={
        {"sun",7},
        {"mon",6},
        {"tue",5},
        {"wed",4},
        {"thu",3},
        {"fri",2},
        {"sat",1}
    };
    int firstSunday = mp[day];
    int count = 0;
    for(int i = firstSunday; i <= n; i += 7)
        count++;

    cout << count;
    return 0;

}