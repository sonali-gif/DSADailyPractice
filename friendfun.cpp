#include<iostream>
using namespace std;

class A{
private:
    int x = 10;

    friend void show(A obj);
};

void show(A obj){
    cout << obj.x << endl;
}

int main(){
    A a;
    show(a);
}