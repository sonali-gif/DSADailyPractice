//Two trains of lengths L1 and L2 meters are running at speeds S1 and S2 km/hr respectively. 
//Take these four values as input from the user, along with the direction (same or opposite). 
//Validate that speeds and lengths are positive. Calculate:
// The relative speed (in km/hr, then convert to m/s)
// The time taken (in seconds) for the two trains to completely cross each other
#include<bits/stdc++.h>
using namespace std;
int main(){
    //time comp-O(1)
    double l1,l2,s1,s2;
    string direction;
    double relative_speed;
    double time;
    cout<<"enter length1 and length2 of 2 train in meter: ";
    cin>>l1>>l2;
    if(l1<=0||l2<=0){
        cout<<"invalid length";
        return 0;
    }
    cout<<"enter speed1 and speed2 of 2 train in km/hr: ";
    cin>>s1>>s2;
     if(s1<=0||s2<=0){
        cout<<"invalid speed";
        return 0;
    }
    cout<<"enter direction (same or opposite): ";
    cin>>direction;

    if(direction=="same"){
        relative_speed=fabs(s2-s1)*5/18;
    }
    else if(direction=="opposite"){
        relative_speed=(s2+s1)*5/18;
    }
    else{
        cout<<"invalid direction";
        return 0;
    }

    if(relative_speed==0){
        cout<<"trains never cross (same speed, same direction)";
        return 0;
    }

    cout<<"relatie speed: "<<relative_speed<<endl;
    time=(l1+l2)/relative_speed;
    cout<<"time taken: "<<time;
    return 0;
}