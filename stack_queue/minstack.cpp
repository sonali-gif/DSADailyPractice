#include<bits/stdc++.h>
using namespace std;
class MinStack{
    public:
    stack<int>s;
    stack<int>minS;

    void push(int x){
        s.push(x);//put ele in normal stack

        if(minS.empty()){//if minS is empty
            minS.push(x);
        }else if(x<=minS.top()){
            minS.push(x);
        }
    }

    void pop(){
        if(s.empty()){
            cout<<"stack is empty"<<endl;
            return;
        }

        if(s.top()==minS.top()){
            minS.pop();
        }
        s.pop();
    }

    int top(){
        if(s.empty()){
            return -1;
        }
        return s.top();
    }

    int getMin(){
        if(minS.empty()){
            return -1;
        }
        return minS.top();
    }
};
int main(){
    MinStack st;
    st.push(40);
    st.push(50);
    st.push(20);
    st.push(90);

    cout<<st.top()<<endl;
    cout<<st.getMin()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.getMin();
}