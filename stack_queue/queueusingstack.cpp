#include<bits/stdc++.h>
using namespace std;
class qu{
    public:
    stack<int>s1,s2;

    void push(int x){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }

    int top(){
        if (s1.empty()) {
            cout << "Queue is empty";
            return -1;
        }
       return  s1.top();
    }

    int pop(){
        if(s1.empty()){
            cout<<"empty";
            return -1;
        }
        int el=s1.top();
         s1.pop();

         return el;
    }

};
int main(){
    qu q;
    

    q.push(10);
    q.push(20);
    q.push(30);

    cout << q.top() << endl;  // 10

    cout << q.pop() << endl;  // 10
    cout << q.pop() << endl;  // 20
    cout << q.pop() << endl;  // 30
    return 0;
}