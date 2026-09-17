#include<bits/stdc++.h>
using  namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};
class que{
    public:
    node* strt=NULL;
    node* end=NULL;
    int size=0;

    void push(int x){
        node* newNode =new node(x);
        if(strt==NULL){
            strt=end=newNode;
        }else{
            end->next=newNode;
            end=newNode;
        }
        size++;
    }

    int pop(){
        if(strt==NULL){
            cout<<"empty queue"<<endl;
            return-1;
        }
        int ele=strt->data;
        node* temp=strt;
        strt=strt->next;
        delete temp;
        size--;

        if(strt == NULL) {
            end = NULL;
        }

        return ele;
    }
    
    int sizee(){
        return size;
    }

    int top(){
        if(strt==NULL){ 
            cout<<"empty"; 
            return -1;}
        return strt->data;
    }
};
int main(){
    que q;
    q.push(23);
    q.push(22);
    q.push(21);
    q.push(20);
    cout<<q.top()<<endl;
    cout<<q.sizee()<<endl;
    q.pop();
    cout<<q.top()<<endl;
    cout<<q.sizee()<<endl;
}