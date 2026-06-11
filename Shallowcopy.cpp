#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    double* cgpaPtr;

    student(string name, double cgpa){
        this->name=name;
        cgpaPtr =new double;
        *cgpaPtr = cgpa;
    }
    student(student &obj){
        this->name=name;
        this->cgpaPtr =obj.cgpaPtr;
    }
    void getInfo(){
        cout<<"name:"<<name<<endl;
        cout<<"CGPA:"<<*cgpaPtr<<endl;
    }
};
int main(){
student s1("sam",9.3);
student s2(s1);
s1.getInfo();
*(s2.cgpaPtr)=7.9;// it will asssign to s1 cgpa also because of shallow copy
s1.getInfo();
return 0;
}
