#include<bits/stdc++.h>
using namespace std;
class stackImp{
    int top;
    int arr[10];
    public:
    stackImp() {
        top=-1;
    }

    void push(int x){
        if(x>=10){
            cout<<"stack overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }

    void pop(){
        if(top==-1){
            cout<<"stack is empty";
            return;
        }
        top--;
    }

    int topp(){
        if(top==-1){
            cout<<"stack is empty";
            return -1;
        }
        return arr[top];
    }

    bool isempty(){
        return top ==-1;
    }
};
int main(){
    stackImp a;
    a.push(2);
    a.push(5);
    a.push(6);
    a.push(8);
  
   cout<< a.isempty()<<endl;
  cout<<  a.topp();
    return 0;
}
