#include<iostream>
using namespace std;
class A{
    public:
   virtual void display(){
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
    B o1;
    o1.display();
  
    return 0;
}