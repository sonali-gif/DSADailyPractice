#include<bits/stdc++.h>
using namespace std;
class person{
    public:
    int age;
    string name;
};
class student:public person{
    public:
    int marks;
};
class teacher:public person{
    public:
    int experience;
};
int main(){
    student s1;
    teacher t1;
    s1.age=90;
    s1.marks=99;
    s1.name="mangesh";
    t1.name="tarun";
    t1.age=18;
    t1.experience=2;
    cout<<t1.age<<" "<<s1.name<<" ";
    return 0;
}