#include<iostream>
using namespace std;
//function tht return some value
int printSum(int n1, int n2){
    cout<<n1+n2;
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    printSum(n1,n2);
    return 0;

}