#include<bits/stdc++.h>
using namespace std;
class car{
    public:
    int lisenceNum;
    string name;
    string type;

    void updatecost(int cost){
        double newcost=cost;
    }
};
int main(){
    car c1;
    c1.lisenceNum=123456677;
    c1.name="Toyoto";
    cout<<c1.lisenceNum;
}