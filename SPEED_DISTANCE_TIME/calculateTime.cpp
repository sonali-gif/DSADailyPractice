//A vehicle travels at a certain speed to cover a given distance. 
//Take distance (in km) and speed (in km/hr) as input from the user, 
//validate that both are positive (speed can't be 0, since that means the vehicle isn't moving),
// and calculate the time taken in hours
#include<iostream>
using namespace std;
//time comp-O(1)
int main(){
    double speed,time,distance;
    cout<<"enter distance in km: ";
    cin>>distance;
    cout<<"enter speed in km/hr: ";
    cin>>speed;
    if(speed<=0){
        cout<<"invalid speed";
        return 0;
    }
    else if(distance<=0){
        cout<<"invalid distance";
        return 0;
    }
     time= distance/speed;
     int hr=(int)time;
     int sec=(int)(time-hr)*60;
     cout<<"time : "<<hr<<"hrs"<<sec<<"sec";
     return 0;
}