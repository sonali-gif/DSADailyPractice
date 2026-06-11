#include<iostream>
#include<string>
using namespace std;
class person{
    public:
    string name;
    int age;

    person(string name,int age){
        this->name=name;
        this->age=age;
        cout<<"parent constructor"<<endl;
    }
    // void displayPerson(){
    //     cout<<"name:"<<name<<endl;
    //     cout<<"age:"<<age<<endl;
    // }
};
class teacher:public person{
    public:
    string course;
    teacher(string name,int age,string course):person(name,age){//calling parent constructor 
        this->course=course;
    }
    void displayTeacher(){
       
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"course: "<<course<<endl;   
    }
};
int main(){
    teacher t1("Sonali",20,"IT");
    // t1.name="ram";
    // t1.age=34;
    // t1.course="IT";
    // t1.displayPerson();
    t1.displayTeacher();
    return 0;

}