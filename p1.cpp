#include <iostream>
using namespace std;
int main(){
    cout<<"hello"<<endl;
    int a=9;
    cout<<a<<endl;
    cout<<sizeof(a)<<endl;
    if(a>0){
        cout<<"positive";
    }else if(a<0){
        cout<<"negative";
    }else{
        cout<<"0";
    }

}