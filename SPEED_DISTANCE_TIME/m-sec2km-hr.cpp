//Convert m/s to km/hr
#include<iostream>
using namespace std;
int main(){
    //time comp-O(1)
    double m_sec;
    cout<<"enter m/sec: ";
    cin>>m_sec;
    double ans= m_sec *18/5;
    cout<<m_sec<<" in km/hr is: "<<ans;
    return 0;
}