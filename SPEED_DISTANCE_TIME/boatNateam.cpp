//A boat's speed in still water is B km/hr, and the speed of the stream (current) is C km/hr.
// Take B and C as input from the user.
// Validate that both speeds are positive. Calculate:
// Downstream speed (boat moving with the current) = B + C
// Upstream speed (boat moving against the current) = B - C
// If C >= B, the boat cannot make progress upstream — handle this as an invalid scenario.
// Optionally, take a distance D (in km) as input and 
//calculate the time taken (in hours) to cover that distance both downstream and upstream, using:
// time_downstream = D / downstream_speed OR time_upstream = D / upstream_speed
#include<bits/stdc++.h>
using namespace std;
int main(){
    double b,c;
    cout<<"enter boat speed in km/hr:";
    cin>>b;
    cout<<"enter stream speed in km/hr: ";
    cin>>c;
    if(b<=0){
        cout<<"invalid ";
        return 0;
    }
    else if (c<=0){
        cout<<"invalid ";
        return 0;
    }
    double downstrm=b+c;
    if(c>=b){
        cout<<"invalid condition";
        return 0;
    }
    double upstrm=b-c;
    double distance;
    cout<<"enter distance in km:";
    cin>>distance;
    if(distance<=0){
        cout<<"invalid distance";
        return 0;
    }
    double time_up=distance/upstrm;
    double time_down=distance/downstrm;
    cout<<"time of upstream: "<<time_up<<endl;
    cout<<"time of downstream: "<<time_down<<endl;
    return 0;
}