#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    int sumNum(int a,int b){
    return a+b;
}
int sumNum(int a,int b,int c){
    return a+b+c;
}
};

int main(){
    A obj;

   cout<<obj.sumNum(5,6)<<endl;
   
   cout<<obj.sumNum(4,5,6);
   return 0;
}