#include<iostream>
using namespace std;
//print from 1 to n
void printNum(int i,int n){
    if(i>n){//base condition
        return;
    }
    cout<<i<<" ";
    printNum(i+1,n);//recursive cll
    
}
// print name n times
void printName(int i,int n){
    if(i>n){
        return;
    }
    printName(i+1,n);
    cout<<"abc"<<endl;
}
//print from n to 1
void printrev(int i,int n){
    if(i<1){
        return;
    }
    cout<<i<<" ";
    printrev(i-1,n);
    
}
int main(){
    printNum(1,5);
    printName(1,3);
    printrev(10,1);
    return 0;
}