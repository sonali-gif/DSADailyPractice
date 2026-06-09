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
    //destrcutor
    ~student(){
        cout<<" delete"; 
    }
    void getInfo(){
        cout<<"name:"<<name<<endl;
        cout<<"CGPA:"<<*cgpaPtr<<endl;
    }
};
int main(){
student s1("sam",9.3);
s1.getInfo();

return 0;
}
