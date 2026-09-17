#include<bits/stdc++.h>
using namespace std;
class stk{
    public:
    queue<int>q;
    void push(int x){
        int n=q.size();
        q.push(x);
        for(int i=1;i<n;i++){
            q.push(q.front());
            q.pop();
        }
    }
    int pop(){
        if(q.empty()){
            cout<<"empty"<<endl;
            return -1;
        }
        int ele =q.front();
        q.pop();
        return ele;
    }

    int top(){
        return q.front();
    }
};
int main(){
    stk s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.top() << endl;

    s.pop();

    cout << s.top() << endl;

    

    return 0;
}
