#include<iostream>
#include<string>
using namespace std;
class teacher{
    //properties / attribute
    public:
    string name;
    string dept;
    string subject;
    double salary;

    //methods / member function
    void chngdept(string newdept){
        dept= newdept;
    }
};
int main(){
    teacher T1; //object declare
    T1.name ="sonali";
    T1.dept ="IT";
    T1.subject ="OOPS";
    T1.salary= 23456.6;

    cout<<T1.name;
}