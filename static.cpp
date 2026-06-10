#include<bits/stdc++.h>
using namespace std;
void fun(){
    // int x=0; it will return 0 all 3 times 
    static int x=0;
    cout<<"x :"<<x<<endl;
    x++;
}
int main(){
    fun();
    fun();
    fun();
    return 0;
}