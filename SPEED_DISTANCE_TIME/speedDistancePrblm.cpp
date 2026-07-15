//A train covers a total distance of 800 meters — it crosses a 400 m long railway track (platform) and 
// then a 400 m long bridge — in 40 seconds. 
// Find the speed of the train in km/hr.
#include<bits/stdc++.h>
using namespace std;
int main(){
    //time comp-O(1)
    double speed;
    double distance=800;
    double time=40;
     speed=distance/time;
     cout<<"speed in km/hr: "<<speed*18/5;
     return 0;
}