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

};
class teacher:public person{
    public:
    string course;
    teacher(string name,int age,string course):person(name,age){//calling parent constructor 
        this->course=course;
    }
    
};
class professor:public teacher{
    public:
    int experience;

    professor(string name,string course,int experience,int age):teacher(name,age,course){
        this->experience=experience;
    }
    void displayProfessorr(){
       
        cout<<"name:"<<name<<endl;
        cout<<"experinec"<<experience<<endl;
        cout<<"course: "<<course<<endl;   
    }
};
int main(){
    professor p1("Sonali","it",12,20);
   
    p1.displayProfessorr();
    return 0;

}