#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;


    node(int val){
        data=val;
        next=NULL;
    }

};
class stackk{
    public:
    node* top;
    int size=0;

    void push(int x){
        node* newNode=new node(x);
        newNode->next=top;
        top=newNode;
        size++;
    }

    int pop(){
        if(top==NULL){
            cout<<"stack empty"<<endl;
            return -1;
        }
        int el=top->data;
        node* temp=top;
        top=top->next;
        delete temp;
        size--;
    }
    int peek(){
        if(top == NULL) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return top->data;
    }

    int sizee(){
        return size;
    }

    bool isempty(){
        return top==NULL;
    }
};
int main(){
    stackk s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.peek()<<endl;
    cout<<s.sizee()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    cout<<s.sizee()<<endl;
}