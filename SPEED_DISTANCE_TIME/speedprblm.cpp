//An object covers a distance of 1000 meters in 50 seconds. 
//Write a program to calculate and print its speed in km/hr.
#include<iostream>
using namespace std;
int main(){
    //time comp-O(1)
    double distance=1000;
    double time=50;
    double speed =distance/time;
    cout<<"speed in km/hr: "<<speed*18/5;
    return 0;
}