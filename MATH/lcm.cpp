//LCM
#include<bits/stdc++.h>
using namespace std;
int main(){
    //time comp-O(lcm)
    int a,b;
    cin >>a>>b;
    int lcm=max(a,b);
    while(true){
        if(lcm%a==0&&lcm %b==0) break;
    
    lcm++;
}
cout<<"LCM: "<<lcm;
return 0;
}