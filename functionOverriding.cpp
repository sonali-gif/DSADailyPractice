#include<iostream>
using namespace std;
class A{
    public:
    void display(){
        cout<<"parent class"<<endl;
    }
};
class B:public A{
    public :
    void display(){
        cout<<"Child class";
    }
};
int main(){
    A o1;
    o1.display();
    B ow;
    ow.display();
    return 0;
}