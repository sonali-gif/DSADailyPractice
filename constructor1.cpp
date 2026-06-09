#include<iostream>
#include<string>
using namespace std;
class teacher{
    //properties / attribute
    public:
    // non parameterized constructor
    teacher(){
        dept ="IT" ;//automatically assign dept to all object  
    }
    //paramerterized constructor
    teacher(string name, string d,string s,double sa){
       // name =name;  //create confusion
       this->name=name;//this->name means object name
        dept =d;
        subject=s;
        salary =sa;
    }   
    //copy constructor
    teacher(teacher &obj){//pass by reference &obj
        cout<<"this is custom copy constructor";
        this->name=obj.name;
        this->dept=obj.dept;
    }
    string name;
    string dept;
    string subject;
    double salary;

    //methods / member function
    void chngdept(string newdept){
        dept= newdept;
    }
    void getInfo(){
        cout<<"name:"<<name<<endl;
        cout<<"dept:"<<dept<<endl;
        cout<<"salary:"<<salary<<endl;
    }
};
int main(){
    // teacher T1; //object declare
    teacher T1("Shreya","CE","CN",34677); 
    // T1.name ="sonali";
    // T1.subject ="OOPS";
    // T1.salary= 23456.6;
    teacher T2(T1);//deafult copy constructor call hua
    T2.getInfo();

  T1.getInfo();
}