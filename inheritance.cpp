#include <iostream>
#include <string>
using namespace std;

class person {
public:
    string name;
    int age;

    person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    person() {
        cout << "parent" << endl;
    }

    ~person() {
        cout << "de-parent" << endl;
    }
};

class student : public person {
public:
    int rollNo;

    student(string name, int age, int rollNo)
        : person(name, age) {
        this->rollNo = rollNo;
        cout << "child" << endl;
    }

    ~student() {
        cout << "de-child" << endl;
    }

    void getInfo() {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "rollNo: " << rollNo << endl;
    }
};

int main() {
    student s1("sam", 21, 2344);

    s1.getInfo();
}