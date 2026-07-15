//Convert km/hr to m/s
#include<bits/stdc++.h>
using namespace std;
int main(){
    //time comp-O(1)
    double km_hr;
    cout<<"enter km/hr: ";
    cin>>km_hr;
    double ans= km_hr * 5/18;
    cout<< km_hr<<" in m/sec is: "<<ans;
    return 0;
}