#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    int age;
};
class B{
    public:
    string name;
};
class C:public A, public B{
    public:
    int marks;
    void display(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"marks:"<<marks<<endl;
    }
};
int main(){
    C a1;
    a1.name="sam";
    a1.age=12;
    a1.marks=90;
    a1.display();
    return 0;
}