//Jack is always excited about sunday. 
//It is favourite day, when he gets to play all day.
// And goes to cycling with his friends. 
//So every time when the months starts he counts the number of sundays he will get to enjoy.
// Considering the month can start with any day, be it Sunday, Monday…. Or so on. 
//Count the number of Sunday jack will get within n number of days.
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