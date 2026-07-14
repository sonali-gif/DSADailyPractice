//Roots of quadratic equation
#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c;
    cin>>a>>b>>c;
    double d =b*b -4*a*c;
    if(d>0){
        double root1= (-b+sqrt(d))/(2*a);
        double root2= (-b-sqrt(d))/(2*a);
        cout<<root1<<" "<<root2;
    }else if(d==0){
        double root = -b/(2*a);
        cout<<root;
    }
    else{
    cout<<"no real roots";
}
return 0;
}