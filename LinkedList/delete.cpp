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
class listt{
    public:
    node* head;
    node* tail;

    listt(){
        head=tail=NULL;
    }

    //insert at end
    void push_back(int val){
        node* newNode= new node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        tail->next=newNode;
        tail=newNode;
    }
    //deleting at first-O(1)
    void pop_front(){
        node* temp=head;
        if(head==NULL){
            return;
        }
        head=head->next;
        delete(temp);
    }
    //print
    void print(){
        node* temp=head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

};
int main(){
    listt ll;
    ll.push_back(10);
    ll.push_back(20);
    ll.push_back(30);
    ll.push_back(40);
    ll.push_back(50);
    ll.print();
    cout<<endl;
    ll.pop_front();
    ll.print();
    return 0;
}