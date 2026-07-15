//Write a program that takes distance (in meters) and time (in seconds) as input from the user,
// validates the inputs (distance and time must be positive numbers — time cannot be zero, 
//since that would cause division by zero), and then calculates and outputs the speed in km/hr. 
//If the input is invalid, display an appropriate error message instead of computing speed.
#include<bits/stdc++.h>
using namespace std;
int main(){
    //time comp-O(1)
    double distance,speed,time;
    cout<<"enter distance in meter: ";
    cin>>distance;
    cout<<"enter time in seconds: ";
    cin>>time;
    if(distance<=0 ){
        cout<<"invalid input ,distance must be postive.";
        return 0;
    }else if(time<=0){
        cout<<"invalid input ,time must be postive";
        return 0;
    }
    speed=distance/time;
    cout<<"speed in km/hr: "<<speed*18/5;
    return 0;
}